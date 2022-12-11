#include "version_proxy.hpp"
#include "version_proxy_functions.hpp"

std::wstring_view red3ext::version_proxy::name() const noexcept
{
    return L"version";
}

void red3ext::version_proxy::load_exports(HMODULE module) const
{
    red3ext::get_file_version_info_a = get_proc_address<get_file_version_info_a_type>(module, "GetFileVersionInfoA");
    red3ext::get_file_version_info_ex_a =
        get_proc_address<get_file_version_info_ex_a_type>(module, "GetFileVersionInfoExA");
    red3ext::get_file_version_info_ex_w =
        get_proc_address<get_file_version_info_ex_w_type>(module, "GetFileVersionInfoExW");
    red3ext::get_file_version_info_size_a =
        get_proc_address<get_file_version_info_size_a_type>(module, "GetFileVersionInfoSizeA");
    red3ext::get_file_version_info_size_ex_a =
        get_proc_address<get_file_version_info_size_ex_a_type>(module, "GetFileVersionInfoSizeExA");
    red3ext::get_file_version_info_size_ex_w =
        get_proc_address<get_file_version_info_size_ex_w_type>(module, "GetFileVersionInfoSizeExW");
    red3ext::get_file_version_info_size_w =
        get_proc_address<get_file_version_info_size_w_type>(module, "GetFileVersionInfoSizeW");
    red3ext::get_file_version_info_w = get_proc_address<get_file_version_info_w_type>(module, "GetFileVersionInfoW");
    red3ext::ver_find_file_a = get_proc_address<ver_find_file_a_type>(module, "VerFindFileA");
    red3ext::ver_find_file_w = get_proc_address<ver_find_file_w_type>(module, "VerFindFileW");
    red3ext::ver_install_file_a = get_proc_address<ver_install_file_a_type>(module, "VerInstallFileA");
    red3ext::ver_install_file_w = get_proc_address<ver_install_file_w_type>(module, "VerInstallFileW");
    red3ext::ver_language_name_a = get_proc_address<ver_language_name_a_type>(module, "VerLanguageNameA");
    red3ext::ver_language_name_w = get_proc_address<ver_language_name_w_type>(module, "VerLanguageNameW");
    red3ext::ver_query_value_a = get_proc_address<ver_query_value_a_type>(module, "VerQueryValueA");
    red3ext::ver_query_value_w = get_proc_address<ver_query_value_w_type>(module, "VerQueryValueW");

    red3ext::get_file_version_info_by_handle =
        get_proc_address<get_file_version_info_by_handle_type>(module, "GetFileVersionInfoByHandle");
}
