cmake_minimum_required(VERSION 3.26)

project(json
    VERSION 3.11.2
    DESCRIPTION "JSON for Modern C++"
    HOMEPAGE_URL https://github.com/nlohmann/json
    LANGUAGES CXX
)

set(target ${PROJECT_NAME})
add_library(${target} INTERFACE)
target_include_directories(${target} INTERFACE ${CMAKE_CURRENT_LIST_DIR})
