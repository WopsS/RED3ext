add_library(Detours STATIC)
set_target_properties(Detours PROPERTIES FOLDER "Dependencies")

set(DETOURS_SRC_DIR "${PROJECT_SOURCE_DIR}/deps/detours/src")

set(
  RED3EXT_DLL_HEADER
    "${DETOURS_SRC_DIR}/detours.h"
    "${DETOURS_SRC_DIR}/detver.h"
)

set(
  RED3EXT_DLL_FILES
    "${DETOURS_SRC_DIR}/creatwth.cpp"
    "${DETOURS_SRC_DIR}/detours.cpp"
    "${DETOURS_SRC_DIR}/disasm.cpp"
    "${DETOURS_SRC_DIR}/disolarm.cpp"
    "${DETOURS_SRC_DIR}/disolarm64.cpp"
    "${DETOURS_SRC_DIR}/disolia64.cpp"
    "${DETOURS_SRC_DIR}/disolx64.cpp"
    "${DETOURS_SRC_DIR}/disolx86.cpp"
    "${DETOURS_SRC_DIR}/image.cpp"
    "${DETOURS_SRC_DIR}/modules.cpp"
)

target_include_directories(Detours PUBLIC ${DETOURS_SRC_DIR})
target_sources(Detours PRIVATE ${RED3EXT_DLL_HEADER} ${RED3EXT_DLL_FILES})
