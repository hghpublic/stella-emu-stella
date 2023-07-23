cmake_minimum_required(VERSION 3.26)

project(z
    VERSION 1.2.11
    DESCRIPTION "A Massively Spiffy Yet Delicately Unobtrusive Compression Library"
    HOMEPAGE_URL https://www.zlib.net/
    LANGUAGES C
)

set(target z)
add_library(${target})
# set_property(TARGET ${target} PROPERTY CXX_STANDARD 20)
# target_compile_options(${target} PUBLIC -fsanitize=address -fno-omit-frame-pointer)
# set_target_properties(${target} PROPERTIES LINK_FLAGS -fsanitize=address)
target_sources(${target} PRIVATE
    adler32.c
    compress.c
    crc32.c
    deflate.c
    gzclose.c
    gzlib.c
    gzread.c
    gzwrite.c
    infback.c
    inffast.c
    inflate.c
    inftrees.c
    trees.c
    uncompr.c
    zutil.c
)
target_sources(${target} INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/zlib.h
)
