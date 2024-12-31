cmake_minimum_required(VERSION 3.30)
project(simple_input C)

set(CMAKE_C_STANDARD 99)

add_executable(simple_input main.c)

target_link_libraries(simple_input ncurses)