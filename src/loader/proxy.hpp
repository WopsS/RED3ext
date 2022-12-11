#pragma once

#include <string_view>

#include "core/movable_but_not_copyable.hpp"
#include "core/paths.hpp"

namespace red3ext
{
class [[nodiscard]] proxy
{
public:
    proxy() noexcept = default;
    virtual ~proxy() noexcept = default;

    RED3EXT_MOVABLE_BUT_NOT_COPYABLE(proxy);

    virtual std::wstring_view name() const noexcept = 0;

    void load(const paths& paths) const;

protected:
    template<typename T>
    [[nodiscard]] static T get_proc_address(HMODULE module, const std::string_view proc_name) noexcept;

    virtual void load_exports(HMODULE module) const = 0;

private:
    [[nodiscard]] HMODULE load_from_system(const paths& paths) const;
};

template<typename T>
inline T proxy::get_proc_address(HMODULE module, const std::string_view proc_name) noexcept
{
    auto address = GetProcAddress(module, proc_name.data());
    return reinterpret_cast<T>(address);
}
} // namespace red3ext
