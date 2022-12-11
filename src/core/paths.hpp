#pragma once

#include <filesystem>

#include <Windows.h>

#include "core/non_copyable.hpp"
#include "core/non_moveable.hpp"

namespace red3ext
{
class [[nodiscard]] paths final
{
public:
    paths(HMODULE module);

    paths(const paths&) = default;
    paths& operator=(const paths&) = default;

    paths(paths&&) = default;
    paths& operator=(paths&&) = default;

    ~paths() noexcept = default;

    [[nodiscard]] std::filesystem::path module_file() const;

    [[nodiscard]] std::filesystem::path game_root() const;
    [[nodiscard]] std::filesystem::path mod_root() const;

    [[nodiscard]] std::filesystem::path known_folder(REFKNOWNFOLDERID rfid, DWORD dwFlags = KF_FLAG_DEFAULT) const;
    [[nodiscard]] std::filesystem::path system() const;

private:
    std::filesystem::path m_module_file;
    std::filesystem::path m_game_root;
};
} // namespace red3ext
