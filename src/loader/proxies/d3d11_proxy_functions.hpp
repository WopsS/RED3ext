#pragma once

#include <d3d11.h>
#include <d3d11on12.h>
#include <d3d12.h>
#include <d3d9.h>
#include <d3dkmthk.h>
#include <windows.graphics.directx.direct3d11.interop.h>

namespace red3ext
{
using create_direct_3d11_device_from_dxgi_device_type = decltype(&CreateDirect3D11DeviceFromDXGIDevice);
using create_direct_3d11_surface_from_dxgi_surface_type = decltype(&CreateDirect3D11SurfaceFromDXGISurface);
using d3d11_create_device_type = decltype(&D3D11CreateDevice);
using d3d11_create_device_and_swap_chain_type = decltype(&D3D11CreateDeviceAndSwapChain);
using d3d11_on_12_create_device_type = decltype(&D3D11On12CreateDevice);
using d3dkmt_close_adapter_type = decltype(&D3DKMTCloseAdapter);
using d3dkmt_create_allocation_type = decltype(&D3DKMTCreateAllocation);
using d3dkmt_create_context_type = decltype(&D3DKMTCreateContext);
using d3dkmt_create_device_type = decltype(&D3DKMTCreateDevice);
using d3dkmt_create_synchronization_object_type = decltype(&D3DKMTCreateSynchronizationObject);
using d3dkmt_destroy_allocation_type = decltype(&D3DKMTDestroyAllocation);
using d3dkmt_destroy_context_type = decltype(&D3DKMTDestroyContext);
using d3dkmt_destroy_device_type = decltype(&D3DKMTDestroyDevice);
using d3dkmt_destroy_synchronization_object_type = decltype(&D3DKMTDestroySynchronizationObject);
using d3dkmt_escape_type = decltype(&D3DKMTEscape);
using d3dkmt_get_context_scheduling_priority_type = decltype(&D3DKMTGetContextSchedulingPriority);
using d3dkmt_get_device_state_type = decltype(&D3DKMTGetDeviceState);
using d3dkmt_get_display_mode_list_type = decltype(&D3DKMTGetDisplayModeList);
using d3dkmt_get_multisample_method_list_type = decltype(&D3DKMTGetMultisampleMethodList);
using d3dkmt_get_runtime_data_type = decltype(&D3DKMTGetRuntimeData);
using d3dkmt_get_shared_primary_handle_type = decltype(&D3DKMTGetSharedPrimaryHandle);
using d3dkmt_lock_type = decltype(&D3DKMTLock);
using d3dkmt_open_adapter_from_hdc_type = decltype(&D3DKMTOpenAdapterFromHdc);
using d3dkmt_open_resource_type = decltype(&D3DKMTOpenResource);
using d3dkmt_present_type = decltype(&D3DKMTPresent);
using d3dkmt_query_adapter_info_type = decltype(&D3DKMTQueryAdapterInfo);
using d3dkmt_query_allocation_residency_type = decltype(&D3DKMTQueryAllocationResidency);
using d3dkmt_query_resource_info_type = decltype(&D3DKMTQueryResourceInfo);
using d3dkmt_render_type = decltype(&D3DKMTRender);
using d3dkmt_set_allocation_priority_type = decltype(&D3DKMTSetAllocationPriority);
using d3dkmt_set_context_scheduling_priority_type = decltype(&D3DKMTSetContextSchedulingPriority);
using d3dkmt_set_display_mode_type = decltype(&D3DKMTSetDisplayMode);
using d3dkmt_set_display_private_driver_format_type = decltype(&D3DKMTSetDisplayPrivateDriverFormat);
using d3dkmt_set_gamma_ramp_type = decltype(&D3DKMTSetGammaRamp);
using d3dkmt_set_vid_pn_source_owner_type = decltype(&D3DKMTSetVidPnSourceOwner);
using d3dkmt_signal_synchronization_object_type = decltype(&D3DKMTSignalSynchronizationObject);
using d3dkmt_unlock_type = decltype(&D3DKMTUnlock);
using d3dkmt_wait_for_synchronization_object_type = decltype(&D3DKMTWaitForSynchronizationObject);
using d3dkmt_wait_for_vertical_blank_event_type = decltype(&D3DKMTWaitForVerticalBlankEvent);

using d3d11_core_create_device_type = void (*)();
using d3d11_core_create_layered_device_type = void (*)();
using d3d11_core_get_layered_device_size_type = void (*)();
using d3d11_core_register_layers_type = void (*)();
using d3d11_create_device_for_d3d12_type = void (*)();
using d3d_performance_begin_event_type = void (*)();
using d3d_performance_end_event_type = void (*)();
using d3d_performance_get_status_type = void (*)();
using d3d_performance_set_marker_type = void (*)();
using enable_feature_level_upgrade_type = void (*)();
using open_adapter_10_type = void (*)();
using open_adapter_10_2_type = void (*)();

extern d3d11_create_device_type d3d11_create_device;
extern d3d11_create_device_and_swap_chain_type d3d11_create_device_and_swap_chain;
extern d3d11_on_12_create_device_type d3d11_on_12_create_device;
extern d3dkmt_close_adapter_type d3dkmt_close_adapter;
extern d3dkmt_create_allocation_type d3dkmt_create_allocation;
extern d3dkmt_create_context_type d3dkmt_create_context;
extern d3dkmt_create_device_type d3dkmt_create_device;
extern d3dkmt_create_synchronization_object_type d3dkmt_create_synchronization_object;
extern d3dkmt_destroy_allocation_type d3dkmt_destroy_allocation;
extern d3dkmt_destroy_context_type d3dkmt_destroy_context;
extern d3dkmt_destroy_device_type d3dkmt_destroy_device;
extern d3dkmt_destroy_synchronization_object_type d3dkmt_destroy_synchronization_object;
extern d3dkmt_escape_type d3dkmt_escape;
extern d3dkmt_get_context_scheduling_priority_type d3dkmt_get_context_scheduling_priority;
extern d3dkmt_get_device_state_type d3dkmt_get_device_state;
extern d3dkmt_get_display_mode_list_type d3dkmt_get_display_mode_list;
extern d3dkmt_get_multisample_method_list_type d3dkmt_get_multisample_method_list;
extern d3dkmt_get_runtime_data_type d3dkmt_get_runtime_data;
extern d3dkmt_get_shared_primary_handle_type d3dkmt_get_shared_primary_handle;
extern d3dkmt_lock_type d3dkmt_lock;
extern d3dkmt_open_adapter_from_hdc_type d3dkmt_open_adapter_from_hdc;
extern d3dkmt_open_resource_type d3dkmt_open_resource;
extern d3dkmt_present_type d3dkmt_present;
extern d3dkmt_query_adapter_info_type d3dkmt_query_adapter_info;
extern d3dkmt_query_allocation_residency_type d3dkmt_query_allocation_residency;
extern d3dkmt_query_resource_info_type d3dkmt_query_resource_info;
extern d3dkmt_render_type d3dkmt_render;
extern d3dkmt_set_allocation_priority_type d3dkmt_set_allocation_priority;
extern d3dkmt_set_context_scheduling_priority_type d3dkmt_set_context_scheduling_priority;
extern d3dkmt_set_display_mode_type d3dkmt_set_display_mode;
extern d3dkmt_set_display_private_driver_format_type d3dkmt_set_display_private_driver_format;
extern d3dkmt_set_gamma_ramp_type d3dkmt_set_gamma_ramp;
extern d3dkmt_set_vid_pn_source_owner_type d3dkmt_set_vid_pn_source_owner;
extern d3dkmt_signal_synchronization_object_type d3dkmt_signal_synchronization_object;
extern d3dkmt_unlock_type d3dkmt_unlock;
extern d3dkmt_wait_for_synchronization_object_type d3dkmt_wait_for_synchronization_object;
extern d3dkmt_wait_for_vertical_blank_event_type d3dkmt_wait_for_vertical_blank_event;

extern create_direct_3d11_device_from_dxgi_device_type create_direct_3d11_device_from_dxgi_device;
extern create_direct_3d11_surface_from_dxgi_surface_type create_direct_3d11_surface_from_dxgi_surface;
extern d3d11_core_create_device_type d3d11_core_create_device;
extern d3d11_core_create_layered_device_type d3d11_core_create_layered_device;
extern d3d11_core_get_layered_device_size_type d3d11_core_get_layered_device_size;
extern d3d11_core_register_layers_type d3d11_core_register_layers;
extern d3d11_create_device_for_d3d12_type d3d11_create_device_for_d3d12;
extern d3d_performance_begin_event_type d3d_performance_begin_event;
extern d3d_performance_end_event_type d3d_performance_end_event;
extern d3d_performance_get_status_type d3d_performance_get_status;
extern d3d_performance_set_marker_type d3d_performance_set_marker;
extern enable_feature_level_upgrade_type enable_feature_level_upgrade;
extern open_adapter_10_type open_adapter_10;
extern open_adapter_10_2_type open_adapter_10_2;
} // namespace red3ext
