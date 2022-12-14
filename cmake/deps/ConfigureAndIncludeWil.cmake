option(WIL_BUILD_PACKAGING "" OFF)
option(WIL_BUILD_TESTS "" OFF)

add_subdirectory(
  deps/wil
  EXCLUDE_FROM_ALL # Exclude this library from "install" since it doesn't have
                   # an INSTALL flag.
)

mark_as_advanced(
  FAST_BUILD
  NUGET
  WIL_BUILD_PACKAGING
  WIL_BUILD_TESTS
)
