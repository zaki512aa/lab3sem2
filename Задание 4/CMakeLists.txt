cmake_minimum_required(VERSION 4.0)
project(_4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(_4
        CubeSummator.cpp
        CubeSummator.h
        main.cpp
        SquareSummator.cpp
        SquareSummator.h
        Summator.cpp
        Summator.h)
