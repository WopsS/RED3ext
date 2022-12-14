#include "Plugin.hpp"
#include "Utils.hpp"

Plugin::Plugin(const std::filesystem::path& aPath, wil::unique_hmodule aModule)
    : m_path(aPath)
    , m_module(std::move(aModule))
    , m_updateFn(nullptr)
{
}

const std::wstring Plugin::GetName() const
{
    return GetPath().stem();
}

const std::filesystem::path& Plugin::GetPath() const
{
    return m_path;
}

HMODULE Plugin::GetModule() const
{
    return m_module.get();
}

bool Plugin::Main(EMainReason aReason)
{
    const auto module = GetModule();
    const auto name = GetName();
    const auto reasonStr = aReason == EMainReason::Load ? L"Load" : L"Unload";

    spdlog::trace(L"Calling 'Main' function exported by '{}' with reason '{}'...", name, reasonStr);

    using Main_t = bool (*)(HMODULE, EMainReason);
    auto mainFn = reinterpret_cast<Main_t>(GetProcAddress(module, "Main"));
    if (mainFn)
    {
        try
        {
            auto success = mainFn(module, aReason);
            if (!success)
            {
                spdlog::trace(L"'Main' function returned 'false'");
                return false;
            }

            m_updateFn = reinterpret_cast<Update_t>(GetProcAddress(module, "Update"));
            spdlog::trace(L"'Main' function called successfully");
        }
        catch (const std::exception& e)
        {
            spdlog::warn(L"An exception occured while calling 'Main' function with reason '{}', exported by '{}'",
                         reasonStr, name);
            spdlog::warn(e.what());
            return false;
        }
        catch (...)
        {
            spdlog::warn(
                L"An unknown exception occured while calling 'Main' function with reason '{}', exported by '{}'",
                reasonStr, name);
            return false;
        }
    }
    else
    {
        spdlog::trace(L"'{}' does not export a 'Main' function, skipping the call", name);
    }

    return true;
}

void Plugin::Update() const
{
    if (m_updateFn)
    {
        m_updateFn();
    }
}
