//
// Created by ttoloza on 04/09/2023.
//

#include "QuadraticFunction.h"
#include "cmath"

double QuadraticFunction::getFirstRoot() const {
    return root1;
}

double QuadraticFunction::getSecondRoot() const {
    return root2;
}

bool QuadraticFunction::hasRoots() const {
    return getDiscriminant() >= 0;
}

double QuadraticFunction::getDiscriminant() const {
    return b * b - 4 * a * c;
}

QuadraticFunction::QuadraticFunction(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;

    double discriminant = getDiscriminant();

    if (hasRoots()) {
        if (discriminant > 0) {
            root1 = (-b + std::sqrt(discriminant)) / (2 * a);
            root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        } else {
            root1 = -b / (2 * a);
            root2 = 0;
        }
    }
}
