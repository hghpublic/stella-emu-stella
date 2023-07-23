cmake_minimum_required(VERSION 3.26)

project(sqlite3
    VERSION 3.40.1
    DESCRIPTION "SQLite is a C-language library that implements a small, fast, \
        self-contained, high-reliability, full-featured, SQL database engine."
    HOMEPAGE_URL https://www.sqlite.org/
    LANGUAGES C
)

set(target sqlite3)
add_library(${target})
# set_property(TARGET ${target} PROPERTY CXX_STANDARD 20)
# target_compile_options(${target} PUBLIC -fsanitize=address -fno-omit-frame-pointer)
# set_target_properties(${target} PROPERTIES LINK_FLAGS -fsanitize=address)
target_sources(${target} PRIVATE
    sqlite3.c
)
target_sources(${target} INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/sqlite3.h
)
