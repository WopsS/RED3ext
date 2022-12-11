#include "paths.hpp"

red3ext::paths::paths(HMODULE module)
{
    auto raw_exe_file = wil::GetModuleFileNameW(nullptr);
    std::filesystem::path exe_file = raw_exe_file.get();
    m_game_root = exe_file
                      .parent_path()  // Resolve to "x64" directory.
                      .parent_path()  // Resolve to "bin" directory.
                      .parent_path(); // Resolve to game's root directory.

    auto raw_module_file = wil::GetModuleFileNameW(module);
    m_module_file = raw_module_file.get();
}

std::filesystem::path red3ext::paths::module_file() const
{
    return m_module_file;
}

std::filesystem::path red3ext::paths::game_root() const
{
    return m_game_root;
}

std::filesystem::path red3ext::paths::mod_root() const
{
    return game_root() / L"red3ext";
}

std::filesystem::path red3ext::paths::known_folder(REFKNOWNFOLDERID rfid, DWORD dwFlags) const
{
    wil::unique_cotaskmem_string result;

    auto hr = SHGetKnownFolderPath(rfid, dwFlags, nullptr, &result);
    THROW_IF_FAILED_MSG(hr, "Could not get folder");

    return result.get();
}

std::filesystem::path red3ext::paths::system() const
{
    return known_folder(FOLDERID_System);
}
