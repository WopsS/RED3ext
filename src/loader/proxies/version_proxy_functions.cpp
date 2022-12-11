#include "version_proxy_functions.hpp"

red3ext::get_file_version_info_a_type red3ext::get_file_version_info_a;
red3ext::get_file_version_info_ex_a_type red3ext::get_file_version_info_ex_a;
red3ext::get_file_version_info_ex_w_type red3ext::get_file_version_info_ex_w;
red3ext::get_file_version_info_size_a_type red3ext::get_file_version_info_size_a;
red3ext::get_file_version_info_size_ex_a_type red3ext::get_file_version_info_size_ex_a;
red3ext::get_file_version_info_size_ex_w_type red3ext::get_file_version_info_size_ex_w;
red3ext::get_file_version_info_size_w_type red3ext::get_file_version_info_size_w;
red3ext::get_file_version_info_w_type red3ext::get_file_version_info_w;
red3ext::ver_find_file_a_type red3ext::ver_find_file_a;
red3ext::ver_find_file_w_type red3ext::ver_find_file_w;
red3ext::ver_install_file_a_type red3ext::ver_install_file_a;
red3ext::ver_install_file_w_type red3ext::ver_install_file_w;
red3ext::ver_language_name_a_type red3ext::ver_language_name_a;
red3ext::ver_language_name_w_type red3ext::ver_language_name_w;
red3ext::ver_query_value_a_type red3ext::ver_query_value_a;
red3ext::ver_query_value_w_type red3ext::ver_query_value_w;
red3ext::get_file_version_info_by_handle_type red3ext::get_file_version_info_by_handle;

BOOL APIENTRY _get_file_version_info_a(LPCSTR lptstr_filename, DWORD dw_handle, DWORD dw_len, LPVOID lp_data)
{
    return red3ext::get_file_version_info_a(lptstr_filename, dw_handle, dw_len, lp_data);
}

BOOL APIENTRY _get_file_version_info_ex_a(DWORD dw_flags, LPCSTR lpwstr_filename, DWORD dw_handle, DWORD dw_len,
                                          LPVOID lp_data)
{
    return red3ext::get_file_version_info_ex_a(dw_flags, lpwstr_filename, dw_handle, dw_len, lp_data);
}

BOOL APIENTRY _get_file_version_info_ex_w(DWORD dw_flags, LPCWSTR lpwstr_filename, DWORD dw_handle, DWORD dw_len,
                                          LPVOID lp_data)
{
    return red3ext::get_file_version_info_ex_w(dw_flags, lpwstr_filename, dw_handle, dw_len, lp_data);
}

DWORD APIENTRY _get_file_version_info_size_a(LPCSTR lptstr_filename, LPDWORD lpdw_handle)
{
    return red3ext::get_file_version_info_size_a(lptstr_filename, lpdw_handle);
}

DWORD APIENTRY _get_file_version_info_size_ex_a(DWORD dw_flags, LPCSTR lpwstr_filename, LPDWORD lpdw_handle)
{
    return red3ext::get_file_version_info_size_ex_a(dw_flags, lpwstr_filename, lpdw_handle);
}

DWORD APIENTRY _get_file_version_info_size_ex_w(DWORD dw_flags, LPCWSTR lpwstr_filename, LPDWORD lpdw_handle)
{
    return red3ext::get_file_version_info_size_ex_w(dw_flags, lpwstr_filename, lpdw_handle);
}

DWORD APIENTRY _get_file_version_info_size_w(LPCWSTR lptstr_filename, LPDWORD lpdw_handle)
{
    return red3ext::get_file_version_info_size_w(lptstr_filename, lpdw_handle);
}

BOOL APIENTRY _get_file_version_info_w(LPCWSTR lptstr_filename, DWORD dw_handle, DWORD dw_len, LPVOID lp_data)
{
    return red3ext::get_file_version_info_w(lptstr_filename, dw_handle, dw_len, lp_data);
}

DWORD APIENTRY _ver_find_file_a(DWORD uflags, LPCSTR sz_file_name, LPCSTR sz_win_dir, LPCSTR sz_app_dir,
                                LPSTR sz_cur_dir, PUINT pu_cur_dir_len, LPSTR sz_dest_dir, PUINT pu_dest_dir_len)
{
    return red3ext::ver_find_file_a(uflags, sz_file_name, sz_win_dir, sz_app_dir, sz_cur_dir, pu_cur_dir_len,
                                    sz_dest_dir, pu_dest_dir_len);
}

DWORD APIENTRY _ver_find_file_w(DWORD uflags, LPCWSTR sz_file_name, LPCWSTR sz_win_dir, LPCWSTR sz_app_dir,
                                LPWSTR sz_cur_dir, PUINT pu_cur_dir_len, LPWSTR sz_dest_dir, PUINT pu_dest_dir_len)
{
    return red3ext::ver_find_file_w(uflags, sz_file_name, sz_win_dir, sz_app_dir, sz_cur_dir, pu_cur_dir_len,
                                    sz_dest_dir, pu_dest_dir_len);
}

DWORD APIENTRY _ver_install_file_a(DWORD uflags, LPCSTR sz_src_file_name, LPCSTR sz_dest_file_name, LPCSTR sz_src_dir,
                                   LPCSTR sz_dest_dir, LPCSTR sz_cur_dir, LPSTR sz_tmp_file, PUINT pu_tmp_file_len)
{
    return red3ext::ver_install_file_a(uflags, sz_src_file_name, sz_dest_file_name, sz_src_dir, sz_dest_dir, sz_cur_dir,
                                       sz_tmp_file, pu_tmp_file_len);
}

DWORD APIENTRY _ver_install_file_w(DWORD uflags, LPCWSTR sz_src_file_name, LPCWSTR sz_dest_file_name,
                                   LPCWSTR sz_src_dir, LPCWSTR sz_dest_dir, LPCWSTR sz_cur_dir, LPWSTR sz_tmp_file,
                                   PUINT pu_tmp_file_len)
{
    return red3ext::ver_install_file_w(uflags, sz_src_file_name, sz_dest_file_name, sz_src_dir, sz_dest_dir, sz_cur_dir,
                                       sz_tmp_file, pu_tmp_file_len);
}

DWORD APIENTRY _ver_language_name_a(DWORD wlang, LPSTR sz_lang, DWORD cch_lang)
{
    return red3ext::ver_language_name_a(wlang, sz_lang, cch_lang);
}

DWORD APIENTRY _ver_language_name_w(DWORD wlang, LPWSTR sz_lang, DWORD cch_lang)
{
    return red3ext::ver_language_name_w(wlang, sz_lang, cch_lang);
}

BOOL APIENTRY _ver_query_value_a(LPCVOID pblock, LPCSTR lp_sub_block, LPVOID* lplp_buffer, PUINT pu_len)
{
    return red3ext::ver_query_value_a(pblock, lp_sub_block, lplp_buffer, pu_len);
}

BOOL APIENTRY _ver_query_value_w(LPCVOID pblock, LPCWSTR lp_sub_block, LPVOID* lplp_buffer, PUINT pu_len)
{
    return red3ext::ver_query_value_w(pblock, lp_sub_block, lplp_buffer, pu_len);
}

void _get_file_version_info_by_handle()
{
    red3ext::get_file_version_info_by_handle();
}
