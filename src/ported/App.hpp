#pragma once

#include "Config.hpp"
#include "DevConsole.hpp"
#include "Paths.hpp"
#include "Systems/PluginSystem.hpp"

class App
{
public:
    ~App() = default;

    static void Construct();
    static void Destruct();
    static App* Get();

    void Startup();
    void Shutdown();

    PluginSystem* GetPluginSystem();

private:
    App();

    bool AttachHooks() const;

    template<typename T, typename... Args, typename = std::enable_if_t<std::is_base_of_v<ISystem, T>>>
    inline void AddSystem(Args&&... args)
    {
        m_systems.push_back(std::make_unique<T>(std::forward<Args>(args)...));
        std::sort(m_systems.begin(), m_systems.end(),
                  [](const std::unique_ptr<ISystem>& lhs, const std::unique_ptr<ISystem>& rhs)
                  { return lhs->GetType() < rhs->GetType(); });
    }

    Paths m_paths;
    Config m_config;
    DevConsole m_devConsole;

    std::vector<std::unique_ptr<ISystem>> m_systems;
};
