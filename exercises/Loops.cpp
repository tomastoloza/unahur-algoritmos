//
// Created by ttoloza on 13/08/2023.
//

#include "Loops.h"
#include <iostream>

using namespace std;

void Loops::nextTwentyNumbers() {
    int number;
    cout << "Please enter a number: " << endl;
    cin >> number;
    int until = number + 20;
    for (; number < until; ++number) {
        cout << number << endl;
    }
}

// 14) Leer un número N y calcular su factorial.
void Loops::getFactorial() {
    int number;
    cout << "Please enter a number: " << endl;
    cin >> number;
    int factorial = Loops::factorial(number);
    cout << "The factorial of " << number << " is " << factorial << endl;

}

int Loops::factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void Loops::partialSum() {
    int input = 0;
    int sum = 0;

    cout << "Please enter a series of numbers, to end, enter a 0: " << endl;
    while (input != 0) {
        cin >> input;
        sum += input;
        cout << "Partial sum is equal to: " << sum << endl;

    }
    cout << "Total sum is equal to: " << sum << endl;
}

void Loops::getMaxMinAndPositions() {
    int input;
    int index = 0;
    int max = INT_MIN;
    int maxIndex;
    int min = INT_MAX;
    int minIndex;
    bool areMoreInputs = true;
    string areMoreInputsString;

    while (areMoreInputs) {
        cout << "Please enter a number: " << endl;
        cin >> input;

        ++index;
        if (min > input) {
            min = input;
            minIndex = index;
        }
        if (max < input) {
            max = input;
            maxIndex = index;
        }

        while (areMoreInputsString != "y" || areMoreInputsString != "n") {
            cout << "Do you want to continue? y/n: " << endl;
            cin >> areMoreInputsString;
            if (areMoreInputsString == "y") {
                break;
            } else if (areMoreInputsString == "n") {
                areMoreInputs = false;
                break;
            }
        }
    }

    cout << "The max number is: " << max << " and the index was: " << maxIndex << endl;
    cout << "The min number is: " << min << " and the index was: " << minIndex << endl;
}

void Loops::countMaxAndMin() {
    int N;
    cout << "Set N value: ";
    cin >> N;

    int number;
    int maxNumber, minNumber, maxFrequency, minFrequency;
    bool isFirstNumber = true;

    cout << "Enter " << N << " numbers:" << endl;

    for (int i = 0; i < N; ++i) {
        cin >> number;

        if (isFirstNumber) {
            maxNumber = number;
            minNumber = number;
            maxFrequency = 1;
            minFrequency = 1;
            isFirstNumber = false;
        } else {
            if (number > maxNumber) {
                maxNumber = number;
                maxFrequency = 1;
            } else if (number == maxNumber) {
                maxFrequency++;
            }

            if (number < minNumber) {
                minNumber = number;
                minFrequency = 1;
            } else if (number == minNumber) {
                minFrequency++;
            }
        }
    }

    cout << "The max is: " << maxNumber << " and the frequency was " << maxFrequency << endl;
    cout << "The min is: " << minNumber << " and the frequency was " << minFrequency << endl;
}

// Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el
// resultado.
void Loops::mulBySum() {
    int inputA;
    int inputB;
    int result = 0;
    int index = 0;
    cout << "Solving C = A x B: " << endl;
    cout << "Please enter a number: " << endl;
    cin >> inputA;
    cout << "Please enter another number: " << endl;
    cin >> inputB;

    while (index < inputB) {
        result += inputA;
        ++index;
    }

    cout << inputA << " x " << inputB << " = " << result << endl;

}

