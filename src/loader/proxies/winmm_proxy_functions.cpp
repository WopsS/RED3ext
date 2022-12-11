#include "winmm_proxy_functions.hpp"

red3ext::close_driver_type red3ext::close_driver;
red3ext::open_driver_type red3ext::open_driver;
red3ext::send_driver_message_type red3ext::send_driver_message;
red3ext::drv_get_module_handle_type red3ext::drv_get_module_handle;
red3ext::get_driver_module_handle_type red3ext::get_driver_module_handle;
red3ext::def_driver_proc_type red3ext::def_driver_proc;
red3ext::driver_callback_type red3ext::driver_callback;
red3ext::play_sound_type red3ext::play_sound;
red3ext::play_sound_a_type red3ext::play_sound_a;
red3ext::play_sound_w_type red3ext::play_sound_w;
red3ext::aux_get_num_devs_type red3ext::aux_get_num_devs;
red3ext::aux_get_dev_caps_a_type red3ext::aux_get_dev_caps_a;
red3ext::aux_get_dev_caps_w_type red3ext::aux_get_dev_caps_w;
red3ext::aux_set_volume_type red3ext::aux_set_volume;
red3ext::aux_get_volume_type red3ext::aux_get_volume;
red3ext::aux_out_message_type red3ext::aux_out_message;
red3ext::joy_get_pos_type red3ext::joy_get_pos;
red3ext::joy_get_threshold_type red3ext::joy_get_threshold;
red3ext::joy_release_capture_type red3ext::joy_release_capture;
red3ext::joy_set_capture_type red3ext::joy_set_capture;
red3ext::joy_set_threshold_type red3ext::joy_set_threshold;
red3ext::joy_config_changed_type red3ext::joy_config_changed;
red3ext::joy_get_pos_ex_type red3ext::joy_get_pos_ex;
red3ext::joy_get_num_devs_type red3ext::joy_get_num_devs;
red3ext::joy_get_dev_caps_a_type red3ext::joy_get_dev_caps_a;
red3ext::joy_get_dev_caps_w_type red3ext::joy_get_dev_caps_w;
red3ext::mci_send_command_a_type red3ext::mci_send_command_a;
red3ext::mci_send_command_w_type red3ext::mci_send_command_w;
red3ext::mci_send_string_a_type red3ext::mci_send_string_a;
red3ext::mci_send_string_w_type red3ext::mci_send_string_w;
red3ext::mci_get_device_id_a_type red3ext::mci_get_device_id_a;
red3ext::mci_get_device_id_w_type red3ext::mci_get_device_id_w;
red3ext::mci_get_device_id_from_element_id_a_type red3ext::mci_get_device_id_from_element_id_a;
red3ext::mci_get_device_id_from_element_id_w_type red3ext::mci_get_device_id_from_element_id_w;
red3ext::mci_get_error_string_a_type red3ext::mci_get_error_string_a;
red3ext::mci_get_error_string_w_type red3ext::mci_get_error_string_w;
red3ext::mci_set_yield_proc_type red3ext::mci_set_yield_proc;
red3ext::mci_get_creator_task_type red3ext::mci_get_creator_task;
red3ext::mci_get_yield_proc_type red3ext::mci_get_yield_proc;
red3ext::mci_get_driver_data_type red3ext::mci_get_driver_data;
red3ext::mci_load_command_resource_type red3ext::mci_load_command_resource;
red3ext::mci_set_driver_data_type red3ext::mci_set_driver_data;
red3ext::mci_driver_yield_type red3ext::mci_driver_yield;
red3ext::mci_driver_notify_type red3ext::mci_driver_notify;
red3ext::mci_free_command_resource_type red3ext::mci_free_command_resource;
red3ext::midi_out_get_num_devs_type red3ext::midi_out_get_num_devs;
red3ext::midi_stream_open_type red3ext::midi_stream_open;
red3ext::midi_stream_close_type red3ext::midi_stream_close;
red3ext::midi_stream_property_type red3ext::midi_stream_property;
red3ext::midi_stream_position_type red3ext::midi_stream_position;
red3ext::midi_stream_out_type red3ext::midi_stream_out;
red3ext::midi_stream_pause_type red3ext::midi_stream_pause;
red3ext::midi_stream_restart_type red3ext::midi_stream_restart;
red3ext::midi_stream_stop_type red3ext::midi_stream_stop;
red3ext::midi_connect_type red3ext::midi_connect;
red3ext::midi_disconnect_type red3ext::midi_disconnect;
red3ext::midi_out_get_dev_caps_a_type red3ext::midi_out_get_dev_caps_a;
red3ext::midi_out_get_dev_caps_w_type red3ext::midi_out_get_dev_caps_w;
red3ext::midi_out_get_volume_type red3ext::midi_out_get_volume;
red3ext::midi_out_set_volume_type red3ext::midi_out_set_volume;
red3ext::midi_out_get_error_text_a_type red3ext::midi_out_get_error_text_a;
red3ext::midi_out_get_error_text_w_type red3ext::midi_out_get_error_text_w;
red3ext::midi_out_open_type red3ext::midi_out_open;
red3ext::midi_out_close_type red3ext::midi_out_close;
red3ext::midi_out_prepare_header_type red3ext::midi_out_prepare_header;
red3ext::midi_out_unprepare_header_type red3ext::midi_out_unprepare_header;
red3ext::midi_out_short_msg_type red3ext::midi_out_short_msg;
red3ext::midi_out_long_msg_type red3ext::midi_out_long_msg;
red3ext::midi_out_reset_type red3ext::midi_out_reset;
red3ext::midi_out_cache_patches_type red3ext::midi_out_cache_patches;
red3ext::midi_out_cache_drum_patches_type red3ext::midi_out_cache_drum_patches;
red3ext::midi_out_get_id_type red3ext::midi_out_get_id;
red3ext::midi_out_message_type red3ext::midi_out_message;
red3ext::midi_in_get_num_devs_type red3ext::midi_in_get_num_devs;
red3ext::midi_in_get_dev_caps_a_type red3ext::midi_in_get_dev_caps_a;
red3ext::midi_in_get_dev_caps_w_type red3ext::midi_in_get_dev_caps_w;
red3ext::midi_in_get_error_text_a_type red3ext::midi_in_get_error_text_a;
red3ext::midi_in_get_error_text_w_type red3ext::midi_in_get_error_text_w;
red3ext::midi_in_open_type red3ext::midi_in_open;
red3ext::midi_in_close_type red3ext::midi_in_close;
red3ext::midi_in_prepare_header_type red3ext::midi_in_prepare_header;
red3ext::midi_in_unprepare_header_type red3ext::midi_in_unprepare_header;
red3ext::midi_in_add_buffer_type red3ext::midi_in_add_buffer;
red3ext::midi_in_start_type red3ext::midi_in_start;
red3ext::midi_in_stop_type red3ext::midi_in_stop;
red3ext::midi_in_reset_type red3ext::midi_in_reset;
red3ext::midi_in_get_id_type red3ext::midi_in_get_id;
red3ext::midi_in_message_type red3ext::midi_in_message;
red3ext::mixer_get_num_devs_type red3ext::mixer_get_num_devs;
red3ext::mixer_get_dev_caps_a_type red3ext::mixer_get_dev_caps_a;
red3ext::mixer_get_dev_caps_w_type red3ext::mixer_get_dev_caps_w;
red3ext::mixer_open_type red3ext::mixer_open;
red3ext::mixer_close_type red3ext::mixer_close;
red3ext::mixer_message_type red3ext::mixer_message;
red3ext::mixer_get_line_info_a_type red3ext::mixer_get_line_info_a;
red3ext::mixer_get_line_info_w_type red3ext::mixer_get_line_info_w;
red3ext::mixer_get_id_type red3ext::mixer_get_id;
red3ext::mixer_get_line_controls_a_type red3ext::mixer_get_line_controls_a;
red3ext::mixer_get_line_controls_w_type red3ext::mixer_get_line_controls_w;
red3ext::mixer_get_control_details_a_type red3ext::mixer_get_control_details_a;
red3ext::mixer_get_control_details_w_type red3ext::mixer_get_control_details_w;
red3ext::mixer_set_control_details_type red3ext::mixer_set_control_details;
red3ext::mm_drv_install_type red3ext::mm_drv_install;
red3ext::mm_task_create_type red3ext::mm_task_create;
red3ext::mm_task_block_type red3ext::mm_task_block;
red3ext::mm_task_signal_type red3ext::mm_task_signal;
red3ext::mm_task_yield_type red3ext::mm_task_yield;
red3ext::mm_get_current_task_type red3ext::mm_get_current_task;
red3ext::mmio_string_to_fourcc_a_type red3ext::mmio_string_to_fourcc_a;
red3ext::mmio_string_to_fourcc_w_type red3ext::mmio_string_to_fourcc_w;
red3ext::mmio_install_io_proc_a_type red3ext::mmio_install_io_proc_a;
red3ext::mmio_install_io_proc_w_type red3ext::mmio_install_io_proc_w;
red3ext::mmio_open_a_type red3ext::mmio_open_a;
red3ext::mmio_open_w_type red3ext::mmio_open_w;
red3ext::mmio_rename_a_type red3ext::mmio_rename_a;
red3ext::mmio_rename_w_type red3ext::mmio_rename_w;
red3ext::mmio_close_type red3ext::mmio_close;
red3ext::mmio_read_type red3ext::mmio_read;
red3ext::mmio_write_type red3ext::mmio_write;
red3ext::mmio_seek_type red3ext::mmio_seek;
red3ext::mmio_get_info_type red3ext::mmio_get_info;
red3ext::mmio_set_info_type red3ext::mmio_set_info;
red3ext::mmio_set_buffer_type red3ext::mmio_set_buffer;
red3ext::mmio_flush_type red3ext::mmio_flush;
red3ext::mmio_advance_type red3ext::mmio_advance;
red3ext::mmio_send_message_type red3ext::mmio_send_message;
red3ext::mmio_ascend_type red3ext::mmio_ascend;
red3ext::mmio_descend_type red3ext::mmio_descend;
red3ext::mmio_create_chunk_type red3ext::mmio_create_chunk;
red3ext::snd_play_sound_a_type red3ext::snd_play_sound_a;
red3ext::snd_play_sound_w_type red3ext::snd_play_sound_w;
red3ext::time_get_system_time_type red3ext::time_get_system_time;
red3ext::time_get_time_type red3ext::time_get_time;
red3ext::time_get_dev_caps_type red3ext::time_get_dev_caps;
red3ext::time_begin_period_type red3ext::time_begin_period;
red3ext::time_end_period_type red3ext::time_end_period;
red3ext::time_kill_event_type red3ext::time_kill_event;
red3ext::time_set_event_type red3ext::time_set_event;
red3ext::wave_out_get_num_devs_type red3ext::wave_out_get_num_devs;
red3ext::wave_out_get_dev_caps_a_type red3ext::wave_out_get_dev_caps_a;
red3ext::wave_out_get_dev_caps_w_type red3ext::wave_out_get_dev_caps_w;
red3ext::wave_out_get_volume_type red3ext::wave_out_get_volume;
red3ext::wave_out_set_volume_type red3ext::wave_out_set_volume;
red3ext::wave_out_get_error_text_a_type red3ext::wave_out_get_error_text_a;
red3ext::wave_out_get_error_text_w_type red3ext::wave_out_get_error_text_w;
red3ext::wave_out_open_type red3ext::wave_out_open;
red3ext::wave_out_close_type red3ext::wave_out_close;
red3ext::wave_out_prepare_header_type red3ext::wave_out_prepare_header;
red3ext::wave_out_unprepare_header_type red3ext::wave_out_unprepare_header;
red3ext::wave_out_write_type red3ext::wave_out_write;
red3ext::wave_out_pause_type red3ext::wave_out_pause;
red3ext::wave_out_restart_type red3ext::wave_out_restart;
red3ext::wave_out_reset_type red3ext::wave_out_reset;
red3ext::wave_out_break_loop_type red3ext::wave_out_break_loop;
red3ext::wave_out_get_position_type red3ext::wave_out_get_position;
red3ext::wave_out_get_pitch_type red3ext::wave_out_get_pitch;
red3ext::wave_out_set_pitch_type red3ext::wave_out_set_pitch;
red3ext::wave_out_get_playback_rate_type red3ext::wave_out_get_playback_rate;
red3ext::wave_out_set_playback_rate_type red3ext::wave_out_set_playback_rate;
red3ext::wave_out_get_id_type red3ext::wave_out_get_id;
red3ext::wave_out_message_type red3ext::wave_out_message;
red3ext::wave_in_get_num_devs_type red3ext::wave_in_get_num_devs;
red3ext::wave_in_get_dev_caps_a_type red3ext::wave_in_get_dev_caps_a;
red3ext::wave_in_get_dev_caps_w_type red3ext::wave_in_get_dev_caps_w;
red3ext::wave_in_get_error_text_a_type red3ext::wave_in_get_error_text_a;
red3ext::wave_in_get_error_text_w_type red3ext::wave_in_get_error_text_w;
red3ext::wave_in_open_type red3ext::wave_in_open;
red3ext::wave_in_close_type red3ext::wave_in_close;
red3ext::wave_in_prepare_header_type red3ext::wave_in_prepare_header;
red3ext::wave_in_unprepare_header_type red3ext::wave_in_unprepare_header;
red3ext::wave_in_add_buffer_type red3ext::wave_in_add_buffer;
red3ext::wave_in_start_type red3ext::wave_in_start;
red3ext::wave_in_stop_type red3ext::wave_in_stop;
red3ext::wave_in_reset_type red3ext::wave_in_reset;
red3ext::wave_in_get_position_type red3ext::wave_in_get_position;
red3ext::wave_in_get_id_type red3ext::wave_in_get_id;
red3ext::wave_in_message_type red3ext::wave_in_message;

