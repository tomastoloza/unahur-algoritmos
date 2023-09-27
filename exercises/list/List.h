#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#include "Node.h"

using namespace std;

class List {
private:
    Nodo *first;
    int size;

public:
    // constructor
    // pos: crea una cola isEmpty
    List();

    // pre: 0 < pos <= cantidad + 1
    // pos: inserta el dato d en la posicion pos, la 1 es la primera
    //        ademas incrementa cantidad en 1
    void put(int d, int pos);

    // pre: 0 < pos <= cantidad
    // pos: saca el elemento que esta en pos
    void remove(int pos);

    // pre: 0 < pos <= cantidad
    // pos: devuelve el elemento que esta en pos
    int get(int pos);

    bool isEmpty();

    // pos: libera la memoria
    virtual ~List();

    int getSize();

    void show();

    void putProducts();

    void separateContiguousDivisibles();

    List *removeAndGetOdds();


private:
    Nodo *getNode(int pos);

    void clearList();

    void replaceWithList(List list);
};

#endif // LIST_H_INCLUDED
