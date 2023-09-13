//
// Created by ttoloza on 06/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_EJ2_H
#define UNAHUR_ALGORITMOS_EJ2_H

#include <iostream>


using namespace std;

class ej2 {
    int *f1(int cant) {
        return new int[cant];
    }

    void f2(int *&p, int a) {
        p = new int;
        *p = a++;
        cout << *p << " " << (char) a << endl;
    }

    int main() {
        int udp = 7;
        int cant = (udp % 3) + 2;
        int *x, *y, *z;
        char a = 'A';
        x = f1(cant);
        for (int i = 0; i < cant; i++)
            x[i] = a + i;
        f2(y, a + cant);
        cout << *y << " " << *x << endl;
        z = x++;
        cout << *z << endl;
        *z = *y + 1;
        cout << *z << " " << *(x - 1) << " " << *y << endl;
        a = (char) (*y);
        cout << a << " " << *z << " " << *x - 1 << endl;
        for (int i = 0; i < cant; i++)
            cout << *(z + i) + i << " ";
        // Liberar memoria
        delete x, y, z;
        return 0;
    }
};


#endif //UNAHUR_ALGORITMOS_EJ2_H
