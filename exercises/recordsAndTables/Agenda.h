


#ifndef UNAHUR_ALGORITMOS_AGENDA_H
#define UNAHUR_ALGORITMOS_AGENDA_H

#include <iostream>
#include <string>
#include "Person.h"


using namespace std;

class Agenda {
private:
    vector<Person> contacts;

public:
    void addContact(string name, string phone);

    int findPhoneByName(string name);

    string findNameByPhone(int phone);

    void modifyPhoneByName(string name, int newPhone);

    void addNewContact(Person person);

    void removeContactByName(string name);


};

#endif 
