cmake_minimum_required(VERSION 2.8)
set (PROJECT_NAME vdfparser)
PROJECT(${PROJECT_NAME})

add_library(${PROJECT_NAME} vdfparser.cpp)

if(BUILD_TEST)
    add_executable(vdftest test.cpp)
    target_link_libraries(vdftest vdfparser)
endif()