red3ext::wow_app_exit_type red3ext::wow_app_exit;
red3ext::mci_execute_type red3ext::mci_execute;
red3ext::mmsystem_get_version_type red3ext::mmsystem_get_version;
red3ext::play_sound_stub_type red3ext::play_sound_stub;

LRESULT WINAPI _close_driver(HDRVR hdriver, LPARAM lparam1, LPARAM lparam2)
{
    return red3ext::close_driver(hdriver, lparam1, lparam2);
}

HDRVR WINAPI _open_driver(LPCWSTR sz_driver_name, LPCWSTR sz_section_name, LPARAM lparam2)
{
    return red3ext::open_driver(sz_driver_name, sz_section_name, lparam2);
}

LRESULT WINAPI _send_driver_message(HDRVR hdriver, UINT message, LPARAM lparam1, LPARAM lparam2)
{
    return red3ext::send_driver_message(hdriver, message, lparam1, lparam2);
}

HMODULE WINAPI _drv_get_module_handle(HDRVR hdriver)
{
    return red3ext::drv_get_module_handle(hdriver);
}

HMODULE WINAPI _get_driver_module_handle(HDRVR hdriver)
{
    return red3ext::get_driver_module_handle(hdriver);
}

LRESULT WINAPI _def_driver_proc(DWORD_PTR dw_driver_identifier, HDRVR hdrvr, UINT umsg, LPARAM lparam1, LPARAM lparam2)
{
    return red3ext::def_driver_proc(dw_driver_identifier, hdrvr, umsg, lparam1, lparam2);
}

