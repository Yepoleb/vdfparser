cmake_minimum_required (VERSION 2.8)
PROJECT (vdfparser)

include_directories (include)
add_library (${PROJECT_NAME} src/vdfparser.cpp)

if (BUILD_TEST)
    add_executable (vdftest test/test.cpp)
    target_link_libraries (vdftest ${PROJECT_NAME})
endif ()

