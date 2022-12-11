#include "d3d11_proxy_functions.hpp"

red3ext::d3d11_create_device_type red3ext::d3d11_create_device;
red3ext::d3d11_create_device_and_swap_chain_type red3ext::d3d11_create_device_and_swap_chain;
red3ext::d3d11_on_12_create_device_type red3ext::d3d11_on_12_create_device;
red3ext::d3dkmt_close_adapter_type red3ext::d3dkmt_close_adapter;
red3ext::d3dkmt_create_allocation_type red3ext::d3dkmt_create_allocation;
red3ext::d3dkmt_create_context_type red3ext::d3dkmt_create_context;
red3ext::d3dkmt_create_device_type red3ext::d3dkmt_create_device;
red3ext::d3dkmt_create_synchronization_object_type red3ext::d3dkmt_create_synchronization_object;
red3ext::d3dkmt_destroy_allocation_type red3ext::d3dkmt_destroy_allocation;
red3ext::d3dkmt_destroy_context_type red3ext::d3dkmt_destroy_context;
red3ext::d3dkmt_destroy_device_type red3ext::d3dkmt_destroy_device;
red3ext::d3dkmt_destroy_synchronization_object_type red3ext::d3dkmt_destroy_synchronization_object;
red3ext::d3dkmt_escape_type red3ext::d3dkmt_escape;
red3ext::d3dkmt_get_context_scheduling_priority_type red3ext::d3dkmt_get_context_scheduling_priority;
red3ext::d3dkmt_get_device_state_type red3ext::d3dkmt_get_device_state;
red3ext::d3dkmt_get_display_mode_list_type red3ext::d3dkmt_get_display_mode_list;
red3ext::d3dkmt_get_multisample_method_list_type red3ext::d3dkmt_get_multisample_method_list;
red3ext::d3dkmt_get_runtime_data_type red3ext::d3dkmt_get_runtime_data;
red3ext::d3dkmt_get_shared_primary_handle_type red3ext::d3dkmt_get_shared_primary_handle;
red3ext::d3dkmt_lock_type red3ext::d3dkmt_lock;
red3ext::d3dkmt_open_adapter_from_hdc_type red3ext::d3dkmt_open_adapter_from_hdc;
red3ext::d3dkmt_open_resource_type red3ext::d3dkmt_open_resource;
red3ext::d3dkmt_present_type red3ext::d3dkmt_present;
red3ext::d3dkmt_query_adapter_info_type red3ext::d3dkmt_query_adapter_info;
red3ext::d3dkmt_query_allocation_residency_type red3ext::d3dkmt_query_allocation_residency;
red3ext::d3dkmt_query_resource_info_type red3ext::d3dkmt_query_resource_info;
red3ext::d3dkmt_render_type red3ext::d3dkmt_render;
red3ext::d3dkmt_set_allocation_priority_type red3ext::d3dkmt_set_allocation_priority;
red3ext::d3dkmt_set_context_scheduling_priority_type red3ext::d3dkmt_set_context_scheduling_priority;
red3ext::d3dkmt_set_display_mode_type red3ext::d3dkmt_set_display_mode;
red3ext::d3dkmt_set_display_private_driver_format_type red3ext::d3dkmt_set_display_private_driver_format;
red3ext::d3dkmt_set_gamma_ramp_type red3ext::d3dkmt_set_gamma_ramp;
red3ext::d3dkmt_set_vid_pn_source_owner_type red3ext::d3dkmt_set_vid_pn_source_owner;
red3ext::d3dkmt_signal_synchronization_object_type red3ext::d3dkmt_signal_synchronization_object;
red3ext::d3dkmt_unlock_type red3ext::d3dkmt_unlock;
red3ext::d3dkmt_wait_for_synchronization_object_type red3ext::d3dkmt_wait_for_synchronization_object;
red3ext::d3dkmt_wait_for_vertical_blank_event_type red3ext::d3dkmt_wait_for_vertical_blank_event;

