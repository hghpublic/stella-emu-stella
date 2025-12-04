cmake_minimum_required(VERSION 3.26)

project(httplib
    VERSION 0.11.3
    DESCRIPTION "A C++11 single-file header-only cross platform HTTP/HTTPS library."
    HOMEPAGE_URL https://github.com/yhirose/cpp-httplib
    LANGUAGES CXX
)

set(target httplib)
add_library(${target} INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/http_lib.hxx
)
