add_library(RED3ext.Dll SHARED)

set_target_properties(
  RED3ext.Dll
    PROPERTIES
      OUTPUT_NAME ${PROJECT_NAME}
)

set(
  RED3EXT_DLL_HEADER_FILES
    stdafx.hpp
    resource.hpp
)

set(
  RED3EXT_DLL_SRC_FILES
    main.cpp
)

set(
  RED3EXT_DLL_RC_FILES
    resource.rc
)

source_group(cmake REGULAR_EXPRESSION cmake_pch.*)
source_group(
  TREE
    "${CMAKE_CURRENT_SOURCE_DIR}"
  FILES
    ${RED3EXT_DLL_HEADER_FILES}
    ${RED3EXT_DLL_SRC_FILES}
    ${RED3EXT_DLL_RC_FILES}
)

target_include_directories(
  RED3ext.Dll
    PRIVATE
      "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_sources(
  RED3ext.Dll
    PRIVATE
      ${RED3EXT_DLL_HEADER_FILES}
      ${RED3EXT_DLL_SRC_FILES}
      ${RED3EXT_DLL_RC_FILES}
)

target_link_libraries(
  RED3ext.Dll
    PRIVATE
      RED3ext.Core
      RED4ext.Ported
)

target_precompile_headers(RED3ext.Dll PRIVATE stdafx.hpp)

configure_resource_rc(
  RED3ext.Dll
  "A script extender for REDengine 3."
)
