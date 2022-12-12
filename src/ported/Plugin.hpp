#pragma once

enum class EMainReason : uint8_t
{
    Load = 0,
    Unload
};

class Plugin
{
public:
    Plugin(const std::filesystem::path& aPath, wil::unique_hmodule aModule);

    Plugin(Plugin&&) noexcept = default;
    Plugin& operator=(Plugin&&) noexcept = default;

    virtual ~Plugin() = default;

    const std::wstring GetName() const;

    const std::filesystem::path& GetPath() const;
    HMODULE GetModule() const;

    bool Main(EMainReason aReason);

private:
    std::filesystem::path m_path;
    wil::unique_hmodule m_module;
};
