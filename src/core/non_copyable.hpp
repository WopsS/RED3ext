#pragma once

namespace red3ext
{
class [[nodiscard]] non_copyable
{
public:
    constexpr non_copyable() noexcept = default;

    constexpr non_copyable(const non_copyable&) = delete;
    constexpr non_copyable& operator=(const non_copyable&) = delete;

    constexpr ~non_copyable() noexcept = default;
};
} // namespace red3ext
