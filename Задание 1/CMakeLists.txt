cmake_minimum_required(VERSION 4.0)
project(_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(_1
        Circle.cpp
        Circle.h
        Figures.cpp
        Figures.h
        main.cpp
        Rectangle.cpp
        Rectangle.h
        Square.cpp
        Square.h
        Triangle.cpp
        Triangle.h)
