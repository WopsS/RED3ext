#include "dxgi_proxy_functions.hpp"

red3ext::create_dxgi_factory_type red3ext::create_dxgi_factory;
red3ext::create_dxgi_factory1_type red3ext::create_dxgi_factory1;
red3ext::create_dxgi_factory2_type red3ext::create_dxgi_factory2;
red3ext::dxgi_declare_adapter_removal_support_type red3ext::dxgi_declare_adapter_removal_support;
red3ext::dxgi_get_debug_interface1_type red3ext::dxgi_get_debug_interface1;
red3ext::pix_begin_capture_type red3ext::pix_begin_capture;
red3ext::pix_end_capture_type red3ext::pix_end_capture;
red3ext::pix_get_capture_state_type red3ext::pix_get_capture_state;

red3ext::apply_compat_resolution_quirking_type red3ext::apply_compat_resolution_quirking;
red3ext::compat_string_type red3ext::compat_string;
red3ext::compat_value_type red3ext::compat_value;
red3ext::dxgi_d3d10_create_device_type red3ext::dxgi_d3d10_create_device;
red3ext::dxgi_d3d10_create_layered_device_type red3ext::dxgi_d3d10_create_layered_device;
red3ext::dxgi_d3d10_get_layered_device_size_type red3ext::dxgi_d3d10_get_layered_device_size;
red3ext::dxgi_d3d10_register_layers_type red3ext::dxgi_d3d10_register_layers;
red3ext::dxgi_dump_journal_type red3ext::dxgi_dump_journal;
red3ext::dxgi_report_adapter_configuration_type red3ext::dxgi_report_adapter_configuration;
red3ext::set_app_compat_string_pointer_type red3ext::set_app_compat_string_pointer;
red3ext::update_hmd_emulation_status_type red3ext::update_hmd_emulation_status;

HRESULT WINAPI _create_dxgi_factory(REFIID riid, void** pp_factory)
{
    return red3ext::create_dxgi_factory(riid, pp_factory);
}

HRESULT WINAPI _create_dxgi_factory1(REFIID riid, void** ppFactory)
{
    return red3ext::create_dxgi_factory1(riid, ppFactory);
}

HRESULT WINAPI _create_dxgi_factory2(UINT flags, REFIID riid, void** pp_factory)
{
    return red3ext::create_dxgi_factory2(flags, riid, pp_factory);
}

HRESULT WINAPI _dxgi_declare_adapter_removal_support()
{
    return red3ext::dxgi_declare_adapter_removal_support();
}

HRESULT WINAPI _dxgi_get_debug_interface1(UINT flags, REFIID riid, void** pdebug)
{
    return red3ext::dxgi_get_debug_interface1(flags, riid, pdebug);
}

void _apply_compat_resolution_quirking()
{
    red3ext::apply_compat_resolution_quirking();
}

void _compat_string()
{
    red3ext::compat_string();
}

void _compat_value()
{
    red3ext::compat_value();
}

void _dxgi_d3d10_create_device()
{
    red3ext::dxgi_d3d10_create_device();
}

void _dxgi_d3d10_create_layered_device()
{
    red3ext::dxgi_d3d10_create_layered_device();
}

void _dxgi_d3d10_get_layered_device_size()
{
    red3ext::dxgi_d3d10_get_layered_device_size();
}

void _dxgi_d3d10_register_layers()
{
    red3ext::dxgi_d3d10_register_layers();
}

void _dxgi_dump_journal()
{
    red3ext::dxgi_dump_journal();
}

void _dxgi_report_adapter_configuration()
{
    red3ext::dxgi_report_adapter_configuration();
}

void _pix_begin_capture()
{
    red3ext::pix_begin_capture();
}

void _pix_end_capture()
{
    red3ext::pix_end_capture();
}

void _pix_get_capture_state()
{
    red3ext::pix_get_capture_state();
}

void _set_app_compat_string_pointer()
{
    red3ext::set_app_compat_string_pointer();
}

void _update_hmd_emulation_status()
{
    red3ext::update_hmd_emulation_status();
}
