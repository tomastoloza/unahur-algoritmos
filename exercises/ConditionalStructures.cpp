//
// Created by ttoloza on 09/08/2023.
//

#include "ConditionalStructures.h"
#include <iostream>
#include <cmath>

using namespace std;

void ConditionalStructures::isGreaterLowerOrEqualThanZero() {
    double number;

    cout << "Please enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "Greater";
        return;
    } else if (number < 0) {
        cout << "Lower";
        return;
    } else {
        cout << "Equal";
        return;
    }

}

void ConditionalStructures::getMaxNumber() {
    double numberA;
    double numberB;

    cout << "\nPlease enter a number: ";
    cin >> numberA;

    cout << "\nPlease enter another number: ";
    cin >> numberB;

    cout << "\nThe max number is = " << max(numberA, numberB);
}


void ConditionalStructures::isEven() {
    int number;
    cout << "\nPlease enter a number: ";
    cin >> number;

    string printLine;
    printLine = (number % 2 == 0) ? "even" : "not even";
    cout << "Is " << printLine;
}

void ConditionalStructures::isDivisible() {
    int numberA;
    int numberB;

    cout << "\nPlease enter a number: ";
    cin >> numberA;

    cout << "\nPlease enter another number: ";
    cin >> numberB;

    string printLine;
    printLine = ConditionalStructures::divisible(numberA, numberB) ? " is divisible" : " is not divisible";

    cout << numberA << printLine << " by " << numberB;
}


bool ConditionalStructures::divisible(int n, int m) {
    return n % m == 0;
}

void ConditionalStructures::arithmeticMenu() {
    int choice;
    double numberA, numberB;

    cout << "\nPlease enter a number: ";
    cin >> numberA;

    cout << "\nPlease enter another number: ";
    cin >> numberB;

    cout << "Select an option:\n";
    cout << "1. + Sum\n";
    cout << "2. - Sub\n";
    cout << "3. * Mul\n";
    cout << "4. / Div\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << numberA + numberB;
            break;
        case 2:
            cout << numberA - numberB;
            break;
        case 3:
            cout << numberA * numberB;
            break;
        case 4:
            cout << numberA - numberB;
            break;

    }
}

void ConditionalStructures::interactiveMenu() {
    int choice;
    string option1 = "Option 1\n";
    string option2 = "Option 2\n";
    string option3 = "Option 3\n";
    string option4 = "Option 4\n";

    cout << "Select an option:\n";
    cout << "1. " << option1;
    cout << "2. " << option2;
    cout << "3. " << option3;
    cout << "4. " << option4;

    cout << "Enter your choice: ";
    cin >> choice;

    string message = "You choose = ";

    switch (choice) {
        case 1:
            cout << message << option1;
            break;
        case 2:
            cout << message << option2;
            break;
        case 3:
            cout << message << option3;
            break;
        case 4:
            cout << message << option4;
            break;
        default:
            cout << "Invalid choice. Please select a valid option.\n";
    }

}

// segundos a un período expresado en días, horas,
// minutos y segundos.
void ConditionalStructures::secondsToDaysHoursMinutesSeconds() {

    double seconds;
    cout << "\nPlease enter seconds: ";
    cin >> seconds;



    double hours;
    double minutes;
    double seconds_left;

    hours = seconds / 3600;
    minutes = (seconds - (hours * 3600)) / 60;
    seconds_left = seconds - (hours * 3600) - (minutes * 60);

    cout << "\nSeconds to days: " << seconds / 86400;
    cout << "\nSeconds to hours: " << seconds / 3600;
    cout << "\nSeconds to minutes and seconds: " << (seconds - (hours * 3600)) / 60 << ":" << seconds - (hours * 3600) - (minutes * 60);


}
