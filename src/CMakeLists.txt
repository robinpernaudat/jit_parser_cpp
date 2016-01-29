
message("- Inclusion du répertoire src (" ${SRC} ")")

include_directories(${AllInc})
FILE(GLOB SOURCES
    ${SRC}/*.cpp
)
FILE(GLOB HEADERS
    ${INC}/jitparser/*.h
)

# the lib definition
set(LIBRARY_OUTPUT_PATH  ${BUILD_DIR})
add_library(jitparser ${SOURCES} ${HEADERS})
