//
// Created by ttoloza on 04/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_QUADRATICFUNCTION_H
#define UNAHUR_ALGORITMOS_QUADRATICFUNCTION_H

// 24 & 25
class QuadraticFunction {
private:
    double a;
    double b;
    double c;
    double root1;
    double root2;
public:

    bool hasRoots() const;

    double getFirstRoot() const;

    double getSecondRoot() const;

    QuadraticFunction(double a, double b, double c);

    double getDiscriminant() const;
};


#endif //UNAHUR_ALGORITMOS_QUADRATICFUNCTION_H
