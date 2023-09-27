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
        exercises/pointerDrawings/ej1.h
        exercises/recordsAndTables/Person.h
        exercises/recordsAndTables/Person.cpp
        exercises/recordsAndTables/Agenda.h
        exercises/recordsAndTables/Agenda.cpp
        exercises/recordsAndTables/Product.h
        exercises/recordsAndTables/Product.h
        exercises/recordsAndTables/Product.cpp
        exercises/recordsAndTables/Gondola.h
        exercises/recordsAndTables/Gondola.cpp
        exercises/algorithmComplexity/NodeInt.h
        exercises/algorithmComplexity/ListaInt.h
        exercises/algorithmComplexity/ListaInt.cpp
        exercises/algorithmComplexity/NodoInt.cpp
        exercises/list/List.cpp)
