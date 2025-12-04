cmake_minimum_required(VERSION 3.26)

project(nanojpeg
    VERSION 1.6.39
    DESCRIPTION "libpng is the official PNG reference library."
    HOMEPAGE_URL http://www.libpng.org/pub/png/libpng.html
    LANGUAGES C
)

set(target nanojpeg)
add_library(${target})
# set_property(TARGET ${target} PROPERTY CXX_STANDARD 20)
# target_compile_options(${target} PUBLIC -fsanitize=address -fno-omit-frame-pointer)
# set_target_properties(${target} PROPERTIES LINK_FLAGS -fsanitize=address)
target_sources(${target} PRIVATE
    nanojpeg.c
)
target_sources(${target} INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/nanojpeg_lib.hxx
)
