cmake_minimum_required(VERSION 3.23)
project(Exercism C)

set(CMAKE_C_STANDARD 11)

include_directories(One)

add_executable(Exercism
        main.c armstrong_numbers.c armstrong_numbers.h hamming.c hamming.h isogram.c isogram.h difference_of_squares.c difference_of_squares.h grains.c grains.h square_root.c square_root.h grade_school.c grade_school.h)
