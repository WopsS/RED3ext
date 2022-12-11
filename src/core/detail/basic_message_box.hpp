#pragma once

#include <cstdint>
#include <string_view>
#include <type_traits>

#include <Windows.h>

#include "core/common.hpp"
#include "core/non_copyable.hpp"
#include "core/non_moveable.hpp"

namespace red3ext::detail
{
template<typename CharT>
    requires std::same_as<CharT, char> || std::same_as<CharT, wchar_t>
class [[nodiscard]] basic_message_box final
    : private non_copyable
    , private non_moveable
{
public:
    basic_message_box(std::basic_string_view<CharT> title) noexcept;
    ~basic_message_box() noexcept = default;

    basic_message_box& change_message(std::basic_string_view<CharT> to) noexcept;
    basic_message_box& change_flags(std::uint32_t to) noexcept;

    void show() const noexcept;

private:
    std::basic_string_view<CharT> m_title;
    std::basic_string_view<CharT> m_message;
    std::uint32_t m_flags;
};

template<typename CharT>
    requires std::same_as<CharT, char> || std::same_as<CharT, wchar_t>
inline red3ext::detail::basic_message_box<CharT>::basic_message_box(std::basic_string_view<CharT> title) noexcept
    : m_title(std::move(title))
    , m_flags(MB_OK)
{
}

template<typename CharT>
    requires std::same_as<CharT, char> || std::same_as<CharT, wchar_t>
inline red3ext::detail::basic_message_box<CharT>& red3ext::detail::basic_message_box<CharT>::change_message(
    std::basic_string_view<CharT> message) noexcept
{
    m_message = std::move(message);
    return *this;
}

template<typename CharT>
    requires std::same_as<CharT, char> || std::same_as<CharT, wchar_t>
inline red3ext::detail::basic_message_box<CharT>& red3ext::detail::basic_message_box<CharT>::change_flags(
    std::uint32_t flags) noexcept
{
    m_flags = flags;
    return *this;
}

template<typename CharT>
    requires std::same_as<CharT, char> || std::same_as<CharT, wchar_t>
inline void red3ext::detail::basic_message_box<CharT>::show() const noexcept
{
    RED3EXT_ASSERT(!m_title.empty());

    if constexpr (std::is_same_v<CharT, char>)
    {
        MessageBoxA(nullptr, m_message.data(), m_title.data(), m_flags);
    }
    else if constexpr (std::is_same_v<CharT, wchar_t>)
    {
        MessageBoxW(nullptr, m_message.data(), m_title.data(), m_flags);
    }
}
} // namespace red3ext::detail
