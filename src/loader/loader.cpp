#include "loader.hpp"

#include <filesystem>
#include <string_view>

void red3ext::loader::run(const paths& paths) const
{
    static constexpr std::wstring_view mod_name = L"RED3ext.dll";

    auto mod_file = paths.mod_root() / mod_name;
    if (std::filesystem::exists(mod_file))
    {
        auto handle = LoadLibrary(mod_file.c_str());
        THROW_LAST_ERROR_IF_NULL(handle);
    }
}
