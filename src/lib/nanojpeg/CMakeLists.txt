cmake_minimum_required(VERSION 3.26)

project(nanojpeg
    VERSION 1.3.5
    DESCRIPTION "NanoJPEG: a compact JPEG decoder"
    HOMEPAGE_URL https://keyj.emphy.de/nanojpeg/
    LANGUAGES C
)

# https://keyj.emphy.de/nanojpeg/
# https://svn.emphy.de/nanojpeg/

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