red3ext::create_direct_3d11_device_from_dxgi_device_type red3ext::create_direct_3d11_device_from_dxgi_device;
red3ext::create_direct_3d11_surface_from_dxgi_surface_type red3ext::create_direct_3d11_surface_from_dxgi_surface;
red3ext::d3d11_core_create_device_type red3ext::d3d11_core_create_device;
red3ext::d3d11_core_create_layered_device_type red3ext::d3d11_core_create_layered_device;
red3ext::d3d11_core_get_layered_device_size_type red3ext::d3d11_core_get_layered_device_size;
red3ext::d3d11_core_register_layers_type red3ext::d3d11_core_register_layers;
red3ext::d3d11_create_device_for_d3d12_type red3ext::d3d11_create_device_for_d3d12;
red3ext::d3d_performance_begin_event_type red3ext::d3d_performance_begin_event;
red3ext::d3d_performance_end_event_type red3ext::d3d_performance_end_event;
red3ext::d3d_performance_get_status_type red3ext::d3d_performance_get_status;
red3ext::d3d_performance_set_marker_type red3ext::d3d_performance_set_marker;
red3ext::enable_feature_level_upgrade_type red3ext::enable_feature_level_upgrade;
red3ext::open_adapter_10_type red3ext::open_adapter_10;
red3ext::open_adapter_10_2_type red3ext::open_adapter_10_2;

STDAPI _create_direct_3d11_device_from_dxgi_device(IDXGIDevice* dxgi_device, IInspectable** graphics_device)
{
    return red3ext::create_direct_3d11_device_from_dxgi_device(dxgi_device, graphics_device);
}

STDAPI _create_direct_3d11_surface_from_dxgi_surface(IDXGISurface* dgxi_surface, IInspectable** graphics_surface)
{
    return red3ext::create_direct_3d11_surface_from_dxgi_surface(dgxi_surface, graphics_surface);
}

HRESULT WINAPI _d3d11_create_device(IDXGIAdapter* padapter, D3D_DRIVER_TYPE driver_type, HMODULE software, UINT flags,
                                    CONST D3D_FEATURE_LEVEL* pfeature_levels, UINT feature_levels, UINT sdk_version,
                                    ID3D11Device** pp_device, D3D_FEATURE_LEVEL* pfeature_level,
                                    ID3D11DeviceContext** pp_immediate_context)
{
    return red3ext::d3d11_create_device(padapter, driver_type, software, flags, pfeature_levels, feature_levels,
                                        sdk_version, pp_device, pfeature_level, pp_immediate_context);
}

HRESULT WINAPI _d3d11_create_device_and_swap_chain(IDXGIAdapter* padapter, D3D_DRIVER_TYPE driver_type,
                                                   HMODULE software, UINT flags,
                                                   CONST D3D_FEATURE_LEVEL* pfeature_levels, UINT feature_levels,
                                                   UINT sdk_version, CONST DXGI_SWAP_CHAIN_DESC* pswap_chain_desc,
                                                   IDXGISwapChain** pp_swap_chain, ID3D11Device** pp_device,
                                                   D3D_FEATURE_LEVEL* pfeature_level,
                                                   ID3D11DeviceContext** pp_immediate_context)
{
    return red3ext::d3d11_create_device_and_swap_chain(padapter, driver_type, software, flags, pfeature_levels,
                                                       feature_levels, sdk_version, pswap_chain_desc, pp_swap_chain,
                                                       pp_device, pfeature_level, pp_immediate_context);
}

HRESULT WINAPI _d3d11_on_12_create_device(IUnknown* pdevice, UINT flags, CONST D3D_FEATURE_LEVEL* pfeature_levels,
                                          UINT feature_levels, IUnknown* CONST* pp_command_queues, UINT num_queues,
                                          UINT node_mask, ID3D11Device** pp_device,
                                          ID3D11DeviceContext** pp_immediate_context,
                                          D3D_FEATURE_LEVEL* pchosen_feature_level)
{
    return red3ext::d3d11_on_12_create_device(pdevice, flags, pfeature_levels, feature_levels, pp_command_queues,
                                              num_queues, node_mask, pp_device, pp_immediate_context,
                                              pchosen_feature_level);
}

