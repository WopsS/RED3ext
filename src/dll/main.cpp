#include "core/common.hpp"
#include "core/message_box.hpp"

#include "App.hpp"
#include "Image.hpp"

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
    RED3EXT_UNUSED_PARAMETER(reserved);

    constexpr std::uint32_t message_box_flags = MB_ICONERROR | MB_OK;

    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
    {
        DisableThreadLibraryCalls(module);

        try
        {
            const auto image = Image::Get();
            if (!image->IsWitcher())
            {
                break;
            }

            App::Construct();
        }
        catch (const std::exception& e)
        {
            red3ext::narrow_message_box("RED3ext - Exception occured in 'DllMain' at attach")
                .change_message(e.what())
                .change_flags(message_box_flags)
                .show();
        }
        catch (...)
        {
            red3ext::narrow_message_box("RED3ext - Unknown exception occured in 'DllMain'")
                .change_message("An unknown exception occured :(")
                .change_flags(message_box_flags)
                .show();
        }

        break;
    }
    case DLL_PROCESS_DETACH:
    {
        try
        {
            const auto image = Image::Get();
            if (!image->IsWitcher())
            {
                break;
            }

            App::Destruct();
        }
        catch (const std::exception& e)
        {
            red3ext::narrow_message_box("RED3ext - Exception occured in 'DllMain' at detach")
                .change_message(e.what())
                .change_flags(message_box_flags)
                .show();
        }
        catch (...)
        {
            red3ext::narrow_message_box("RED3ext - Unknown exception occured in 'DllMain' at detach")
                .change_message("An unknown exception occured :(")
                .change_flags(message_box_flags)
                .show();
        }

        break;
    }
    }

    return TRUE;
}
