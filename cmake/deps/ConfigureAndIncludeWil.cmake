option(WIL_BUILD_PACKAGING "" OFF)
option(WIL_BUILD_TESTS "" OFF)

add_subdirectory(deps/wil)

mark_as_advanced(
  FAST_BUILD
  NUGET
  WIL_BUILD_PACKAGING
  WIL_BUILD_TESTS
)
