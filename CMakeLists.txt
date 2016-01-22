cmake_minimum_required(VERSION 3.0)

project (jitparser)



set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INC ${CMAKE_CURRENT_SOURCE_DIR}/includes)


#using clang compiler
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


# the lib definition
add_library(jitparser ${SOURCES} ${HEADERS})


#format the code before compile
foreach(file ${HEADERS} ${SOURCES} )
    add_custom_command(TARGET jitparser POST_BUILD 
        COMMAND clang-format ${file} > /tmp/file_jit_`echo ${file} | sed -e 's/\\//_/g'`
        COMMAND cat /tmp/file_jit_`echo ${file} | sed -e 's/\\//_/g'` > ${file})
endforeach(file)


