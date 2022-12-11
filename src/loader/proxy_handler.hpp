#pragma once

#include <concepts>
#include <filesystem>
#include <memory>
#include <vector>

#include "core/movable_but_not_copyable.hpp"
#include "core/paths.hpp"
#include "proxy.hpp"

namespace red3ext
{
class [[nodiscard]] proxy_handler
{
public:
    proxy_handler() noexcept = default;
    ~proxy_handler() noexcept = default;

    RED3EXT_MOVABLE_BUT_NOT_COPYABLE(proxy_handler);

    proxy_handler& add_proxy(std::unique_ptr<proxy> proxy);

    template<std::derived_from<proxy>... Proxies>
    proxy_handler& add_proxies();

    void run(const paths& paths) const;

private:
    std::vector<std::unique_ptr<proxy>> m_proxies;
};

template<std::derived_from<proxy>... Proxies>
inline proxy_handler& proxy_handler::add_proxies()
{
    (add_proxy(std::make_unique<Proxies>()), ...);
    return *this;
}
} // namespace red3ext
