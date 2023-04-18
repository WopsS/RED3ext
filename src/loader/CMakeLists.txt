add_library(RED3ext.Loader SHARED)

set_target_properties(
  RED3ext.Loader
    PROPERTIES
      OUTPUT_NAME winmm
)

configure_resource_rc(
  RED3ext.Loader
  "The loader for ${PROJECT_NAME}."
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

source_group(CMake REGULAR_EXPRESSION cmake_pch.*)

source_group(
  TREE
    "${CMAKE_CURRENT_SOURCE_DIR}"
  FILES
    ${RED3EXT_LOADER_HEADER_FILES}
    ${RED3EXT_LOADER_SRC_FILES}
    ${RED3EXT_LOADER_DEF_FILES}
)

source_group(
  TREE
    "${CMAKE_CURRENT_BINARY_DIR}"
  FILES
    ${RED3EXT_RC_FILE}
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
      ${RED3EXT_RC_FILE}
)

target_link_libraries(
  RED3ext.Loader
    PRIVATE
      RED3ext.Core
)

target_precompile_headers(RED3ext.Loader PRIVATE stdafx.hpp)