BOOL APIENTRY _driver_callback(DWORD_PTR dw_callback, DWORD dw_Flags, HDRVR hdevice, DWORD dw_msg, DWORD_PTR dw_user,
                               DWORD_PTR dw_param1, DWORD_PTR dw_param2)
{
    return red3ext::driver_callback(dw_callback, dw_Flags, hdevice, dw_msg, dw_user, dw_param1, dw_param2);
}

BOOL WINAPI _play_sound(LPCSTR psz_sound, HMODULE hmod, DWORD fdw_sound)
{
    return red3ext::play_sound(psz_sound, hmod, fdw_sound);
}

BOOL WINAPI _play_sound_a(LPCSTR psz_sound, HMODULE hmod, DWORD fdw_sound)
{
    return red3ext::play_sound_a(psz_sound, hmod, fdw_sound);
}

BOOL WINAPI _play_sound_w(LPCWSTR psz_sound, HMODULE hmod, DWORD fdw_sound)
{
    return red3ext::play_sound_w(psz_sound, hmod, fdw_sound);
}

UINT WINAPI _aux_get_num_devs(void)
{
    return red3ext::aux_get_num_devs();
}

MMRESULT WINAPI _aux_get_dev_caps_a(UINT_PTR udevice_id, LPAUXCAPSA pac, UINT cbac)
{
    return red3ext::aux_get_dev_caps_a(udevice_id, pac, cbac);
}

MMRESULT WINAPI _aux_get_dev_caps_w(UINT_PTR udevice_id, LPAUXCAPSW pac, UINT cbac)
{
    return red3ext::aux_get_dev_caps_w(udevice_id, pac, cbac);
}

MMRESULT WINAPI _aux_set_volume(UINT udevice_id, DWORD dw_volume)
{
    return red3ext::aux_set_volume(udevice_id, dw_volume);
}

MMRESULT WINAPI _aux_get_volume(UINT udevice_id, LPDWORD pdw_volume)
{
    return red3ext::aux_get_volume(udevice_id, pdw_volume);
}

MMRESULT WINAPI _aux_out_message(UINT udevice_id, UINT umsg, DWORD_PTR dw1, DWORD_PTR dw2)
{
    return red3ext::aux_out_message(udevice_id, umsg, dw1, dw2);
}

MMRESULT WINAPI _joy_get_pos(UINT ujoy_id, LPJOYINFO pji)
{
    return red3ext::joy_get_pos(ujoy_id, pji);
}

MMRESULT WINAPI _joy_get_threshold(UINT ujoy_id, LPUINT pu_threshold)
{
    return red3ext::joy_get_threshold(ujoy_id, pu_threshold);
}

MMRESULT WINAPI _joy_release_capture(UINT ujoy_id)
{
    return red3ext::joy_release_capture(ujoy_id);
}

MMRESULT WINAPI _joy_set_capture(HWND hwnd, UINT ujoy_id, UINT uperiod, BOOL fchanged)
{
    return red3ext::joy_set_capture(hwnd, ujoy_id, uperiod, fchanged);
}

MMRESULT WINAPI _joy_set_threshold(UINT ujoy_id, UINT u_threshold)
{
    return red3ext::joy_set_threshold(ujoy_id, u_threshold);
}

MMRESULT WINAPI _joy_config_changed(DWORD dw_flags)
{
    return red3ext::joy_config_changed(dw_flags);
}

MMRESULT WINAPI _joy_get_pos_ex(UINT ujoy_id, LPJOYINFOEX pji)
{
    return red3ext::joy_get_pos_ex(ujoy_id, pji);
}

UINT WINAPI _joy_get_num_devs(void)
{
    return red3ext::joy_get_num_devs();
}

MMRESULT WINAPI _joy_get_dev_caps_a(UINT_PTR ujoy_id, LPJOYCAPSA pjc, UINT cbjc)
{
    return red3ext::joy_get_dev_caps_a(ujoy_id, pjc, cbjc);
}

