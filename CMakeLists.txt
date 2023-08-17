cmake_minimum_required(VERSION 3.26)
project(unahur_algoritmos)

set(CMAKE_CXX_STANDARD 17)

add_executable(unahur_algoritmos main.cpp
        exercises/SecuencialStructures.h
        exercises/SecuencialStructures.cpp
        exercises/ConditionalStructures.h
        exercises/ConditionalStructures.cpp
        exercises/Loops.h
        exercises/Loops.cpp)
