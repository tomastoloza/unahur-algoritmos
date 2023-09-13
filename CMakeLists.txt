cmake_minimum_required(VERSION 3.26)
project(unahur_algoritmos)

set(CMAKE_CXX_STANDARD 17)

add_executable(unahur_algoritmos main.cpp
        exercises/SequencialStructures.h
        exercises/SecuencialStructures.cpp
        exercises/ConditionalStructures.h
        exercises/ConditionalStructures.cpp
        exercises/Loops.h
        exercises/Loops.cpp
        exercises/Functions.h
        exercises/Functions.cpp
        exercises/functions/QuadraticFunction.h
        exercises/functions/QuadraticFunction.cpp
        exercises/commonMultiple/CommonMultiple.h
        exercises/commonMultiple/CommonMultiple.cpp
        exercises/VectorsAndMatrices.h
        exercises/VectorsAndMatrix.cpp
        exercises/pointerDrawings/ej1.h)
