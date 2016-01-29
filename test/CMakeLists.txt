
message("- Inclusion du répertoire test (" ${SRC} ")")
find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories(${AllInc})
FILE(GLOB HEADERS
    ${INC}/jitparser/*.h
)

add_definitions (-DBOOST_TEST_DYN_LINK)

add_executable (unit_tests test_node.cpp ${SRC}/node.cpp)
target_link_libraries(unit_tests boost_filesystem boost_system boost_unit_test_framework)
                       
