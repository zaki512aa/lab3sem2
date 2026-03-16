cmake_minimum_required(VERSION 4.0)
project(_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(_2
        Animal.h
        Bird.cpp
        Bird.h
        Fish.cpp
        Fish.h
        FlyingBird.cpp
        FlyingBird.h
        main.cpp)