void Loops::getMaxThree() {
    int input;
    int maxFst;
    int maxSnd;
    int maxTh;


    cout << "Please enter a series of numbers" << endl;
    while (input != 0) {
        cout << "To end, enter a 0: " << endl;
        cin >> input;
        if (maxFst < input) {
            maxTh = maxSnd;
            maxSnd = maxFst;
            maxFst = input;
        } else if (maxSnd < input) {
            maxTh = maxSnd;
            maxSnd = input;
        } else if (maxTh < input) {
            maxTh = input;
        }
    }
    cout << "Max three numbers of the series are: " << maxFst << ", " << maxSnd << ", " << maxTh << endl;
}

void Loops::getMaxAndMinPay() {
    int input;
    int maxPay = INT_MIN;
    string maxPayEmployee;
    int minPay = INT_MAX;
    string minPayEmployee;
    bool areMoreInputs = true;
    string areMoreInputsString;
    string employeeName;

    while (areMoreInputs) {
        cout << "Please enter a salary: " << endl;
        cin >> input;
        cout << "Please enter the employee name: " << endl;
        cin >> employeeName;

        if (minPay > input) {
            minPay = input;
            minPayEmployee = employeeName;
        }
        if (maxPay < input) {
            maxPay = input;
            maxPayEmployee = employeeName;
        }

        while (areMoreInputsString != "y" || areMoreInputsString != "n") {
            cout << "Do you want to continue? y/n: " << endl;
            cin >> areMoreInputsString;
            if (areMoreInputsString == "y") {
                break;
            } else if (areMoreInputsString == "n") {
                areMoreInputs = false;
                break;
            }
        }

        cout << "The max pay is " << maxPay << " and the employee name is " << maxPayEmployee << endl;
        cout << "The min pay is " << minPay << " and the employee name is " << minPayEmployee << endl;
    }
}

void Loops::isSortedOrReverseSorted() {
    double previousNumber;
    double currentNumber;
    bool isSorting = false;
    bool isReverseSorting = false;
    bool areMoreInputs = true;
    string areMoreInputsString;
    cout << "Please enter a number: " << endl;
    cin >> previousNumber;
    while (areMoreInputs) {
        cout << "Please enter another number: " << endl;
        cin >> currentNumber;
        cout << "previousNumber = " << previousNumber << endl;
        cout << "currentNumber = " << currentNumber << endl;

        if (previousNumber < currentNumber && !isReverseSorting) {
            cout << "Ascending sort" << endl;
            isSorting = true;
        } else if (previousNumber > currentNumber && !isSorting) {
            cout << "Descending sort" << endl;
            isReverseSorting = true;
        } else {
            cout << "Not sorted" << endl;
            break;
        }
        previousNumber = currentNumber;

        while (areMoreInputsString != "y" || areMoreInputsString != "n") {
            cout << "Do you want to continue? y/n: " << endl;
            cin >> areMoreInputsString;
            if (areMoreInputsString == "y") {
                break;
            } else if (areMoreInputsString == "n") {
                areMoreInputs = false;
                break;
            }
        }
    }
}

double Loops::fahrenheitToCelcius(int degrees) {
    return 5.0 / 9.0 * (degrees - 32);
}

void Loops::getTableFahrenheitToCelcius() {
    for (int i = 0; i < 200; i += 10) {
        cout << i << "ºF = " << fahrenheitToCelcius(i) << "ºC" << endl;
    }
}

void Loops::getMedium() {
    int batches;

    cout << "Please enter the amount of batches: " << endl;
    cin >> batches;
    double totalBatchSum = 0;
    double totalIndex = 0;

    for (int i = 0; i < batches; ++i) {
        cout << "Starting batch no " << i << endl;
        int batchIndex = 0;
        int batchSum = 0;
        int input = -1;
        cout << "Please enter a series of numbers, to end, enter a 0: " << endl;
        while (input != 0) {
            cin >> input;
            if (input != 0) {
                ++batchIndex;
                ++totalIndex;
            }
            batchSum += input;
        }
        totalBatchSum += batchSum;
        cout << "The medium is: " << batchSum / batchIndex << endl;
    }
    cout << "The whole medium is: " << totalBatchSum / totalIndex << endl;

}
