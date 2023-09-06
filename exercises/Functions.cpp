//
// Created by ttoloza on 25/08/2023.
//

#include "Functions.h"
#include "functions/QuadraticFunction.h"
#include "commonMultiple/CommonMultiple.h"
#include <iostream>
#include <cmath>


using namespace std;


//26) Hacer un programa principal en donde se pida al usuario ingresar los coeficientes
//de la cuadrática, e indicar si tiene o no raíces, y cuáles son en caso de tener,
//utilizando la función definida.
void Functions::printRoots() {
    double a, b, c;
    cout << "Enter the coefficients (a, b, c) of the quadratic equation:" << endl;
    cin >> a >> b >> c;

    QuadraticFunction qf = *new QuadraticFunction(a, b, c);

    if (qf.hasRoots()) {
        cout << "Roots are (0 means no root): " << qf.getFirstRoot() << " and " << qf.getSecondRoot() << std::endl;
    } else {
        cout << "No roots" << endl;
    }
}

// 27) Hacer una función que indique si un número es primo o no.
bool Functions::isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

void Functions::printIsPrime() {
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    isPrime(n) ? cout << n << " is prime" : cout << n << " is not prime";
}

void Functions::printGCD() {
    int a, b;
    cout << "Enter two numbers (a, b) to obtain the GCD:" << endl;
    cin >> a >> b;

    cout << "GCD is: " << CommonMultiple::getGreatestCommonDivisor(a, b) << endl;
}

void Functions::printLCM() {
    int a, b;
    cout << "Enter two numbers (a, b) to obtain the LCM:" << endl;
    cin >> a >> b;

    cout << "GCD is: " << CommonMultiple::getMinimumCommonMultiple(a, b) << endl;
}
