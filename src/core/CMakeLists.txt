add_library(RED3ext.Core STATIC)

set(
  RED3EXT_CORE_HEADER_FILES
    stdafx.hpp
    common.hpp
    exception.hpp

    message_box.hpp
    detail/basic_message_box.hpp

    non_copyable.hpp
    non_moveable.hpp
    movable_but_not_copyable.hpp

    paths.hpp
)

set(
  RED3EXT_CORE_SRC_FILES
    paths.cpp
)

source_group(cmake REGULAR_EXPRESSION cmake_pch.*)
source_group(
  TREE
    "${CMAKE_CURRENT_SOURCE_DIR}"
  FILES
    ${RED3EXT_CORE_HEADER_FILES}
    ${RED3EXT_CORE_SRC_FILES}
)

target_include_directories(
  RED3ext.Core
    PRIVATE
      "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_sources(
  RED3ext.Core
    PRIVATE
      ${RED3EXT_CORE_HEADER_FILES}
      ${RED3EXT_CORE_SRC_FILES}
)

target_link_libraries(
  RED3ext.Core
    PUBLIC
      fmt::fmt
      WIL::WIL
)

target_precompile_headers(RED3ext.Core PUBLIC stdafx.hpp)
