#include "CRunningState_Hooks.hpp"
#include "Addresses.hpp"
#include "App.hpp"
#include "Hook.hpp"
#include "Utils.hpp"

#define OFFSET_TO_ADDR(offset) reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + offset)

namespace
{
bool isAttached = false;

bool _CRunningState_Update(void*, void*);
Hook<decltype(&_CRunningState_Update)> CRunningState_Update(Addresses::CRunningState_Update, &_CRunningState_Update);

bool _CRunningState_Update(void* a1, void* a2)
{
    auto result = CRunningState_Update(a1, a2);

    try
    {
        auto app = App::Get();
        auto pluginSystem = app->GetPluginSystem();
        auto plugins = pluginSystem->GetPlugins();
        for (auto& [handle, plugin] : plugins)
        {
            plugin->Update();
        }
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

bool Hooks::CRunningState::Attach()
{
    spdlog::trace("Trying to attach the hook for the running state at {}...", OFFSET_TO_ADDR(Addresses::Global_Main));

    auto result = CRunningState_Update.Attach();
    if (result != NO_ERROR)
    {
        spdlog::error("Could not attach the hook for the running state. Detour error code: {}", result);
    }
    else
    {
        spdlog::trace("The hook for the running state was attached");
    }

    isAttached = result == NO_ERROR;
    return isAttached;
}

bool Hooks::CRunningState::Detach()
{
    if (!isAttached)
    {
        return false;
    }

    spdlog::trace("Trying to detach the hook for the running state at {}...", OFFSET_TO_ADDR(Addresses::Global_Main));

    auto result = CRunningState_Update.Detach();
    if (result != NO_ERROR)
    {
        spdlog::error("Could not detach the hook for the running state. Detour error code: {}", result);
    }
    else
    {
        spdlog::trace("The hook for the running state was detached");
    }

    isAttached = result != NO_ERROR;
    return !isAttached;
}
