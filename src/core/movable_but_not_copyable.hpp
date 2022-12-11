#pragma once

#define RED3EXT_MOVABLE_BUT_NOT_COPYABLE(cls)                                                                          \
    cls(const cls&) = delete;                                                                                          \
    cls& operator=(const cls&) = delete;                                                                               \
    cls(cls&&) noexcept = default;                                                                                     \
    cls& operator=(cls&&) noexcept = default;