NTSTATUS APIENTRY _d3dkmt_close_adapter(CONST D3DKMT_CLOSEADAPTER* a1)
{
    return red3ext::d3dkmt_close_adapter(a1);
}

NTSTATUS APIENTRY _d3dkmt_create_allocation(D3DKMT_CREATEALLOCATION* a1)
{
    return red3ext::d3dkmt_create_allocation(a1);
}

NTSTATUS APIENTRY _d3dkmt_create_context(D3DKMT_CREATECONTEXT* a1)
{
    return red3ext::d3dkmt_create_context(a1);
}

NTSTATUS APIENTRY _d3dkmt_create_device(D3DKMT_CREATEDEVICE* a1)
{
    return red3ext::d3dkmt_create_device(a1);
}

NTSTATUS APIENTRY _d3dkmt_create_synchronization_object(D3DKMT_CREATESYNCHRONIZATIONOBJECT* a1)
{
    return red3ext::d3dkmt_create_synchronization_object(a1);
}

NTSTATUS APIENTRY _d3dkmt_destroy_allocation(CONST D3DKMT_DESTROYALLOCATION* a1)
{
    return red3ext::d3dkmt_destroy_allocation(a1);
}

NTSTATUS APIENTRY _d3dkmt_destroy_context(CONST D3DKMT_DESTROYCONTEXT* a1)
{
    return red3ext::d3dkmt_destroy_context(a1);
}

NTSTATUS APIENTRY _d3dkmt_destroy_device(CONST D3DKMT_DESTROYDEVICE* a1)
{
    return red3ext::d3dkmt_destroy_device(a1);
}

NTSTATUS APIENTRY _d3dkmt_destroy_synchronization_object(CONST D3DKMT_DESTROYSYNCHRONIZATIONOBJECT* a1)
{
    return red3ext::d3dkmt_destroy_synchronization_object(a1);
}

NTSTATUS APIENTRY _d3dkmt_escape(CONST D3DKMT_ESCAPE* a1)
{
    return red3ext::d3dkmt_escape(a1);
}

NTSTATUS APIENTRY _d3dkmt_get_context_scheduling_priority(D3DKMT_GETCONTEXTSCHEDULINGPRIORITY* a1)
{
    return red3ext::d3dkmt_get_context_scheduling_priority(a1);
}

NTSTATUS APIENTRY _d3dkmt_get_device_state(D3DKMT_GETDEVICESTATE* a1)
{
    return red3ext::d3dkmt_get_device_state(a1);
}

NTSTATUS APIENTRY _d3dkmt_get_display_mode_list(D3DKMT_GETDISPLAYMODELIST* a1)
{
    return red3ext::d3dkmt_get_display_mode_list(a1);
}

NTSTATUS APIENTRY _d3dkmt_get_multisample_method_list(D3DKMT_GETMULTISAMPLEMETHODLIST* a1)
{
    return red3ext::d3dkmt_get_multisample_method_list(a1);
}

NTSTATUS APIENTRY _d3dkmt_get_runtime_data(CONST D3DKMT_GETRUNTIMEDATA* a1)
{
    return red3ext::d3dkmt_get_runtime_data(a1);
}

NTSTATUS APIENTRY _d3dkmt_get_shared_primary_handle(D3DKMT_GETSHAREDPRIMARYHANDLE* a1)
{
    return red3ext::d3dkmt_get_shared_primary_handle(a1);
}

NTSTATUS APIENTRY _d3dkmt_lock(D3DKMT_LOCK* a1)
{
    return red3ext::d3dkmt_lock(a1);
}

NTSTATUS APIENTRY _d3dkmt_open_adapter_from_hdc(D3DKMT_OPENADAPTERFROMHDC* a1)
{
    return red3ext::d3dkmt_open_adapter_from_hdc(a1);
}

NTSTATUS APIENTRY _d3dkmt_open_resource(D3DKMT_OPENRESOURCE* a1)
{
    return red3ext::d3dkmt_open_resource(a1);
}

NTSTATUS APIENTRY _d3dkmt_present(D3DKMT_PRESENT* a1)
{
    return red3ext::d3dkmt_present(a1);
}