MMRESULT WINAPI _joy_get_dev_caps_w(UINT_PTR ujoy_id, LPJOYCAPSW pjc, UINT cbjc)
{
    return red3ext::joy_get_dev_caps_w(ujoy_id, pjc, cbjc);
}

MCIERROR WINAPI _mci_send_command_a(MCIDEVICEID mci_id, UINT umsg, DWORD_PTR dw_param1, DWORD_PTR dw_param2)
{
    return red3ext::mci_send_command_a(mci_id, umsg, dw_param1, dw_param2);
}

MCIERROR WINAPI _mci_send_command_w(MCIDEVICEID mci_id, UINT umsg, DWORD_PTR dw_param1, DWORD_PTR dw_param2)
{
    return red3ext::mci_send_command_w(mci_id, umsg, dw_param1, dw_param2);
}

MCIERROR WINAPI _mci_send_string_a(LPCSTR lpstr_command, LPSTR lpstr_return_string, UINT ureturn_length,
                                   HWND hwnd_callback)
{
    return red3ext::mci_send_string_a(lpstr_command, lpstr_return_string, ureturn_length, hwnd_callback);
}

MCIERROR WINAPI _mci_send_string_w(LPCWSTR lpstr_command, LPWSTR lpstr_return_string, UINT ureturn_length,
                                   HWND hwnd_callback)
{
    return red3ext::mci_send_string_w(lpstr_command, lpstr_return_string, ureturn_length, hwnd_callback);
}

MCIDEVICEID WINAPI _mci_get_device_id_a(LPCSTR psz_device)
{
    return red3ext::mci_get_device_id_a(psz_device);
}

MCIDEVICEID WINAPI _mci_get_device_id_w(LPCWSTR psz_device)
{
    return red3ext::mci_get_device_id_w(psz_device);
}

MCIDEVICEID WINAPI _mci_get_device_id_from_element_id_a(DWORD dw_element_id, LPCSTR lpstr_type)
{
    return red3ext::mci_get_device_id_from_element_id_a(dw_element_id, lpstr_type);
}

MCIDEVICEID WINAPI _mci_get_device_id_from_element_id_w(DWORD dw_element_id, LPCWSTR lpstr_type)
{
    return red3ext::mci_get_device_id_from_element_id_w(dw_element_id, lpstr_type);
}

BOOL WINAPI _mci_get_error_string_a(MCIERROR mcierr, LPSTR psz_text, UINT cch_text)
{
    return red3ext::mci_get_error_string_a(mcierr, psz_text, cch_text);
}

BOOL WINAPI _mci_get_error_string_w(MCIERROR mcierr, LPWSTR psz_text, UINT cch_text)
{
    return red3ext::mci_get_error_string_w(mcierr, psz_text, cch_text);
}

BOOL WINAPI _mci_set_yield_proc(MCIDEVICEID mciId, YIELDPROC fp_yield_proc, DWORD dw_yield_data)
{
    return red3ext::mci_set_yield_proc(mciId, fp_yield_proc, dw_yield_data);
}

HTASK WINAPI _mci_get_creator_task(MCIDEVICEID mci_id)
{
    return red3ext::mci_get_creator_task(mci_id);
}

YIELDPROC WINAPI _mci_get_yield_proc(MCIDEVICEID mci_id, LPDWORD pdw_yield_data)
{
    return red3ext::mci_get_yield_proc(mci_id, pdw_yield_data);
}

DWORD_PTR APIENTRY _mci_get_driver_data(MCIDEVICEID wdevice_id)
{
    return red3ext::mci_get_driver_data(wdevice_id);
}

UINT APIENTRY _mci_load_command_resource(HANDLE hinstance, LPCWSTR lp_res_name, UINT wtype)
{
    return red3ext::mci_load_command_resource(hinstance, lp_res_name, wtype);
}

BOOL APIENTRY _mci_set_driver_data(MCIDEVICEID wdevice_id, DWORD_PTR dw_data)
{
    return red3ext::mci_set_driver_data(wdevice_id, dw_data);
}

UINT APIENTRY _mci_driver_yield(MCIDEVICEID wdevice_id)
{
    return red3ext::mci_driver_yield(wdevice_id);
}

BOOL APIENTRY _mci_driver_notify(HANDLE hwnd_callback, MCIDEVICEID wdevice_id, UINT ustatus)
{
    return red3ext::mci_driver_notify(hwnd_callback, wdevice_id, ustatus);
}

BOOL APIENTRY _mci_free_command_resource(UINT wtable)
{
    return red3ext::mci_free_command_resource(wtable);
}

UINT WINAPI _midi_out_get_num_devs(void)
{
    return red3ext::midi_out_get_num_devs();
}

MMRESULT WINAPI _midi_stream_open(LPHMIDISTRM phms, LPUINT pu_device_id, DWORD cmidi, DWORD_PTR dw_callback,
                                  DWORD_PTR dw_instance, DWORD fdw_open)
{
    return red3ext::midi_stream_open(phms, pu_device_id, cmidi, dw_callback, dw_instance, fdw_open);
}

MMRESULT WINAPI _midi_stream_close(HMIDISTRM hms)
{
    return red3ext::midi_stream_close(hms);
}

MMRESULT WINAPI _midi_stream_property(HMIDISTRM hms, LPBYTE lppropdata, DWORD dw_property)
{
    return red3ext::midi_stream_property(hms, lppropdata, dw_property);
}

MMRESULT WINAPI _midi_stream_position(HMIDISTRM hms, LPMMTIME lpmmt, UINT cbmmt)
{
    return red3ext::midi_stream_position(hms, lpmmt, cbmmt);
}

MMRESULT WINAPI _midi_stream_out(HMIDISTRM hms, LPMIDIHDR pmh, UINT cbmh)
{
    return red3ext::midi_stream_out(hms, pmh, cbmh);
}

MMRESULT WINAPI _midi_stream_pause(HMIDISTRM hms)
{
    return red3ext::midi_stream_pause(hms);
}

MMRESULT WINAPI _midi_stream_restart(HMIDISTRM hms)
{
    return red3ext::midi_stream_restart(hms);
}

MMRESULT WINAPI _midi_stream_stop(HMIDISTRM hms)
{
    return red3ext::midi_stream_stop(hms);
}

MMRESULT WINAPI _midi_connect(HMIDI hmi, HMIDIOUT hmo, LPVOID preserved)
{
    return red3ext::midi_connect(hmi, hmo, preserved);
}

MMRESULT WINAPI _midi_disconnect(HMIDI hmi, HMIDIOUT hmo, LPVOID preserved)
{
    return red3ext::midi_disconnect(hmi, hmo, preserved);
}

