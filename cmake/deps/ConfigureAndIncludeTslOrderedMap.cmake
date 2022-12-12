add_subdirectory(
  deps/tsl-ordered-map
  EXCLUDE_FROM_ALL # Exclude this library from "install" since it doesn't have
                   # an INSTALL flag.
)
target_compile_definitions(ordered_map INTERFACE NOMINMAX)
