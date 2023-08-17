//
// Created by ttoloza on 09/08/2023.
//

#ifndef UNAHUR_ALGORITMOS_CONDITIONALSTRUCTURES_H
#define UNAHUR_ALGORITMOS_CONDITIONALSTRUCTURES_H

// Estructuras selectivas
//6) Leer un número real y decir si es mayor, menor o igual a cero.
//7) Leer dos números reales e imprimir el mayor de ellos.
//8) Escribir un algoritmo que determine si un número es par.
//9) Escribir un algoritmo que determine si un número M es divisible por N.
//10) Leer dos números y luego una opción que puede ser “ + ”: suma, “ – “: resta, “ *
//”: multiplicación o “ / “: división. Según la opción elegida realizar el cálculo.
//11) Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo
//qué opción se eligió o si fue una opción incorrecta.
//12) Pasar un período expresado en segundos a un período expresado en días, horas,
//minutos y segundos.
class ConditionalStructures {
public:
    void isGreaterLowerOrEqualThanZero();

    void getMaxNumber();

    void isEven();

    void isDivisible();

    void arithmeticMenu();

    void interactiveMenu();
    void secondsToDaysHoursMinutesSeconds();

private:
    bool divisible(int n, int m);
};

#endif //UNAHUR_ALGORITMOS_CONDITIONALSTRUCTURES_H
