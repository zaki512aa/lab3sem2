cmake_minimum_required(VERSION 4.0)
project(_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(_3
        Human.cpp
        Human.h
        main.cpp
        Student.cpp
        Student.h
        Teacher.cpp
        Teacher.h)
