#pragma once

#include <dxgi.h>
#include <dxgi1_6.h>

namespace red3ext
{
using create_dxgi_factory_type = decltype(&CreateDXGIFactory);
using create_dxgi_factory1_type = decltype(&CreateDXGIFactory1);
using create_dxgi_factory2_type = decltype(&CreateDXGIFactory2);
using dxgi_declare_adapter_removal_support_type = decltype(&DXGIDeclareAdapterRemovalSupport);
using dxgi_get_debug_interface1_type = decltype(&DXGIGetDebugInterface1);

using apply_compat_resolution_quirking_type = void (*)();
using compat_string_type = void (*)();
using compat_value_type = void (*)();
using dxgi_d3d10_create_device_type = void (*)();
using dxgi_d3d10_create_layered_device_type = void (*)();
using dxgi_d3d10_get_layered_device_size_type = void (*)();
using dxgi_d3d10_register_layers_type = void (*)();
using dxgi_dump_journal_type = void (*)();
using dxgi_report_adapter_configuration_type = void (*)();
using pix_begin_capture_type = void (*)();
using pix_end_capture_type = void (*)();
using pix_get_capture_state_type = void (*)();
using set_app_compat_string_pointer_type = void (*)();
using update_hmd_emulation_status_type = void (*)();

extern create_dxgi_factory_type create_dxgi_factory;
extern create_dxgi_factory1_type create_dxgi_factory1;
extern create_dxgi_factory2_type create_dxgi_factory2;
extern dxgi_declare_adapter_removal_support_type dxgi_declare_adapter_removal_support;
extern dxgi_get_debug_interface1_type dxgi_get_debug_interface1;

extern apply_compat_resolution_quirking_type apply_compat_resolution_quirking;
extern compat_string_type compat_string;
extern compat_value_type compat_value;
extern dxgi_d3d10_create_device_type dxgi_d3d10_create_device;
extern dxgi_d3d10_create_layered_device_type dxgi_d3d10_create_layered_device;
extern dxgi_d3d10_get_layered_device_size_type dxgi_d3d10_get_layered_device_size;
extern dxgi_d3d10_register_layers_type dxgi_d3d10_register_layers;
extern dxgi_dump_journal_type dxgi_dump_journal;
extern dxgi_report_adapter_configuration_type dxgi_report_adapter_configuration;
extern pix_begin_capture_type pix_begin_capture;
extern pix_end_capture_type pix_end_capture;
extern pix_get_capture_state_type pix_get_capture_state;
extern set_app_compat_string_pointer_type set_app_compat_string_pointer;
extern update_hmd_emulation_status_type update_hmd_emulation_status;
} // namespace red3ext
