cmake_minimum_required(VERSION 3.0)

project (jitparser)



set(SRC ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INC ${CMAKE_CURRENT_SOURCE_DIR}/includes)
set(AllInc "/usr/include" ${INC})
set(BUILD_DIR ${CMAKE_CURRENT_SOURCE_DIR}/build)

#------ using clang compiler ------
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
#-----------------------------------


#construction de la lib
add_subdirectory(src)


#test unitaires
add_subdirectory(test)
enable_testing ()
add_test (NAME TestsUnitaires COMMAND unit_tests)



#shortcut cmd
add_custom_target(commit COMMAND git commit -a)
add_custom_target(push COMMAND git push)





#format the code before compile (with clang-format)
#foreach(file ${HEADERS} ${SOURCES} )
#    add_custom_command(TARGET jitparser POST_BUILD 
#        COMMAND clang-format ${file} > /tmp/file_jit_`echo ${file} | sed -e 's/\\//_/g'`
#        COMMAND cat /tmp/file_jit_`echo ${file} | sed -e 's/\\//_/g'` > ${file})
#endforeach(file)


