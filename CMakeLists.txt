cmake_minimum_required(VERSION 3.30)

project(stella
    VERSION 7.0
    DESCRIPTION "Stella is a multi-platform Atari 2600 VCS emulator which \
        allows you to play all of your favourite Atari 2600 games on your PC."
    HOMEPAGE_URL https://github.com/stella-emu/stella
    LANGUAGES CXX
)

set(target ${PROJECT_NAME})
add_executable(${target})
target_sources(${target}
PRIVATE
    src/common/main.cxx
)
set_property(TARGET ${target} PROPERTY CXX_STANDARD 20)
target_compile_options(${target}
PRIVATE
    -fsanitize=address
    -fno-omit-frame-pointer
# https://gcc.gnu.org/onlinedocs/cpp/Implementation-defined-behavior.html
# https://en.cppreference.com/w/c/language/character_constant
# https://en.wikipedia.org/wiki/FourCC
# https://en.cppreference.com/w/cpp/links
# N4950:§5.13.3(3) Character literals [lex.ccon]
# ... a multicharacter literal has an implementation-defined value.
    -Wno-multichar
)
target_link_options(${target}
PRIVATE
    -fsanitize=address
)
target_compile_definitions(${target}
PRIVATE
    # _GLIBCXX_USE_CXX11_ABI
    BSPF_UNIX
    # CHEATCODE_SUPPORT
    # DEBUGGER_SUPPORT
    GUI_SUPPORT
    # HTTP_LIB_SUPPORT
    # IMAGE_SUPPORT
    # JOYSTICK_SUPPORT
    SDL_SUPPORT
    # SOUND_SUPPORT
    UNIX
    # WINDOWED_SUPPORT
    # ZIP_SUPPORT
)
target_include_directories(${target}
PRIVATE
    src/common
    src/common/repository/sqlite
    src/common/tv_filters
    src/emucore
    src/emucore/elf
    src/emucore/tia
    src/emucore/tia/frame-manager
    src/gui
    src/os/unix
)
find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(${target}
PRIVATE
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)
target_link_libraries(${target} PRIVATE json)

add_subdirectory(src)

file(COPY test DESTINATION ${CMAKE_BINARY_DIR})
file(COPY src/emucore/stella.pro DESTINATION ${CMAKE_BINARY_DIR})
