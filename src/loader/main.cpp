#include "loader.hpp"
#include "proxy_handler.hpp"

#include <Windows.h>

#include "core/common.hpp"
#include "core/exception.hpp"
#include "core/message_box.hpp"
#include "core/paths.hpp"

#include "proxies/d3d11_proxy.hpp"
#include "proxies/dxgi_proxy.hpp"
#include "proxies/version_proxy.hpp"
#include "proxies/winmm_proxy.hpp"

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
    RED3EXT_UNUSED_PARAMETER(reserved);

    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
    {
        DisableThreadLibraryCalls(module);

        constexpr std::uint32_t message_box_flags = MB_ICONERROR | MB_OK;

        try
        {
            red3ext::paths paths(module);
            red3ext::proxy_handler()
                .add_proxies<red3ext::d3d11_proxy, red3ext::dxgi_proxy, red3ext::version_proxy, red3ext::winmm_proxy>()
                .run(paths);

            red3ext::loader().run(paths);
        }
        catch (const std::exception& e)
        {
            red3ext::narrow_message_box("RED3ext (Loader) - Exception occured in 'DllMain'")
                .change_message(e.what())
                .change_flags(message_box_flags)
                .show();
        }
        catch (...)
        {
            red3ext::narrow_message_box("RED3ext (Loader) - Unknown exception occured in 'DllMain'")
                .change_message("An unknown exception occured :(")
                .change_flags(message_box_flags)
                .show();
        }

        break;
    }
    case DLL_PROCESS_DETACH:
    {
        break;
    }
    }

    return TRUE;
}
