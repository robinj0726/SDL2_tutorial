cmake_minimum_required(VERSION 3.10)
project(SDL2_tutorial)

find_package(PkgConfig REQUIRED)
pkg_check_modules(sdl2 REQUIRED IMPORTED_TARGET
    sdl2
)

add_executable(sdl2_demo main.cpp App.cpp)

target_link_libraries(sdl2_demo PRIVATE PkgConfig::sdl2)