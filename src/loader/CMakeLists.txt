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
)

set(
  RED3EXT_LOADER_SRC_FILES
    main.cpp
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