MMRESULT WINAPI _midi_out_get_dev_caps_a(UINT_PTR udevice_id, LPMIDIOUTCAPSA pmoc, UINT cbmoc)
{
    return red3ext::midi_out_get_dev_caps_a(udevice_id, pmoc, cbmoc);
}

MMRESULT WINAPI _midi_out_get_dev_caps_w(UINT_PTR udevice_id, LPMIDIOUTCAPSW pmoc, UINT cbmoc)
{
    return red3ext::midi_out_get_dev_caps_w(udevice_id, pmoc, cbmoc);
}

MMRESULT WINAPI _midi_out_get_volume(HMIDIOUT hmo, LPDWORD pdw_volume)
{
    return red3ext::midi_out_get_volume(hmo, pdw_volume);
}

MMRESULT WINAPI _midi_out_set_volume(HMIDIOUT hmo, DWORD dw_volume)
{
    return red3ext::midi_out_set_volume(hmo, dw_volume);
}

MMRESULT WINAPI _midi_out_get_error_text_a(MMRESULT mmr_error, LPSTR psz_text, UINT cch_text)
{
    return red3ext::midi_out_get_error_text_a(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _midi_out_get_error_text_w(MMRESULT mmr_error, LPWSTR psz_text, UINT cch_text)
{
    return red3ext::midi_out_get_error_text_w(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _midi_out_open(LPHMIDIOUT phmo, UINT udevice_id, DWORD_PTR dw_callback, DWORD_PTR dw_instance,
                               DWORD fdw_open)
{
    return red3ext::midi_out_open(phmo, udevice_id, dw_callback, dw_instance, fdw_open);
}

MMRESULT WINAPI _midi_out_close(HMIDIOUT hmo)
{
    return red3ext::midi_out_close(hmo);
}

MMRESULT WINAPI _midi_out_prepare_header(HMIDIOUT hmo, LPMIDIHDR pmh, UINT cbmh)
{
    return red3ext::midi_out_prepare_header(hmo, pmh, cbmh);
}

MMRESULT WINAPI _midi_out_unprepare_header(HMIDIOUT hmo, LPMIDIHDR pmh, UINT cbmh)
{
    return red3ext::midi_out_unprepare_header(hmo, pmh, cbmh);
}

MMRESULT WINAPI _midi_out_short_msg(HMIDIOUT hmo, DWORD dw_msg)
{
    return red3ext::midi_out_short_msg(hmo, dw_msg);
}

MMRESULT WINAPI _midi_out_long_msg(HMIDIOUT hmo, LPMIDIHDR pmh, UINT cbmh)
{
    return red3ext::midi_out_long_msg(hmo, pmh, cbmh);
}

MMRESULT WINAPI _midi_out_reset(HMIDIOUT hmo)
{
    return red3ext::midi_out_reset(hmo);
}

MMRESULT WINAPI _midi_out_cache_patches(HMIDIOUT hmo, UINT ubank, LPWORD pwpa, UINT fu_cache)
{
    return red3ext::midi_out_cache_patches(hmo, ubank, pwpa, fu_cache);
}

MMRESULT WINAPI _midi_out_cache_drum_patches(HMIDIOUT hmo, UINT upatch, LPWORD pwkya, UINT fu_cache)
{
    return red3ext::midi_out_cache_drum_patches(hmo, upatch, pwkya, fu_cache);
}

MMRESULT WINAPI _midi_out_get_id(HMIDIOUT hmo, LPUINT pu_device_id)
{
    return red3ext::midi_out_get_id(hmo, pu_device_id);
}

MMRESULT WINAPI _midi_out_message(HMIDIOUT hmo, UINT umsg, DWORD_PTR dw1, DWORD_PTR dw2)
{
    return red3ext::midi_out_message(hmo, umsg, dw1, dw2);
}

UINT WINAPI _midi_in_get_num_devs(void)
{
    return red3ext::midi_in_get_num_devs();
}

MMRESULT WINAPI _midi_in_get_dev_caps_a(UINT_PTR udevice_id, LPMIDIINCAPSA pmic, UINT cbmic)
{
    return red3ext::midi_in_get_dev_caps_a(udevice_id, pmic, cbmic);
}

MMRESULT WINAPI _midi_in_get_dev_caps_w(UINT_PTR udevice_id, LPMIDIINCAPSW pmic, UINT cbmic)
{
    return red3ext::midi_in_get_dev_caps_w(udevice_id, pmic, cbmic);
}

MMRESULT WINAPI _midi_in_get_error_text_a(MMRESULT mmr_error, LPSTR psz_text, UINT cch_text)
{
    return red3ext::midi_in_get_error_text_a(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _midi_in_get_error_text_w(MMRESULT mmr_error, LPWSTR psz_text, UINT cch_text)
{
    return red3ext::midi_in_get_error_text_w(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _midi_in_open(LPHMIDIIN phmi, UINT udevice_id, DWORD_PTR dw_callback, DWORD_PTR dw_instance,
                              DWORD fdw_open)
{
    return red3ext::midi_in_open(phmi, udevice_id, dw_callback, dw_instance, fdw_open);
}

MMRESULT WINAPI _midi_in_close(HMIDIIN hmi)
{
    return red3ext::midi_in_close(hmi);
}

MMRESULT WINAPI _midi_in_prepare_header(HMIDIIN hmi, LPMIDIHDR pmh, UINT cbmh)
{
    return red3ext::midi_in_prepare_header(hmi, pmh, cbmh);
}

MMRESULT WINAPI _midi_in_unprepare_header(HMIDIIN hmi, LPMIDIHDR pmh, UINT cbmh)
{
    return red3ext::midi_in_unprepare_header(hmi, pmh, cbmh);
}

MMRESULT WINAPI _midi_in_add_buffer(HMIDIIN hmi, LPMIDIHDR pmh, UINT cbmh)
{
    return red3ext::midi_in_add_buffer(hmi, pmh, cbmh);
}

MMRESULT WINAPI _midi_in_start(HMIDIIN hmi)
{
    return red3ext::midi_in_start(hmi);
}

MMRESULT WINAPI _midi_in_stop(HMIDIIN hmi)
{
    return red3ext::midi_in_stop(hmi);
}

MMRESULT WINAPI _midi_in_reset(HMIDIIN hmi)
{
    return red3ext::midi_in_reset(hmi);
}

MMRESULT WINAPI _midi_in_get_id(HMIDIIN hmi, LPUINT pu_device_id)
{
    return red3ext::midi_in_get_id(hmi, pu_device_id);
}

MMRESULT WINAPI _midi_in_message(HMIDIIN hmi, UINT umsg, DWORD_PTR dw1, DWORD_PTR dw2)
{
    return red3ext::midi_in_message(hmi, umsg, dw1, dw2);
}

UINT WINAPI _mixer_get_num_devs(void)
{
    return red3ext::mixer_get_num_devs();
}

MMRESULT WINAPI _mixer_get_dev_caps_a(UINT_PTR umx_id, LPMIXERCAPSA pmxcaps, UINT cbmxcaps)
{
    return red3ext::mixer_get_dev_caps_a(umx_id, pmxcaps, cbmxcaps);
}

MMRESULT WINAPI _mixer_get_dev_caps_w(UINT_PTR umx_id, LPMIXERCAPSW pmxcaps, UINT cbmxcaps)
{
    return red3ext::mixer_get_dev_caps_w(umx_id, pmxcaps, cbmxcaps);
}

MMRESULT WINAPI _mixer_open(LPHMIXER phmx, UINT umx_id, DWORD_PTR dw_callback, DWORD_PTR dw_instance, DWORD fdw_open)
{
    return red3ext::mixer_open(phmx, umx_id, dw_callback, dw_instance, fdw_open);
}

MMRESULT WINAPI _mixer_close(HMIXER hmx)
{
    return red3ext::mixer_close(hmx);
}

DWORD WINAPI _mixer_message(HMIXER hmx, UINT umsg, DWORD_PTR dw_param1, DWORD_PTR dw_param2)
{
    return red3ext::mixer_message(hmx, umsg, dw_param1, dw_param2);
}

MMRESULT WINAPI _mixer_get_line_info_a(HMIXEROBJ hmxobj, LPMIXERLINEA pmxl, DWORD fdw_info)
{
    return red3ext::mixer_get_line_info_a(hmxobj, pmxl, fdw_info);
}

MMRESULT WINAPI _mixer_get_line_info_w(HMIXEROBJ hmxobj, LPMIXERLINEW pmxl, DWORD fdw_info)
{
    return red3ext::mixer_get_line_info_w(hmxobj, pmxl, fdw_info);
}

MMRESULT WINAPI _mixer_get_id(HMIXEROBJ hmxobj, UINT FAR* pu_mx_id, DWORD fdw_id)
{
    return red3ext::mixer_get_id(hmxobj, pu_mx_id, fdw_id);
}

MMRESULT WINAPI _mixer_get_line_controls_a(HMIXEROBJ hmxobj, LPMIXERLINECONTROLSA pmxlc, DWORD fdw_controls)
{
    return red3ext::mixer_get_line_controls_a(hmxobj, pmxlc, fdw_controls);
}

MMRESULT WINAPI _mixer_get_line_controls_w(HMIXEROBJ hmxobj, LPMIXERLINECONTROLSW pmxlc, DWORD fdw_controls)
{
    return red3ext::mixer_get_line_controls_w(hmxobj, pmxlc, fdw_controls);
}

MMRESULT WINAPI _mixer_get_control_details_a(HMIXEROBJ hmxobj, LPMIXERCONTROLDETAILS pmxcd, DWORD fdw_details)
{
    return red3ext::mixer_get_control_details_a(hmxobj, pmxcd, fdw_details);
}

MMRESULT WINAPI _mixer_get_control_details_w(HMIXEROBJ hmxobj, LPMIXERCONTROLDETAILS pmxcd, DWORD fdw_details)
{
    return red3ext::mixer_get_control_details_w(hmxobj, pmxcd, fdw_details);
}

MMRESULT WINAPI _mixer_set_control_details(HMIXEROBJ hmxobj, LPMIXERCONTROLDETAILS pmxcd, DWORD fdw_details)
{
    return red3ext::mixer_set_control_details(hmxobj, pmxcd, fdw_details);
}

UINT APIENTRY _mm_drv_install(HDRVR hdriver, LPCWSTR wsz_drv_entry, DRIVERMSGPROC drv_message, UINT wflags)
{
    return red3ext::mm_drv_install(hdriver, wsz_drv_entry, drv_message, wflags);
}

UINT APIENTRY _mm_task_create(LPTASKCALLBACK lpfn, HANDLE FAR* lph, DWORD_PTR dw_inst)
{
    return red3ext::mm_task_create(lpfn, lph, dw_inst);
}

VOID APIENTRY _mm_task_block(DWORD h)
{
    return red3ext::mm_task_block(h);
}

BOOL APIENTRY _mm_task_signal(DWORD h)
{
    return red3ext::mm_task_signal(h);
}

VOID APIENTRY _mm_task_yield(VOID)
{
    return red3ext::mm_task_yield();
}

DWORD APIENTRY _mm_get_current_task(VOID)
{
    return red3ext::mm_get_current_task();
}

FOURCC WINAPI _mmio_string_to_fourcc_a(LPCSTR sz, UINT uflags)
{
    return red3ext::mmio_string_to_fourcc_a(sz, uflags);
}

FOURCC WINAPI _mmio_string_to_fourcc_w(LPCWSTR sz, UINT uflags)
{
    return red3ext::mmio_string_to_fourcc_w(sz, uflags);
}

LPMMIOPROC WINAPI _mmio_install_io_proc_a(FOURCC fcc_io_proc, LPMMIOPROC pio_proc, DWORD dw_flags)
{
    return red3ext::mmio_install_io_proc_a(fcc_io_proc, pio_proc, dw_flags);
}

LPMMIOPROC WINAPI _mmio_install_io_proc_w(FOURCC fcc_io_proc, LPMMIOPROC pio_proc, DWORD dw_flags)
{
    return red3ext::mmio_install_io_proc_w(fcc_io_proc, pio_proc, dw_flags);
}

HMMIO WINAPI _mmio_open_a(LPSTR psz_file_name, LPMMIOINFO pmmioinfo, DWORD fdw_open)
{
    return red3ext::mmio_open_a(psz_file_name, pmmioinfo, fdw_open);
}

HMMIO WINAPI _mmio_open_w(LPWSTR psz_file_name, LPMMIOINFO pmmioinfo, DWORD fdw_open)
{
    return red3ext::mmio_open_w(psz_file_name, pmmioinfo, fdw_open);
}

MMRESULT WINAPI _mmio_rename_a(LPCSTR psz_file_name, LPCSTR psz_new_file_name, LPCMMIOINFO pmmioinfo, DWORD fdw_rename)
{
    return red3ext::mmio_rename_a(psz_file_name, psz_new_file_name, pmmioinfo, fdw_rename);
}

MMRESULT WINAPI _mmio_rename_w(LPCWSTR psz_file_name, LPCWSTR psz_new_file_name, LPCMMIOINFO pmmioinfo,
                               DWORD fdw_rename)
{
    return red3ext::mmio_rename_w(psz_file_name, psz_new_file_name, pmmioinfo, fdw_rename);
}

MMRESULT WINAPI _mmio_close(HMMIO hmmio, UINT fu_close)
{
    return red3ext::mmio_close(hmmio, fu_close);
}

LONG WINAPI _mmio_read(HMMIO hmmio, HPSTR pch, LONG cch)
{
    return red3ext::mmio_read(hmmio, pch, cch);
}

LONG WINAPI _mmio_write(HMMIO hmmio, const char _huge* pch, LONG cch)
{
    return red3ext::mmio_write(hmmio, pch, cch);
}

LONG WINAPI _mmio_seek(HMMIO hmmio, LONG loffset, int iorigin)
{
    return red3ext::mmio_seek(hmmio, loffset, iorigin);
}

MMRESULT WINAPI _mmio_get_info(HMMIO hmmio, LPMMIOINFO pmmioinfo, UINT fu_info)
{
    return red3ext::mmio_get_info(hmmio, pmmioinfo, fu_info);
}

MMRESULT WINAPI _mmio_set_info(HMMIO hmmio, LPCMMIOINFO pmmioinfo, UINT fu_info)
{
    return red3ext::mmio_set_info(hmmio, pmmioinfo, fu_info);
}

MMRESULT WINAPI _mmio_set_buffer(HMMIO hmmio, LPSTR pch_buffer, LONG cch_buffer, UINT fu_buffer)
{
    return red3ext::mmio_set_buffer(hmmio, pch_buffer, cch_buffer, fu_buffer);
}

MMRESULT WINAPI _mmio_flush(HMMIO hmmio, UINT fu_flush)
{
    return red3ext::mmio_flush(hmmio, fu_flush);
}

MMRESULT WINAPI _mmio_advance(HMMIO hmmio, LPMMIOINFO pmmioinfo, UINT fu_advance)
{
    return red3ext::mmio_advance(hmmio, pmmioinfo, fu_advance);
}

LRESULT WINAPI _mmio_send_message(HMMIO hmmio, UINT umsg, LPARAM lparam1, LPARAM lparam2)
{
    return red3ext::mmio_send_message(hmmio, umsg, lparam1, lparam2);
}

MMRESULT WINAPI _mmio_descend(HMMIO hmmio, LPMMCKINFO pmmcki, const MMCKINFO FAR* pmmcki_parent, UINT fu_descend)
{
    return red3ext::mmio_descend(hmmio, pmmcki, pmmcki_parent, fu_descend);
}

MMRESULT WINAPI _mmio_ascend(HMMIO hmmio, LPMMCKINFO pmmcki, UINT fu_ascend)
{
    return red3ext::mmio_ascend(hmmio, pmmcki, fu_ascend);
}

MMRESULT WINAPI _mmio_create_chunk(HMMIO hmmio, LPMMCKINFO pmmcki, UINT fu_create)
{
    return red3ext::mmio_create_chunk(hmmio, pmmcki, fu_create);
}

BOOL WINAPI _snd_play_sound_a(LPCSTR psz_sound, UINT fu_sound)
{
    return red3ext::snd_play_sound_a(psz_sound, fu_sound);
}

BOOL WINAPI _snd_play_sound_w(LPCWSTR psz_sound, UINT fu_sound)
{
    return red3ext::snd_play_sound_w(psz_sound, fu_sound);
}

MMRESULT WINAPI _time_get_system_time(LPMMTIME pmmt, UINT cbmmt)
{
    return red3ext::time_get_system_time(pmmt, cbmmt);
}

DWORD WINAPI _time_get_time(void)
{
    return red3ext::time_get_time();
}

MMRESULT WINAPI _time_get_dev_caps(LPTIMECAPS ptc, UINT cbtc)
{
    return red3ext::time_get_dev_caps(ptc, cbtc);
}

MMRESULT WINAPI _time_begin_period(UINT uperiod)
{
    return red3ext::time_begin_period(uperiod);
}

MMRESULT WINAPI _time_end_period(UINT uperiod)
{
    return red3ext::time_end_period(uperiod);
}

MMRESULT WINAPI _time_set_event(UINT udelay, UINT uresolution, LPTIMECALLBACK fptc, DWORD_PTR dwUser, UINT fu_event)
{
    return red3ext::time_set_event(udelay, uresolution, fptc, dwUser, fu_event);
}

MMRESULT WINAPI _time_kill_event(UINT utimer_id)
{
    return red3ext::time_kill_event(utimer_id);
}

UINT WINAPI _wave_out_get_num_devs(void)
{
    return red3ext::wave_out_get_num_devs();
}

MMRESULT WINAPI _wave_out_get_dev_caps_a(UINT_PTR udevice_id, LPWAVEOUTCAPSA pwoc, UINT cbwoc)
{
    return red3ext::wave_out_get_dev_caps_a(udevice_id, pwoc, cbwoc);
}

MMRESULT WINAPI _wave_out_get_dev_caps_w(UINT_PTR udevice_id, LPWAVEOUTCAPSW pwoc, UINT cbwoc)
{
    return red3ext::wave_out_get_dev_caps_w(udevice_id, pwoc, cbwoc);
}

MMRESULT WINAPI _wave_out_get_volume(HWAVEOUT hwo, LPDWORD pdw_volume)
{
    return red3ext::wave_out_get_volume(hwo, pdw_volume);
}

MMRESULT WINAPI _wave_out_set_volume(HWAVEOUT hwo, DWORD dw_volume)
{
    return red3ext::wave_out_set_volume(hwo, dw_volume);
}

MMRESULT WINAPI _wave_out_get_error_text_a(MMRESULT mmr_error, LPSTR psz_text, UINT cch_text)
{
    return red3ext::wave_out_get_error_text_a(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _wave_out_get_error_text_w(MMRESULT mmr_error, LPWSTR psz_text, UINT cch_text)
{
    return red3ext::wave_out_get_error_text_w(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _wave_out_open(LPHWAVEOUT phwo, UINT udevice_id, LPCWAVEFORMATEX pwfx, DWORD_PTR dw_callback,
                               DWORD_PTR dw_instance, DWORD fdw_open)
{
    return red3ext::wave_out_open(phwo, udevice_id, pwfx, dw_callback, dw_instance, fdw_open);
}

MMRESULT WINAPI _wave_out_close(HWAVEOUT hwo)
{
    return red3ext::wave_out_close(hwo);
}

MMRESULT WINAPI _wave_out_prepare_header(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh)
{
    return red3ext::wave_out_prepare_header(hwo, pwh, cbwh);
}

MMRESULT WINAPI _wave_out_unprepare_header(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh)
{
    return red3ext::wave_out_unprepare_header(hwo, pwh, cbwh);
}

MMRESULT WINAPI _wave_out_write(HWAVEOUT hwo, LPWAVEHDR pwh, UINT cbwh)
{
    return red3ext::wave_out_write(hwo, pwh, cbwh);
}

MMRESULT WINAPI _wave_out_pause(HWAVEOUT hwo)
{
    return red3ext::wave_out_pause(hwo);
}

MMRESULT WINAPI _wave_out_restart(HWAVEOUT hwo)
{
    return red3ext::wave_out_restart(hwo);
}

MMRESULT WINAPI _wave_out_reset(HWAVEOUT hwo)
{
    return red3ext::wave_out_reset(hwo);
}

MMRESULT WINAPI _wave_out_break_loop(HWAVEOUT hwo)
{
    return red3ext::wave_out_break_loop(hwo);
}

MMRESULT WINAPI _wave_out_get_position(HWAVEOUT hwo, LPMMTIME pmmt, UINT cbmmt)
{
    return red3ext::wave_out_get_position(hwo, pmmt, cbmmt);
}

MMRESULT WINAPI _wave_out_get_pitch(HWAVEOUT hwo, LPDWORD pdw_pitch)
{
    return red3ext::wave_out_get_pitch(hwo, pdw_pitch);
}

MMRESULT WINAPI _wave_out_set_pitch(HWAVEOUT hwo, DWORD dw_pitch)
{
    return red3ext::wave_out_set_pitch(hwo, dw_pitch);
}

MMRESULT WINAPI _wave_out_get_playback_rate(HWAVEOUT hwo, LPDWORD pdw_rate)
{
    return red3ext::wave_out_get_playback_rate(hwo, pdw_rate);
}

MMRESULT WINAPI _wave_out_set_playback_rate(HWAVEOUT hwo, DWORD dw_rate)
{
    return red3ext::wave_out_set_playback_rate(hwo, dw_rate);
}

MMRESULT WINAPI _wave_out_get_id(HWAVEOUT hwo, LPUINT pu_device_id)
{
    return red3ext::wave_out_get_id(hwo, pu_device_id);
}

MMRESULT WINAPI _wave_out_message(HWAVEOUT hwo, UINT umsg, DWORD_PTR dw1, DWORD_PTR dw2)
{
    return red3ext::wave_out_message(hwo, umsg, dw1, dw2);
}

UINT WINAPI _wave_in_get_num_devs(void)
{
    return red3ext::wave_in_get_num_devs();
}

MMRESULT WINAPI _wave_in_get_dev_caps_a(UINT_PTR udevice_id, LPWAVEINCAPSA pwic, UINT cbwic)
{
    return red3ext::wave_in_get_dev_caps_a(udevice_id, pwic, cbwic);
}

MMRESULT WINAPI _wave_in_get_dev_caps_w(UINT_PTR udevice_id, LPWAVEINCAPSW pwic, UINT cbwic)
{
    return red3ext::wave_in_get_dev_caps_w(udevice_id, pwic, cbwic);
}

MMRESULT WINAPI _wave_in_get_error_text_a(MMRESULT mmr_error, LPSTR psz_text, UINT cch_text)
{
    return red3ext::wave_in_get_error_text_a(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _wave_in_get_error_text_w(MMRESULT mmr_error, LPWSTR psz_text, UINT cch_text)
{
    return red3ext::wave_in_get_error_text_w(mmr_error, psz_text, cch_text);
}

MMRESULT WINAPI _wave_in_open(LPHWAVEIN phwi, UINT udevice_id, LPCWAVEFORMATEX pwfx, DWORD_PTR dw_callback,
                              DWORD_PTR dw_instance, DWORD fdw_open)
{
    return red3ext::wave_in_open(phwi, udevice_id, pwfx, dw_callback, dw_instance, fdw_open);
}

MMRESULT WINAPI _wave_in_close(HWAVEIN hwi)
{
    return red3ext::wave_in_close(hwi);
}

MMRESULT WINAPI _wave_in_prepare_header(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh)
{
    return red3ext::wave_in_prepare_header(hwi, pwh, cbwh);
}

MMRESULT WINAPI _wave_in_unprepare_header(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh)
{
    return red3ext::wave_in_unprepare_header(hwi, pwh, cbwh);
}

MMRESULT WINAPI _wave_in_add_buffer(HWAVEIN hwi, LPWAVEHDR pwh, UINT cbwh)
{
    return red3ext::wave_in_add_buffer(hwi, pwh, cbwh);
}

MMRESULT WINAPI _wave_in_start(HWAVEIN hwi)
{
    return red3ext::wave_in_start(hwi);
}

MMRESULT WINAPI _wave_in_stop(HWAVEIN hwi)
{
    return red3ext::wave_in_stop(hwi);
}

MMRESULT WINAPI _wave_in_reset(HWAVEIN hwi)
{
    return red3ext::wave_in_reset(hwi);
}

MMRESULT WINAPI _wave_in_get_position(HWAVEIN hwi, LPMMTIME pmmt, UINT cbmmt)
{
    return red3ext::wave_in_get_position(hwi, pmmt, cbmmt);
}

MMRESULT WINAPI _wave_in_get_id(HWAVEIN hwi, LPUINT pu_device_id)
{
    return red3ext::wave_in_get_id(hwi, pu_device_id);
}

MMRESULT WINAPI _wave_in_message(HWAVEIN hwi, UINT umsg, DWORD_PTR dw1, DWORD_PTR dw2)
{
    return red3ext::wave_in_message(hwi, umsg, dw1, dw2);
}

VOID WINAPI _wow_app_exit()
{
    return red3ext::wow_app_exit();
}

BOOL WINAPI _mci_execute(LPCSTR psz_command)
{
    return red3ext::mci_execute(psz_command);
}

UINT WINAPI _mmsystem_get_version()
{
    return red3ext::mmsystem_get_version();
}

BOOL WINAPI _play_sound_stub(LPCSTR psz_sound, HMODULE hmod, DWORD fdw_sound)
{
    return red3ext::play_sound_stub(psz_sound, hmod, fdw_sound);
}
