#pragma once

#include <cstdint>

namespace Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;
constexpr uintptr_t Global_Main = 0x1400033A0 - ImageBase;
} // namespace Addresses