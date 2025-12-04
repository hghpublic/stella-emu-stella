cmake_minimum_required(VERSION 4.1)

project(stella
    VERSION 7.0.0
    DESCRIPTION "A multi-platform Atari 2600 Emulator"
    HOMEPAGE_URL https://github.com/stella-emu/stella
    LANGUAGES CXX
)


find_package(PNG REQUIRED)
find_package(SDL3 CONFIG REQUIRED)
find_package(unofficial-sqlite3 CONFIG REQUIRED)

set(target stella)
add_executable(${target})
target_sources(${target} PRIVATE dev/src/main.cpp)
target_compile_features(${target} PRIVATE cxx_std_26)
target_link_libraries(${target} PRIVATE PNG::PNG)
target_link_libraries(${target} PRIVATE SDL3::SDL3)
target_link_libraries(${target} PRIVATE unofficial::sqlite3::sqlite3)

add_subdirectory(src)
