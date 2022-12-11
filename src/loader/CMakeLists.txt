add_library(RED3ext.Loader SHARED)

set_target_properties(
  RED3ext.Loader
    PROPERTIES
      OUTPUT_NAME winmm
)

set(
  RED3EXT_LOADER_HEADER_FILES
    stdafx.hpp
    resource.hpp
    loader.hpp
    proxy_handler.hpp

    proxy.hpp
    proxies/d3d11_proxy.hpp
    proxies/d3d11_proxy_functions.hpp
    proxies/dxgi_proxy.hpp
    proxies/dxgi_proxy_functions.hpp
    proxies/version_proxy.hpp
    proxies/version_proxy_functions.hpp
    proxies/winmm_proxy.hpp
    proxies/winmm_proxy_functions.hpp
)

set(
  RED3EXT_LOADER_SRC_FILES
    main.cpp
    loader.cpp
    proxy_handler.cpp

    proxy.cpp
    proxies/d3d11_proxy.cpp
    proxies/d3d11_proxy_functions.cpp
    proxies/dxgi_proxy.cpp
    proxies/dxgi_proxy_functions.cpp
    proxies/version_proxy.cpp
    proxies/version_proxy_functions.cpp
    proxies/winmm_proxy.cpp
    proxies/winmm_proxy_functions.cpp
)

set(
  RED3EXT_LOADER_DEF_FILES
    main.def
)

set(
  RED3EXT_LOADER_RC_FILES
    resource.rc
)

source_group(cmake REGULAR_EXPRESSION cmake_pch.*)
source_group(
  TREE
    "${CMAKE_CURRENT_SOURCE_DIR}"
  FILES
    ${RED3EXT_LOADER_HEADER_FILES}
    ${RED3EXT_LOADER_SRC_FILES}
    ${RED3EXT_LOADER_DEF_FILES}
    ${RED3EXT_LOADER_RC_FILES}
)

target_include_directories(
  RED3ext.Loader
    PRIVATE
      "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_sources(
  RED3ext.Loader
    PRIVATE
      ${RED3EXT_LOADER_HEADER_FILES}
      ${RED3EXT_LOADER_SRC_FILES}
      ${RED3EXT_LOADER_DEF_FILES}
      ${RED3EXT_LOADER_RC_FILES}
)

target_link_libraries(
  RED3ext.Loader
    PRIVATE
      RED3ext.Core
)

target_precompile_headers(RED3ext.Loader PRIVATE stdafx.hpp)

get_target_property(RED3EXT_RESOURCE_PRODUCT_NAME RED3ext.Loader OUTPUT_NAME)

set(RED3EXT_RESOURCE_FILE_DESCRIPTION "The loader for ${PROJECT_NAME}.")
set(RED3EXT_RESOURCE_INTERNAL_NAME "${RED3EXT_RESOURCE_PRODUCT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")
set(RED3EXT_RESOURCE_ORIGINAL_NAME "${RED3EXT_RESOURCE_PRODUCT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")

configure_file(
  "${RED3EXT_CMAKE_TEMPLATES_DIR}/resource.rc.in"
  "${CMAKE_CURRENT_SOURCE_DIR}/resource.rc"
  @ONLY
)
