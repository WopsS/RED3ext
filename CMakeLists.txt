cmake_minimum_required(VERSION 3.25)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

include(ConfigureDefaultOutputDirectories)
include(ConfigureResourceRc)
include(ConfigureVersionFromGit)

configure_version_from_git()

project(
  RED3ext
  VERSION "${GIT_VERSION_MAJOR}.${GIT_VERSION_MINOR}.${GIT_VERSION_PATCH}"
  LANGUAGES CXX
)

# -----------------------------------------------------------------------------
# General configuration and variables
# -----------------------------------------------------------------------------
configure_default_output_directories()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "ProgramDatabase")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(RED3EXT_CMAKE_DIR "${PROJECT_SOURCE_DIR}/cmake")
set(RED3EXT_CMAKE_TEMPLATES_DIR "${RED3EXT_CMAKE_DIR}/templates")

# -----------------------------------------------------------------------------
# Options
# -----------------------------------------------------------------------------
option(RED3EXT_INSTALL "Generate the install target." ON)
option(RED3EXT_CI_RELEASE "When ON version metadata will not be appended to GIT_VERSION." OFF)

option(RED3EXT_EXTRA_WARNINGS "Enable extra warnings." ON)
option(RED3EXT_TREAT_WARNINGS_AS_ERRORS "Treat compiler warnings as errors." OFF)

# -----------------------------------------------------------------------------
# Compiler options for all projects
# -----------------------------------------------------------------------------
add_compile_definitions(
  # Support Windows 7 and above.
  WINVER=0x0601
  _WIN32_WINNT=0x0601

  # Exclude unnecessary APIs.
  WIN32_LEAN_AND_MEAN

  # Use Unicode charset.
  UNICODE
  _UNICODE
)

add_compile_options(
  # Enable correct reporting of C++ version, see https://docs.microsoft.com/en-us/cpp/build/reference/zc-cplusplus.
  $<$<BOOL:MSVC>:/Zc:__cplusplus>
)

add_link_options(
  # Generate debugging information (PDB) file.
  $<$<BOOL:MSVC>:/DEBUG:FULL>
)

# -----------------------------------------------------------------------------
# Options / configuration related only to this project
# -----------------------------------------------------------------------------
if(RED3EXT_EXTRA_WARNINGS)
  if(MSVC)
    add_compile_options(/W4)
  else()
    message(
      FATAL_ERROR
      "The compiler options to enable extra warnings is not known for \
      '${CMAKE_CXX_COMPILER_ID}'"
    )
  endif()
endif()

if(RED3EXT_TREAT_WARNINGS_AS_ERRORS)
  if(MSVC)
    add_compile_options(/WX)
  else()
    message(
      FATAL_ERROR
      "The compiler option to treat warnings as errors is not known for \
      '${CMAKE_CXX_COMPILER_ID}'"
    )
  endif()
endif()

# -----------------------------------------------------------------------------
# Main projects
# -----------------------------------------------------------------------------
add_subdirectory(src)

# -----------------------------------------------------------------------------
# Install
# -----------------------------------------------------------------------------
if(NOT CMAKE_SKIP_INSTALL_RULES)
  if(RED3EXT_INSTALL)
    set(RED3EXT_INSTALL_X64_DIR bin/x64)
    set(RED3EXT_INSTALL_BIN_DIR red3ext)

    install(
      TARGETS RED3ext.Loader
      RUNTIME DESTINATION "${RED3EXT_INSTALL_X64_DIR}"
    )

    install(
      FILES $<TARGET_PDB_FILE:RED3ext.Loader>
      DESTINATION "${RED3EXT_INSTALL_X64_DIR}"
    )

    install(
      TARGETS RED3ext.Dll
      RUNTIME DESTINATION "${RED3EXT_INSTALL_BIN_DIR}"
    )

    install(
      FILES $<TARGET_PDB_FILE:RED3ext.Dll>
      DESTINATION "${RED3EXT_INSTALL_BIN_DIR}"
    )

    install(
      FILES "${PROJECT_SOURCE_DIR}/LICENSE.md"
      DESTINATION "${RED3EXT_INSTALL_BIN_DIR}"
      RENAME LICENSE.txt
    )

    install(
      FILES "${PROJECT_SOURCE_DIR}/THIRD_PARTY_LICENSES.md"
      DESTINATION "${RED3EXT_INSTALL_BIN_DIR}"
      RENAME THIRD_PARTY_LICENSES.txt
    )
  endif()
endif()
