cmake_minimum_required(VERSION 3.0)

project (jitparser)



set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INC ${CMAKE_CURRENT_SOURCE_DIR}/includes)


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

