#pragma once

#include "proxy.hpp"

namespace red3ext
{
class [[nodiscard]] version_proxy final : public proxy
{
public:
    using proxy::proxy;

    std::wstring_view name() const noexcept final;

private:
    void load_exports(HMODULE module) const final;
};
} // namespace red3ext
