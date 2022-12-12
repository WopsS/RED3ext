#include "PluginSystem.hpp"
#include "Image.hpp"
#include "Utils.hpp"
#include "Version.hpp"
#include "stdafx.hpp"

#define LOG_FS_ERROR(text, ec)                                                                                         \
    auto val = ec.value();                                                                                             \
    const auto& category = ec.category();                                                                              \
    auto msg = category.message(val);                                                                                  \
    spdlog::error(text L". Error code: {}, msg: '{}'", val, Utils::Widen(msg))

#define LOG_FS_ENTRY_ERROR(text, entry, ec)                                                                            \
    auto val = ec.value();                                                                                             \
    const auto& category = ec.category();                                                                              \
    auto msg = category.message(val);                                                                                  \
    spdlog::error(text L". Error code: {}, msg: '{}', entry: '{}'", val, Utils::Widen(msg), entry)

PluginSystem::PluginSystem(const Config::PluginsConfig& aConfig, const Paths& aPaths)
    : m_config(aConfig)
    , m_paths(aPaths)
{
}

ESystemType PluginSystem::GetType()
{
    return ESystemType::Plugin;
}

void PluginSystem::Startup()
{
    if (!m_config.isEnabled)
    {
        return;
    }

    spdlog::trace("Loading plugins...");

    std::error_code ec;

    auto dir = m_paths.GetPluginsDir();
    auto exists = std::filesystem::exists(dir, ec);
    if (ec)
    {
        LOG_FS_ERROR("Could not check the plugins directory existence", ec);
        return;
    }

    if (!exists)
    {
        std::filesystem::create_directories(dir, ec);
        if (ec)
        {
            LOG_FS_ERROR("Could not create the plugins directory", ec);
            return;
        }
    }

    auto iter = std::filesystem::recursive_directory_iterator(
        dir, std::filesystem::directory_options::follow_directory_symlink, ec);

    if (ec)
    {
        LOG_FS_ERROR("Could not create an iterator for the plugins directory", ec);
        return;
    }

    auto end = std::filesystem::end(iter);
    for (; iter != end; iter.increment(ec))
    {
        /*
         * Do not allow something like:
         *  game_root/red3ext/plugins/some_plugin.dll
         */
        int32_t depth = iter.depth();
        if (depth < 1)
        {
            continue;
        }

        const auto& entry = *iter;
        const auto& path = entry.path();

        if (ec)
        {
            LOG_FS_ENTRY_ERROR(L"Could not fetch a directory entry", path, ec);
            continue;
        }

        // Deal with broken symlinks.
        if (entry.is_symlink(ec))
        {
            if (!entry.exists(ec))
            {
                // Symlink is broken, skip it.
                spdlog::warn(L"Symbolic link is broken, it will be skipped. Symlink: '{}'", path);
                continue;
            }
            else if (ec)
            {
                LOG_FS_ENTRY_ERROR(L"Could not check if the symlink exists", path, ec);
                continue;
            }
        }
        else if (ec)
        {
            LOG_FS_ENTRY_ERROR(L"Could not check if the entry is a symbolic link", path, ec);
            continue;
        }

        if (entry.is_regular_file(ec) && path.extension() == L".dll")
        {
            const auto stem = path.stem();
            if (m_config.ignored.contains(stem))
            {
                spdlog::debug(L"Skipping loading '{}', the plugin is ignored by the user. Path: '{}", stem, path);
                continue;
            }

            bool useAlteredSearchPath = depth == 1;
            Load(path, useAlteredSearchPath);
        }
        else if (ec)
        {
            LOG_FS_ENTRY_ERROR(L"Could not check if the entry is a regular file", path, ec);
        }
    }

    spdlog::info("{} plugin(s) loaded", m_plugins.size());
}

void PluginSystem::Shutdown()
{
    if (!m_config.isEnabled)
    {
        return;
    }

    auto size = m_plugins.size();
    spdlog::trace("Unloading {} plugin(s)...", size);

    for (auto it = m_plugins.begin(); it != m_plugins.end();)
    {
        it = Unload(it->second);
    }

    spdlog::info("{} plugin(s) unloaded", size);
}

