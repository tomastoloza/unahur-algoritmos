//
// Created by ttoloza on 06/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_EJ1_H
#define UNAHUR_ALGORITMOS_EJ1_H

#include <iostream>

using namespace std;


class ej1 {
//    Ejercicio 1
/* Nota: 'A' es 65 */
    int *f1(int cant) {
        int *aux = new int[cant];
        return aux;
    }

    void f2(int **p, int a) {
        *p = new int;
        **p = a--;
        cout << **p << (char) a << endl;
    }

    void f3(int *&r, int *q) {
        r = q + 1;
    }

    int main() {
        int udp = 7;
        int cant = (udp % 3) + 2; // udp es el ultimo digito de tu DNI
        int *x, *y, *z;
        char a = 'A';
        x = f1(cant);
        for (int i = 0; i < cant; i++)
            x[i] = a + i;
        f2(&y, a + cant);
        cout << *y << *x << endl;
        f3(z, x);
        cout << *z << endl;
        *z = *x + 2;
        cout << *z << *(x + 1) << *y << endl;
        z = y;
        a = (char) (*y);
        f3(y, x);
        cout << *y << a << *z << x[1] << endl;
        for (int i = 0; i < cant; i++)
            cout << *(x + i) << endl;
        // Instrucciones para liberar la memoria
        return 0;
    }
};


#endif //UNAHUR_ALGORITMOS_EJ1_H
