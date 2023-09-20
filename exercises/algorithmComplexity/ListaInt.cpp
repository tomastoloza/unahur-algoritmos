//
// Created by ttoloza on 19/09/2023.
//

#include "ListaInt.h"

std::vector<int> ListaInt::separateContiguousDivisiblePairs() {
    NodeInt *current = first;

    while (current != nullptr && current->next != nullptr) {
        int a = current->element;
        int b = current->next->element;

        if (a % b == 0) {
            int quotient = a / b;

            NodeInt* new_node = new NodeInt();
            new_node->element = quotient;
            new_node->next = current->next;
            current->next = new_node;

            current = current->next->next;
        } else {
            current = current->next;
        }
    }
}
