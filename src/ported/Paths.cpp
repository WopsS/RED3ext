#include "Paths.hpp"
#include "Utils.hpp"

Paths::Paths()
{
    std::wstring fileName;
    auto hr = wil::GetModuleFileNameW(nullptr, fileName);
    if (FAILED(hr))
    {
        SHOW_LAST_ERROR_MESSAGE_AND_EXIT_FILE_LINE(L"Could not get game's file name.");
        return;
    }

    std::filesystem::path exe = fileName;
    m_root = exe.parent_path()   // Resolve to "x64" directory.
                 .parent_path()  // Resolve to "bin" directory.
                 .parent_path(); // Resolve to game's root directory.
}

std::filesystem::path Paths::GetRootDir() const
{
    return m_root;
}

std::filesystem::path Paths::GetRED3extDir() const
{
    return GetRootDir() / L"red3ext";
}

std::filesystem::path Paths::GetLogsDir() const
{
    return GetRED3extDir() / L"logs";
}

std::filesystem::path Paths::GetPluginsDir() const
{
    return GetRED3extDir() / L"plugins";
}

const std::filesystem::path Paths::GetConfigFile() const
{
    return GetRED3extDir() / L"config.ini";
}
