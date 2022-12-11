#pragma once

#include "core/paths.hpp"

namespace red3ext
{
class loader final
{
public:
    loader() noexcept = default;
    ~loader() noexcept = default;

    void run(const paths& paths) const;
};
} // namespace red3ext
