cmake_minimum_required(VERSION 3.30)
project(marquee C)

set(CMAKE_C_STANDARD 99)

add_executable(marquee main.c)

target_link_libraries(marquee ncurses)