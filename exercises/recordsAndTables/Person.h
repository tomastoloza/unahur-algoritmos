//
// Created by ttoloza on 12/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_PERSON_H
#define UNAHUR_ALGORITMOS_PERSON_H

#include <iostream>
#include <string>

using namespace std;
struct Person {
    explicit Person(string name, int phone);

public:
    string name;
    int phone;
};


#endif //UNAHUR_ALGORITMOS_PERSON_H
