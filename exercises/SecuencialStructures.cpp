//
// Created by ttoloza on 09/08/2023.
//

#include "SequencialStructures.h"
#include <iostream>
#include <cmath>


using namespace std;


int SequencialStructures::readInputNumber() {
    int number;
    cout << "Please enter an integer value: ";
    cin >> number;
    cout << "Numero ingresado = " << number;
    return 0;
}

// 2) Leer dos números por teclado e imprimir:
//- La suma de ambos
//- La resta (el primero menos el segundo)
//- La multiplicación
//- La división
int SequencialStructures::allFourArithmeticOperationsFromInput() {
    int numberA;
    int numberB;

    cout << "Please enter an integer value: ";
    cin >> numberA;
    cout << "Please enter another integer value: ";
    cin >> numberB;

    cout << "\nSum = " << numberA + numberB;
    cout << "\nSub = " << numberA - numberB;
    cout << "\nMul = " << numberA * numberB;
    cout << "\nDiv = " << numberA / numberB;

    return 0;
}

// 3) Escribir un programa que lea el nombre de una persona y luego lo salude.
int SequencialStructures::sayHello() {
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Hi, " << name << "!";
    return 0;
}

// 4) Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su
// superficie y su volumen.
int SequencialStructures::getSurfaceAndVolumeFromSphere() {
    double radius;
    cout << "Please enter radius: ";
    cin >> radius;

    cout << "\nSurface = " << 4 * M_PI * pow(radius, 2);
    // 4/3 pi r ^ 3
    cout << "\nVolume = " << (4 / 3) * M_PI * pow(radius, 3);

    return 0;
}

// 5) Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie.
int SequencialStructures::getPerimeterAndSurfaceFromRectangle() {
    double length;
    double height;
    cout << "Please enter length: ";
    cin >> length;
    cout << "Please enter heigth: ";
    cin >> height;

    // P=2(l+w)
    cout << "\nPerimeter = " << 2 * (length + height);
    // A=wl
    cout << "\nSurface = " << length * height;

    return 0;
}


