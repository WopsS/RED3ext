#include "d3d11_proxy.hpp"
#include "d3d11_proxy_functions.hpp"

std::wstring_view red3ext::d3d11_proxy::name() const noexcept
{
    return L"d3d11";
}

void red3ext::d3d11_proxy::load_exports(HMODULE module) const
{
    create_direct_3d11_device_from_dxgi_device = get_proc_address<create_direct_3d11_device_from_dxgi_device_type>(
        module, "CreateDirect3D11DeviceFromDXGIDevice");
    create_direct_3d11_surface_from_dxgi_surface = get_proc_address<create_direct_3d11_surface_from_dxgi_surface_type>(
        module, "CreateDirect3D11SurfaceFromDXGISurface");
    d3d11_create_device = get_proc_address<d3d11_create_device_type>(module, "D3D11CreateDevice");
    d3d11_create_device_and_swap_chain =
        get_proc_address<d3d11_create_device_and_swap_chain_type>(module, "D3D11CreateDeviceAndSwapChain");
    d3d11_on_12_create_device = get_proc_address<d3d11_on_12_create_device_type>(module, "D3D11On12CreateDevice");
    d3dkmt_close_adapter = get_proc_address<d3dkmt_close_adapter_type>(module, "D3DKMTCloseAdapter");
    d3dkmt_create_allocation = get_proc_address<d3dkmt_create_allocation_type>(module, "D3DKMTCreateAllocation");
    d3dkmt_create_context = get_proc_address<d3dkmt_create_context_type>(module, "D3DKMTCreateContext");
    d3dkmt_create_device = get_proc_address<d3dkmt_create_device_type>(module, "D3DKMTCreateDevice");
    d3dkmt_create_synchronization_object =
        get_proc_address<d3dkmt_create_synchronization_object_type>(module, "D3DKMTCreateSynchronizationObject");
    d3dkmt_destroy_allocation = get_proc_address<d3dkmt_destroy_allocation_type>(module, "D3DKMTDestroyAllocation");
    d3dkmt_destroy_context = get_proc_address<d3dkmt_destroy_context_type>(module, "D3DKMTDestroyContext");
    d3dkmt_destroy_device = get_proc_address<d3dkmt_destroy_device_type>(module, "D3DKMTDestroyDevice");
    d3dkmt_destroy_synchronization_object =
        get_proc_address<d3dkmt_destroy_synchronization_object_type>(module, "D3DKMTDestroySynchronizationObject");
    d3dkmt_escape = get_proc_address<d3dkmt_escape_type>(module, "D3DKMTEscape");
    d3dkmt_get_context_scheduling_priority =
        get_proc_address<d3dkmt_get_context_scheduling_priority_type>(module, "D3DKMTGetContextSchedulingPriority");
    d3dkmt_get_device_state = get_proc_address<d3dkmt_get_device_state_type>(module, "D3DKMTGetDeviceState");
    d3dkmt_get_display_mode_list =
        get_proc_address<d3dkmt_get_display_mode_list_type>(module, "D3DKMTGetDisplayModeList");
    d3dkmt_get_multisample_method_list =
        get_proc_address<d3dkmt_get_multisample_method_list_type>(module, "D3DKMTGetMultisampleMethodList");
    d3dkmt_get_runtime_data = get_proc_address<d3dkmt_get_runtime_data_type>(module, "D3DKMTGetRuntimeData");
    d3dkmt_get_shared_primary_handle =
        get_proc_address<d3dkmt_get_shared_primary_handle_type>(module, "D3DKMTGetSharedPrimaryHandle");
    d3dkmt_lock = get_proc_address<d3dkmt_lock_type>(module, "D3DKMTLock");
    d3dkmt_open_adapter_from_hdc =
        get_proc_address<d3dkmt_open_adapter_from_hdc_type>(module, "D3DKMTOpenAdapterFromHdc");
    d3dkmt_open_resource = get_proc_address<d3dkmt_open_resource_type>(module, "D3DKMTOpenResource");
    d3dkmt_present = get_proc_address<d3dkmt_present_type>(module, "D3DKMTPresent");
    d3dkmt_query_adapter_info = get_proc_address<d3dkmt_query_adapter_info_type>(module, "D3DKMTQueryAdapterInfo");
    d3dkmt_query_allocation_residency =
        get_proc_address<d3dkmt_query_allocation_residency_type>(module, "D3DKMTQueryAllocationResidency");
    d3dkmt_query_resource_info = get_proc_address<d3dkmt_query_resource_info_type>(module, "D3DKMTQueryResourceInfo");
    d3dkmt_render = get_proc_address<d3dkmt_render_type>(module, "D3DKMTRender");
    d3dkmt_set_allocation_priority =
        get_proc_address<d3dkmt_set_allocation_priority_type>(module, "D3DKMTSetAllocationPriority");
    d3dkmt_set_context_scheduling_priority =
        get_proc_address<d3dkmt_set_context_scheduling_priority_type>(module, "D3DKMTSetContextSchedulingPriority");
    d3dkmt_set_display_mode = get_proc_address<d3dkmt_set_display_mode_type>(module, "D3DKMTSetDisplayMode");
    d3dkmt_set_display_private_driver_format =
        get_proc_address<d3dkmt_set_display_private_driver_format_type>(module, "D3DKMTSetDisplayPrivateDriverFormat");
    d3dkmt_set_gamma_ramp = get_proc_address<d3dkmt_set_gamma_ramp_type>(module, "D3DKMTSetGammaRamp");
    d3dkmt_set_vid_pn_source_owner =
        get_proc_address<d3dkmt_set_vid_pn_source_owner_type>(module, "D3DKMTSetVidPnSourceOwner");
    d3dkmt_signal_synchronization_object =
        get_proc_address<d3dkmt_signal_synchronization_object_type>(module, "D3DKMTSignalSynchronizationObject");
    d3dkmt_unlock = get_proc_address<d3dkmt_unlock_type>(module, "D3DKMTUnlock");
    d3dkmt_wait_for_synchronization_object =
        get_proc_address<d3dkmt_wait_for_synchronization_object_type>(module, "D3DKMTWaitForSynchronizationObject");
    d3dkmt_wait_for_vertical_blank_event =
        get_proc_address<d3dkmt_wait_for_vertical_blank_event_type>(module, "D3DKMTWaitForVerticalBlankEvent");

    d3d11_core_create_device = get_proc_address<d3d11_core_create_device_type>(module, "D3D11CoreCreateDevice");
    d3d11_core_create_layered_device =
        get_proc_address<d3d11_core_create_layered_device_type>(module, "D3D11CoreCreateLayeredDevice");
    d3d11_core_get_layered_device_size =
        get_proc_address<d3d11_core_get_layered_device_size_type>(module, "D3D11CoreGetLayeredDeviceSize");
    d3d11_core_register_layers = get_proc_address<d3d11_core_register_layers_type>(module, "D3D11CoreRegisterLayers");
    d3d11_create_device_for_d3d12 =
        get_proc_address<d3d11_create_device_for_d3d12_type>(module, "D3D11CreateDeviceForD3D12");
    d3d_performance_begin_event =
        get_proc_address<d3d_performance_begin_event_type>(module, "D3DPerformance_BeginEvent");
    d3d_performance_end_event = get_proc_address<d3d_performance_end_event_type>(module, "D3DPerformance_EndEvent");
    d3d_performance_get_status = get_proc_address<d3d_performance_get_status_type>(module, "D3DPerformance_GetStatus");
    d3d_performance_set_marker = get_proc_address<d3d_performance_set_marker_type>(module, "D3DPerformance_SetMarker");
    enable_feature_level_upgrade =
        get_proc_address<enable_feature_level_upgrade_type>(module, "EnableFeatureLevelUpgrade");
    open_adapter_10 = get_proc_address<open_adapter_10_type>(module, "OpenAdapter10");
    open_adapter_10_2 = get_proc_address<open_adapter_10_2_type>(module, "OpenAdapter10_2");
}
