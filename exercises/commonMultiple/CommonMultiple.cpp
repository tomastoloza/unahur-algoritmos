//
// Created by ttoloza on 05/09/2023.
//

#include "CommonMultiple.h"
#include "iostream"

using namespace std;

double CommonMultiple::getMinimumCommonMultiple(int a, int b) {
    int gcd = getGreatestCommonDivisor(a, b);
    return (a * b) / gcd;
}

double CommonMultiple::getGreatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
