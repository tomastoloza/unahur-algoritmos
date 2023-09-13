//
// Created by ttoloza on 05/09/2023.
//

#ifndef UNAHUR_ALGORITMOS_VECTORSANDMATRICES_H
#define UNAHUR_ALGORITMOS_VECTORSANDMATRICES_H

#include "iostream"

using namespace std;

class VectorsAndMatrices {
public:
    vector<int> getPrimeNumbersFrom2to200();

    vector<int> getVectorSum(vector<int> a, vector<int> b);

    vector<int> getDotProduct(vector<int> a, vector<int> b);

    vector<int> populateVector();

    vector<int> getSetFromVector(vector<int> v);

    vector<int> getResultByFunction(vector<int> a, vector<int> b, function<int(int, int)> operation);

    void printVector(vector<int> v);

    void printPrimeNumbersFrom2to200();

    void printDotProduct();

    void printVectorSum();

    void printSetFromVector();

    int polynomialSpecialization(const vector<int> &coefficients, int x);

    void printPolynomialSpecialization();

    void printStudentsThatTookExamAndPercentagesPerNotes();

    void getMatrixSum();

    void getSumByRow();

    void getDiagonalSum();

    void getIdentityMatrix();

    void getVectorFromMinValuePerRow();

};


#endif //UNAHUR_ALGORITMOS_VECTORSANDMATRICES_H
