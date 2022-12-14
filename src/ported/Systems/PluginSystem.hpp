#pragma once

#include "Config.hpp"
#include "ISystem.hpp"
#include "Paths.hpp"
#include "Plugin.hpp"

class PluginSystem : public ISystem
{
public:
    using Map_t = std::unordered_map<HMODULE, std::shared_ptr<Plugin>>;

    PluginSystem(const Config::PluginsConfig& aConfig, const Paths& aPaths);
    ~PluginSystem() = default;

    ESystemType GetType() final;

    void Startup() final;
    void Shutdown() final;

    const Map_t& GetPlugins() const;

private:
    using MapIter_t = Map_t::iterator;

    void Load(const std::filesystem::path& aPath, bool aUseAlteredSearchPath);
    MapIter_t Unload(std::shared_ptr<Plugin> aPlugin);

    bool CheckIfSupportsGame(const std::filesystem::path& aPath, const wil::unique_hmodule& aPlugin);

    const Config::PluginsConfig& m_config;
    const Paths& m_paths;

    Map_t m_plugins;
};
