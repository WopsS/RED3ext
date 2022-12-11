#pragma once

#include <concepts>
#include <exception>
#include <filesystem>
#include <memory>
#include <string_view>
#include <vector>

#include <Windows.h>

// Order is important for "mmsystem.h" and "mmddk.h".
#include <mmsystem.h>
// After "mmsystem.h".
#include <mmddk.h>

#include <dxgi.h>
#include <dxgi1_6.h>

#include <fmt/core.h>
#include <fmt/xchar.h>

#include <wil/win32_helpers.h>

// Include these last to prevent redefinition of "NTSTATUS" from WIL library.
#include <d3d11.h>
#include <d3d11on12.h>
#include <d3d12.h>
#include <d3d9.h>
#include <d3dkmthk.h>
#include <windows.graphics.directx.direct3d11.interop.h>
