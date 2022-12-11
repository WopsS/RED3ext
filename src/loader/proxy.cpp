#include "proxy.hpp"

#include <Windows.h>

#include <fmt/core.h>
#include <fmt/xchar.h>
#include <wil/win32_helpers.h>

void red3ext::proxy::load(const paths& paths) const
{
    auto handle = load_from_system(paths);
    load_exports(handle);
}

HMODULE red3ext::proxy::load_from_system(const paths& paths) const
{
    auto system_folder = paths.system();
    auto dll_path = system_folder / fmt::format(L"{}.dll", name());

    auto handle = LoadLibrary(dll_path.c_str());
    THROW_LAST_ERROR_IF_NULL_MSG(handle, "Cloud not load proxy");

    return handle;
}