void PluginSystem::Load(const std::filesystem::path& aPath, bool aUseAlteredSearchPath)
{
    spdlog::trace(L"Loading plugin from '{}'...", aPath);

    uint32_t flags = 0;
    if (aUseAlteredSearchPath)
    {
        flags = LOAD_WITH_ALTERED_SEARCH_PATH;
    }

    const auto stem = aPath.stem();

    try
    {
        wil::unique_hmodule handle(LoadLibraryEx(aPath.c_str(), nullptr, flags));
        if (!handle)
        {
            auto msg = Utils::FormatLastError();
            spdlog::warn(L"Could not load plugin '{}'. Error code: {}, msg: '{}', path: '{}'", stem, GetLastError(),
                         msg, aPath);
            return;
        }

        spdlog::trace(L"'{}' has been loaded into the address space at {}", stem, fmt::ptr(handle.get()));

        if (CheckIfSupportsGame(aPath, handle))
        {
            auto plugin = std::make_shared<Plugin>(aPath, std::move(handle));
            auto pluginName = plugin->GetName();
            auto module = plugin->GetModule();

            m_plugins.emplace(module, plugin);

            if (!plugin->Main(EMainReason::Load))
            {
                spdlog::warn(L"{} did not initalize properly, unloading...", pluginName);
                Unload(plugin);

                return;
            }

            spdlog::info(L"{} has been loaded", pluginName);
        }
    }
    catch (const std::exception& e)
    {
        spdlog::warn(L"An exception occured while loading '{}'. Path: '{}'", stem, aPath);
        spdlog::warn(e.what());
    }
    catch (...)
    {
        spdlog::warn(L"An unknown exception occured while loading '{}'. Path: '{}'", stem, aPath);
    }
}

PluginSystem::MapIter_t PluginSystem::Unload(std::shared_ptr<Plugin> aPlugin)
{
    aPlugin->Main(EMainReason::Unload);

    auto module = aPlugin->GetModule();
    auto iter = m_plugins.find(module);
    auto result = m_plugins.erase(iter);

    spdlog::info(L"{} has been unloaded", aPlugin->GetName());
    return result;
}


bool PluginSystem::CheckIfSupportsGame(const std::filesystem::path& aPath, const wil::unique_hmodule& aPlugin)
{
    const auto stem = aPath.stem();

    using Supports_t = const char* (*)();
    auto supportsFn = reinterpret_cast<Supports_t>(GetProcAddress(aPlugin.get(), "Supports"));
    if (!supportsFn)
    {
        // If 'Supports' doesn't exists then the plugin might not be a RED4ext plugin. It might be a dependency.
        auto err = GetLastError();
        if (err != ERROR_PROC_NOT_FOUND)
        {
            auto msg = Utils::FormatLastError();
            spdlog::warn(L"Could not retrieve 'Supports' function from '{}'. Error code: {}, msg: '{}', path: '{}'",
                         stem, GetLastError(), msg, aPath);
        }

        return false;
    }

    const char* supportedVersion;

    try
    {
        supportedVersion = supportsFn();
    }
    catch (const std::exception& e)
    {
        spdlog::warn(L"An exception occured while calling 'Supports' function exported by '{}'. Path: '{}'", stem,
                     aPath);
        spdlog::warn(e.what());
        return false;
    }
    catch (...)
    {
        spdlog::warn(L"An unknown exception occured while calling 'Supports' function exported by '{}'. Path: '{}'",
                     stem, aPath);
        return false;
    }

    if (_stricmp(supportedVersion, "independent"))
    {
        return true;
    }

    const auto image = Image::Get();
    const auto supportedVersions = image->GetSupportedVersions();
    for (const auto& version : supportedVersions)
    {
        if (std::to_wstring(version) == Utils::Widen(supportedVersion))
        {
            return true;
        }
    }

    spdlog::warn(L"'{}' is using an unsupported game version. Game version: {}, path: '{}'", stem,
                 Utils::Widen(supportedVersion), aPath);
    return false;
}
