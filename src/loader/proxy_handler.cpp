#include "proxy_handler.hpp"
#include "core/exception.hpp"

red3ext::proxy_handler& red3ext::proxy_handler::add_proxy(std::unique_ptr<proxy> proxy)
{
    m_proxies.emplace_back(std::move(proxy));
    return *this;
}

void red3ext::proxy_handler::run(const paths& paths) const
{
    const auto module_file = paths.module_file();
    const auto module_stem = module_file.stem();

    for (const auto& proxy : m_proxies)
    {
        const auto proxy_name = proxy->name();
        if (_wcsicmp(proxy_name.data(), module_stem.c_str()) == 0)
        {
            proxy->load(paths);
            return;
        }
    }

    throw red3ext::exception("no proxy found");
}
