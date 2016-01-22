cmake_minimum_required(VERSION 3.0)

project (jitparser)



set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INC ${CMAKE_CURRENT_SOURCE_DIR}/includes)



    SET (CMAKE_C_COMPILER             "/usr/local/bin/clang")
    SET (CMAKE_C_FLAGS                "-Wall ")
    SET (CMAKE_C_FLAGS_DEBUG          "-g")
    SET (CMAKE_C_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
    SET (CMAKE_C_FLAGS_RELEASE        "-O4 -DNDEBUG")
    SET (CMAKE_C_FLAGS_RELWITHDEBINFO "-O2 -g")

    SET (CMAKE_CXX_COMPILER             "/usr/local/bin/clang++")
    SET (CMAKE_CXX_FLAGS                "-Wall -std=c++11")
    SET (CMAKE_CXX_FLAGS_DEBUG          "-g")
    SET (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
    SET (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
    SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")


include_directories(
    /usr/include
    ${INC}
)

FILE(GLOB SOURCES
    ${SRC}/*.cpp
)
FILE(GLOB HEADERS
    ${INC}/jitparser/*.h
)

add_library(jitparser ${SOURCES} ${HEADERS})

