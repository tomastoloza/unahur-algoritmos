//
// Created by ttoloza on 19/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_LISTAINT_H
#define UNAHUR_ALGORITMOS_LISTAINT_H

#include <vector>
#include "NodeInt.h"


class ListaInt {
    public:
        NodeInt *first;
        std::vector<int> separateContiguousDivisiblePairs();
};


#endif //UNAHUR_ALGORITMOS_LISTAINT_H
