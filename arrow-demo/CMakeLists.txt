cmake_minimum_required(VERSION 3.30)
project(arrow_demo C)

set(CMAKE_C_STANDARD 99)

add_executable(arrow_demo main.c)

target_link_libraries(arrow_demo ncurses)
