#pragma once

#include <cstdint>

namespace Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

constexpr uintptr_t Global_Main = 0x140287B20 - ImageBase;
constexpr uintptr_t CRunningState_Update = 0x1402875E0 - ImageBase;
} // namespace Addresses
