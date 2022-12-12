#include "Main_Hooks.hpp"
#include "Addresses.hpp"
#include "App.hpp"
#include "Hook.hpp"
#include "Utils.hpp"

#define OFFSET_TO_ADDR(offset) reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + offset)

namespace
{
bool isAttached = false;

int32_t _Main(wchar_t*);
Hook<decltype(&_Main)> Main_fnc(Addresses::Global_Main, &_Main);

int32_t _Main(wchar_t* aCmdLine)
{
    try
    {
        auto app = App::Get();
        app->Startup();
    }
    catch (const std::exception& e)
    {
        SHOW_MESSAGE_BOX_AND_EXIT_FILE_LINE("An exception occured while RED3ext was starting up.\n\n{}",
                                            Utils::Widen(e.what()));
    }
    catch (...)
    {
        SHOW_MESSAGE_BOX_AND_EXIT_FILE_LINE("An unknown exception occured while RED3ext was starting up.");
    }

    auto result = Main_fnc(aCmdLine);

    try
    {
        auto app = App::Get();
        app->Shutdown();
    }
    catch (const std::exception& e)
    {
        SHOW_MESSAGE_BOX_AND_EXIT_FILE_LINE("An exception occured while RED3ext was shutting down.\n\n{}",
                                            Utils::Widen(e.what()));
    }
    catch (...)
    {
        SHOW_MESSAGE_BOX_AND_EXIT_FILE_LINE("An unknown exception occured while RED3ext was shutting down.");
    }

    return result;
}
} // namespace

bool Hooks::Main::Attach()
{
    spdlog::trace("Trying to attach the hook for the main function at {}...", OFFSET_TO_ADDR(Addresses::Global_Main));

    auto result = Main_fnc.Attach();
    if (result != NO_ERROR)
    {
        spdlog::error("Could not attach the hook for the main function. Detour error code: {}", result);
    }
    else
    {
        spdlog::trace("The hook for the main function was attached");
    }

    isAttached = result == NO_ERROR;
    return isAttached;
}

bool Hooks::Main::Detach()
{
    if (!isAttached)
    {
        return false;
    }

    spdlog::trace("Trying to detach the hook for the main function at {}...", OFFSET_TO_ADDR(Addresses::Global_Main));

    auto result = Main_fnc.Detach();
    if (result != NO_ERROR)
    {
        spdlog::error("Could not detach the hook for the main function. Detour error code: {}", result);
    }
    else
    {
        spdlog::trace("The hook for the main function was detached");
    }

    isAttached = result != NO_ERROR;
    return !isAttached;
}
