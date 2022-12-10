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

target_precompile_headers(RED3ext.Dll PRIVATE stdafx.hpp)

get_target_property(RED3EXT_RESOURCE_PRODUCT_NAME RED3ext.Dll OUTPUT_NAME)

set(RED3EXT_RESOURCE_FILE_DESCRIPTION "A script extender for REDengine 3.")
set(RED3EXT_RESOURCE_INTERNAL_NAME "${RED3EXT_RESOURCE_PRODUCT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")
set(RED3EXT_RESOURCE_ORIGINAL_NAME "${RED3EXT_RESOURCE_PRODUCT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}")

configure_file(
  "${RED3EXT_CMAKE_TEMPLATES_DIR}/resource.rc.in"
  "${CMAKE_CURRENT_SOURCE_DIR}/resource.rc"
  @ONLY
)
