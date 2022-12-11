#pragma once

namespace red3ext
{
class [[nodiscard]] non_moveable
{
public:
    constexpr non_moveable() noexcept = default;

    constexpr non_moveable(non_moveable&&) = delete;
    constexpr non_moveable& operator=(non_moveable&&) = delete;

    constexpr ~non_moveable() noexcept = default;
};
} // namespace red3ext
