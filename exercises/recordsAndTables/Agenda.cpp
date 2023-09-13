//
// Created by ttoloza on 12/09/2023.
//

#include "Agenda.h"

void Agenda::addContact(string name, string phone) {
    if (this->contacts.size() < 50) {
        Person person(name, phone);
        contacts.push_back(person);
    } else {
        cout << "Agenda is full. Cannot add more contacts." << endl;
    }
}


int Agenda::findPhoneByName(string name) {
    for (const Person person: contacts) {
        if (person.name == name) {
            return person.phone;
        }
    }
    return -1;
}


string Agenda::findNameByPhone(int phone) {
    for (const Person &person: contacts) {
        if (person.phone == phone) {
            return person.name;
        }
    }
    return "Contact not found";
}


void Agenda::modifyPhoneByName(string name, int newPhone) {
    for (Person &person: contacts) {
        if (person.name == name) {
            person.phone = newPhone;
            return;
        }
    }
    cout << "Contact not found" << endl;
}


void Agenda::addNewContact(Person person) {
    if (contacts.size() < 50) {
        contacts.push_back(person);
    } else {
        cout << "Agenda is full. Cannot add more contacts." << endl;
    }
}


void Agenda::removeContactByName(string name) {
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            return;
        }
    }
    cout << "Contact not found" << endl;
}