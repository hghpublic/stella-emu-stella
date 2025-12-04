cmake_minimum_required(VERSION 3.26)

project(tinyexif
    VERSION 1.0.1
    DESCRIPTION "Tiny ISO-compliant C++ EXIF and XMP parsing library for JPEG"
    HOMEPAGE_URL https://github.com/cdcseacave/TinyEXIF
    LANGUAGES CXX
)

set(target tinyexif)
add_library(${target})
# set_property(TARGET ${target} PROPERTY CXX_STANDARD 20)
# target_compile_options(${target} PUBLIC -fsanitize=address -fno-omit-frame-pointer)
# set_target_properties(${target} PROPERTIES LINK_FLAGS -fsanitize=address)
target_sources(${target} PRIVATE
    tinyexif.cxx
)
target_sources(${target} INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/tinyexif_lib.hxx
)
