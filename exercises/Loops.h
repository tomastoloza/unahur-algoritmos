//
// Created by ttoloza on 13/08/2023.
//

#ifndef UNAHUR_ALGORITMOS_LOOPS_H
#define UNAHUR_ALGORITMOS_LOOPS_H


class Loops {

public:
// 13) Imprimir por pantalla una lista de 20 números consecutivos, los cuales
// comienzan con un número ingresado por teclado.
    void nextTwentyNumbers();

// 14) Leer un número N y calcular su factorial.
    void getFactorial();

    int factorial(int n);

// 15) Leer una serie de números reales, terminando la serie con un cero. Imprimir los
// datos a medida que se los ingresa junto con la suma parcial de los mismos.
    void partialSum();

// 16) Dada una serie de números reales, determinar el valor máximo, el mínimo y las
// posiciones en que estos se encontraban en la serie. El programa deberá ir
// preguntando si hay más números para ingresar.
    void getMaxMinAndPositions();

// 17) Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor
// y las veces que aparece cada uno.
    void countMaxAndMin();

// 18) Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el
// resultado.
    void mulBySum();

//19) Dada una serie de números enteros terminada en cero, imprimir los tres
// mayores.
    void getMaxThree();

// 20) Dada una serie de nombres con sus salarios respectivos, determinar el salario
// máximo, el mínimo y la persona que percibe cada uno.
    void getMaxAndMinPay();

// 21) Escribir un algoritmo que lea una serie de números reales y verifique si están
// ordenados en forma ascendente, descendente o si no están ordenados,
// informando por pantalla.
    void isSortedOrReverseSorted();

    double fahrenheitToCelcius(int degrees);

// 22) La relación entre temperaturas Celsius y Fahrenheit está dada por: C = 5/9 * (F – 32)
// Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit, para
// valores entre OºF y 200ºF, a intervalos de 10º.
    void getTableFahrenheitToCelcius();

// 23) Leer N y luego N lotes de números reales que terminan con un valor 0, y calcular
// la media individual de cada lote, junto con la media total de todos los números
// ingresados.

    void getMedium();
};


#endif //UNAHUR_ALGORITMOS_LOOPS_H
