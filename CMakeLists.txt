cmake_minimum_required(VERSION 3.23)
project(Exercism C)

set(CMAKE_C_STANDARD 99)

add_executable(Exercism main.c One/One.c One/One.h One/One.h)
target_link_libraries(Exercism m)