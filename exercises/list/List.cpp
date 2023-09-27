#include "List.h"

List::List() {
    first = 0;
    size = 0;
}

bool List::isEmpty() {
    return (size == 0);
}

void List::put(Dato d, int pos) {
    Nodo *nuevo = new Nodo(d);
    if (pos == 1) {
        nuevo->cambiar_siguiente(first);
        first = nuevo;
    } else {
        Nodo *anterior = getNode(pos - 1);
        Nodo *siguiente = anterior->obtener_siguiente();
        nuevo->cambiar_siguiente(siguiente);
        anterior->cambiar_siguiente(nuevo);
    }
    size++;
}

Nodo *List::getNode(int pos) {
    Nodo *aux = first;
    for (int i = 1; i < pos; i++)
        aux = aux->obtener_siguiente();
    return aux;
}

Dato List::get(int pos) {
    Nodo *aux = getNode(pos);
    return aux->obtener_dato();
}

void List::remove(int pos) {
    Nodo *borrar;
    if (pos == 1) {
        borrar = first;
        first = borrar->obtener_siguiente();
    } else {
        Nodo *anterior = getNode(pos - 1);
        borrar = anterior->obtener_siguiente();
        Nodo *siguiente = borrar->obtener_siguiente();
        anterior->cambiar_siguiente(siguiente);
    }
    delete borrar;
    size--;
}

List::~List() {
    clearList();
}

int List::getSize() {
    return size;
}

void List::show() {
    cout << "[";

    if (!isEmpty()) {
        for (int i = 1; i < size; i++)
            cout << this->get(i) << ",";
        cout << this->get(size);
    }

    cout << "]" << endl;
}

void List::putProducts() {
    List temp;

    for (int i = 1; i <= size; i++) {
        Dato currentElement = get(i);
        temp.put(currentElement, temp.getSize() + 1);
        if (i < size) {
            Dato nextElement = get(i + 1);
            Dato product = currentElement * nextElement;
            temp.put(product, temp.getSize() + 1);
        }
    }

    replaceWithList(temp);
}

void List::clearList() {
    while (!isEmpty())
        remove(1);
}


void List::separateContiguousDivisibles() {
    List temp;

    for (int i = 1; i <= size; i++) {
        Dato currentElement = get(i);

        temp.put(currentElement, temp.getSize() + 1);

        if (i < size) {
            Dato nextElement = get(i + 1);
            if (currentElement % nextElement == 0) {
                Dato result = currentElement / nextElement;
                temp.put(result, temp.getSize() + 1);
            }
        }
    }
    replaceWithList(temp);
}

List *List::removeAndGetOdds() {
    List *oddList = new List;
    List temp;

    for (int i = 1; i <= size; i++) {
        Dato currentElement = get(i);
        if (i % 2 != 0) {
            oddList->put(currentElement, oddList->getSize() + 1);
        } else {
            temp.put(currentElement, temp.getSize() + 1);
        }
    }

    replaceWithList(temp);

    return oddList;
}

void List::replaceWithList(List list) {
    clearList();

    for (int i = 1; i <= list.getSize(); i++) {
        Dato element = list.get(i);
        put(element, getSize() + 1);
    }
}


