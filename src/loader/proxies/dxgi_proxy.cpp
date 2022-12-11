#include "dxgi_proxy.hpp"
#include "dxgi_proxy_functions.hpp"

std::wstring_view red3ext::dxgi_proxy::name() const noexcept
{
    return L"dxgi";
}

void red3ext::dxgi_proxy::load_exports(HMODULE module) const
{
    red3ext::create_dxgi_factory = get_proc_address<create_dxgi_factory_type>(module, "CreateDXGIFactory");
    red3ext::create_dxgi_factory1 = get_proc_address<create_dxgi_factory1_type>(module, "CreateDXGIFactory1");
    red3ext::create_dxgi_factory2 = get_proc_address<create_dxgi_factory2_type>(module, "CreateDXGIFactory2");
    red3ext::dxgi_declare_adapter_removal_support =
        get_proc_address<dxgi_declare_adapter_removal_support_type>(module, "DXGIDeclareAdapterRemovalSupport");
    red3ext::dxgi_get_debug_interface1 =
        get_proc_address<dxgi_get_debug_interface1_type>(module, "DXGIGetDebugInterface1");

    red3ext::apply_compat_resolution_quirking =
        get_proc_address<apply_compat_resolution_quirking_type>(module, "ApplyCompatResolutionQuirking");
    red3ext::compat_string = get_proc_address<compat_string_type>(module, "CompatString");
    red3ext::compat_value = get_proc_address<compat_value_type>(module, "CompatValue");
    red3ext::dxgi_d3d10_create_device =
        get_proc_address<dxgi_d3d10_create_device_type>(module, "DXGID3D10CreateDevice");
    red3ext::dxgi_d3d10_create_layered_device =
        get_proc_address<dxgi_d3d10_create_layered_device_type>(module, "DXGID3D10CreateLayeredDevice");
    red3ext::dxgi_d3d10_get_layered_device_size =
        get_proc_address<dxgi_d3d10_get_layered_device_size_type>(module, "DXGID3D10GetLayeredDeviceSize");
    red3ext::dxgi_d3d10_register_layers =
        get_proc_address<dxgi_d3d10_register_layers_type>(module, "DXGID3D10RegisterLayers");
    red3ext::dxgi_dump_journal = get_proc_address<dxgi_dump_journal_type>(module, "DXGIDumpJournal");
    red3ext::dxgi_report_adapter_configuration =
        get_proc_address<dxgi_report_adapter_configuration_type>(module, "DXGIReportAdapterConfiguration");
    red3ext::pix_begin_capture = get_proc_address<pix_begin_capture_type>(module, "PIXBeginCapture");
    red3ext::pix_end_capture = get_proc_address<pix_end_capture_type>(module, "PIXEndCapture");
    red3ext::pix_get_capture_state = get_proc_address<pix_get_capture_state_type>(module, "PIXGetCaptureState");
    red3ext::set_app_compat_string_pointer =
        get_proc_address<set_app_compat_string_pointer_type>(module, "SetAppCompatStringPointer");
    red3ext::update_hmd_emulation_status =
        get_proc_address<update_hmd_emulation_status_type>(module, "UpdateHMDEmulationStatus");
}
