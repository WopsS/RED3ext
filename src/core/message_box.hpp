#pragma once

#include "core/detail/basic_message_box.hpp"

namespace red3ext
{
using narrow_message_box = detail::basic_message_box<char>;
using wide_message_box = detail::basic_message_box<wchar_t>;
} // namespace red3ext
