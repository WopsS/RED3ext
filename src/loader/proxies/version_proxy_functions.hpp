#pragma once

#include <Windows.h>

namespace red3ext
{
using get_file_version_info_a_type = decltype(&GetFileVersionInfoA);
using get_file_version_info_ex_a_type = decltype(&GetFileVersionInfoExA);
using get_file_version_info_ex_w_type = decltype(&GetFileVersionInfoExW);
using get_file_version_info_size_a_type = decltype(&GetFileVersionInfoSizeA);
using get_file_version_info_size_ex_a_type = decltype(&GetFileVersionInfoSizeExA);
using get_file_version_info_size_ex_w_type = decltype(&GetFileVersionInfoSizeExW);
using get_file_version_info_size_w_type = decltype(&GetFileVersionInfoSizeW);
using get_file_version_info_w_type = decltype(&GetFileVersionInfoW);
using ver_find_file_a_type = decltype(&VerFindFileA);
using ver_find_file_w_type = decltype(&VerFindFileW);
using ver_install_file_a_type = decltype(&VerInstallFileA);
using ver_install_file_w_type = decltype(&VerInstallFileW);
using ver_language_name_a_type = decltype(&VerLanguageNameA);
using ver_language_name_w_type = decltype(&VerLanguageNameW);
using ver_query_value_a_type = decltype(&VerQueryValueA);
using ver_query_value_w_type = decltype(&VerQueryValueW);

using get_file_version_info_by_handle_type = void (*)();

extern get_file_version_info_a_type get_file_version_info_a;
extern get_file_version_info_ex_a_type get_file_version_info_ex_a;
extern get_file_version_info_ex_w_type get_file_version_info_ex_w;
extern get_file_version_info_size_a_type get_file_version_info_size_a;
extern get_file_version_info_size_ex_a_type get_file_version_info_size_ex_a;
extern get_file_version_info_size_ex_w_type get_file_version_info_size_ex_w;
extern get_file_version_info_size_w_type get_file_version_info_size_w;
extern get_file_version_info_w_type get_file_version_info_w;
extern ver_find_file_a_type ver_find_file_a;
extern ver_find_file_w_type ver_find_file_w;
extern ver_install_file_a_type ver_install_file_a;
extern ver_install_file_w_type ver_install_file_w;
extern ver_language_name_a_type ver_language_name_a;
extern ver_language_name_w_type ver_language_name_w;
extern ver_query_value_a_type ver_query_value_a;
extern ver_query_value_w_type ver_query_value_w;
extern get_file_version_info_by_handle_type get_file_version_info_by_handle;
} // namespace red3ext
