cmake_minimum_required(VERSION 3.26)

project(png
    VERSION 1.6.39
    DESCRIPTION "libpng is the official PNG reference library."
    HOMEPAGE_URL http://www.libpng.org/pub/png/libpng.html
    LANGUAGES C
)

find_package(ZLIB REQUIRED)

set(target png)
add_library(${target})
# set_property(TARGET ${target} PROPERTY CXX_STANDARD 20)
# target_compile_options(${target} PUBLIC -fsanitize=address -fno-omit-frame-pointer)
# set_target_properties(${target} PROPERTIES LINK_FLAGS -fsanitize=address)
target_link_libraries(${target} PRIVATE ZLIB::ZLIB)
target_sources(${target} PRIVATE
    png.c
    pngerror.c
    pngget.c
    pngmem.c
    pngpread.c
    pngread.c
    pngrio.c
    pngrtran.c
    pngrutil.c
    pngset.c
    pngtrans.c
    pngwio.c
    pngwrite.c
    pngwtran.c
    pngwutil.c
)
target_sources(${target} INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/png.h
)