NTSTATUS APIENTRY _d3dkmt_query_adapter_info(CONST D3DKMT_QUERYADAPTERINFO* a1)
{
    return red3ext::d3dkmt_query_adapter_info(a1);
}

NTSTATUS APIENTRY _d3dkmt_query_allocation_residency(CONST D3DKMT_QUERYALLOCATIONRESIDENCY* a1)
{
    return red3ext::d3dkmt_query_allocation_residency(a1);
}

NTSTATUS APIENTRY _d3dkmt_query_resource_info(D3DKMT_QUERYRESOURCEINFO* a1)
{
    return red3ext::d3dkmt_query_resource_info(a1);
}

NTSTATUS APIENTRY _d3dkmt_render(D3DKMT_RENDER* a1)
{
    return red3ext::d3dkmt_render(a1);
}

NTSTATUS APIENTRY _d3dkmt_set_allocation_priority(CONST D3DKMT_SETALLOCATIONPRIORITY* a1)
{
    return red3ext::d3dkmt_set_allocation_priority(a1);
}

NTSTATUS APIENTRY _d3dkmt_set_context_scheduling_priority(CONST D3DKMT_SETCONTEXTSCHEDULINGPRIORITY* a1)
{
    return red3ext::d3dkmt_set_context_scheduling_priority(a1);
}

NTSTATUS APIENTRY _d3dkmt_set_display_mode(CONST D3DKMT_SETDISPLAYMODE* a1)
{
    return red3ext::d3dkmt_set_display_mode(a1);
}

NTSTATUS APIENTRY _d3dkmt_set_display_private_driver_format(CONST D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT* a1)
{
    return red3ext::d3dkmt_set_display_private_driver_format(a1);
}

NTSTATUS APIENTRY _d3dkmt_set_gamma_ramp(CONST D3DKMT_SETGAMMARAMP* a1)
{
    return red3ext::d3dkmt_set_gamma_ramp(a1);
}

NTSTATUS APIENTRY _d3dkmt_set_vid_pn_source_owner(CONST D3DKMT_SETVIDPNSOURCEOWNER* a1)
{
    return red3ext::d3dkmt_set_vid_pn_source_owner(a1);
}

NTSTATUS APIENTRY _d3dkmt_signal_synchronization_object(CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT* a1)
{
    return red3ext::d3dkmt_signal_synchronization_object(a1);
}

NTSTATUS APIENTRY _d3dkmt_unlock(CONST D3DKMT_UNLOCK* a1)
{
    return red3ext::d3dkmt_unlock(a1);
}

NTSTATUS APIENTRY _d3dkmt_wait_for_synchronization_object(CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT* a1)
{
    return red3ext::d3dkmt_wait_for_synchronization_object(a1);
}

NTSTATUS APIENTRY _d3dkmt_wait_for_vertical_blank_event(CONST D3DKMT_WAITFORVERTICALBLANKEVENT* a1)
{
    return red3ext::d3dkmt_wait_for_vertical_blank_event(a1);
}

void _d3d11_core_create_device()
{
    red3ext::d3d11_core_create_device();
}

void _d3d11_core_create_layered_device()
{
    red3ext::d3d11_core_create_layered_device();
}

void _d3d11_core_get_layered_device_size()
{
    red3ext::d3d11_core_get_layered_device_size();
}

void _d3d11_core_register_layers()
{
    red3ext::d3d11_core_register_layers();
}

void _d3d11_create_device_for_d3d12()
{
    red3ext::d3d11_create_device_for_d3d12();
}

void _d3d_performance_begin_event()
{
    red3ext::d3d_performance_begin_event();
}

void _d3d_performance_end_event()
{
    red3ext::d3d_performance_end_event();
}

void _d3d_performance_get_status()
{
    red3ext::d3d_performance_get_status();
}

void _d3d_performance_set_marker()
{
    red3ext::d3d_performance_set_marker();
}

void _enable_feature_level_upgrade()
{
    red3ext::enable_feature_level_upgrade();
}

void _open_adapter_10()
{
    red3ext::open_adapter_10();
}

void _open_adapter_10_2()
{
    red3ext::open_adapter_10_2();
}
