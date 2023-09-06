//
// Created by ttoloza on 05/09/2023.
//

#include "VectorsAndMatrices.h"
#include "Functions.h"
#include "iostream"

using namespace std;

vector<int> VectorsAndMatrices::getPrimeNumbersFrom2to200() {
    vector<int> primeNumbers;
    for (int i = 2; i < 200; ++i) {
        if (Functions::isPrime(i)) {
            primeNumbers.push_back(i);
        }
    }
    return primeNumbers;
}

int add(int a, int b) {
    return a + b;
}

vector<int> VectorsAndMatrices::getVectorSum(vector<int> a, vector<int> b) {
    return getResultByFunction(move(a), move(b), add);
}

int product(int a, int b) {
    return a * b;
}

vector<int> VectorsAndMatrices::getDotProduct(vector<int> a, vector<int> b) {
    return getResultByFunction(move(a), move(b), product);
}

vector<int> VectorsAndMatrices::getResultByFunction(vector<int> a, vector<int> b, function<int(int, int)> operation) {
    if (a.size() != b.size()) {
        throw exception();
    }
    vector<int> dotProduct;
    for (int i = 0; i < a.size(); ++i) {
        dotProduct.push_back(operation(a[i], b[i]));
    }
    return dotProduct;
}

void VectorsAndMatrices::printPrimeNumbersFrom2to200() {
    vector<int> primeNumbers = getPrimeNumbersFrom2to200();
    for (int primeNumber: primeNumbers) {
        cout << primeNumber << endl;
    }
}

void VectorsAndMatrices::printDotProduct() {
    vector<int> aVector = populateVector();
    vector<int> bVector = populateVector();
    vector<int> dotProduct = getDotProduct(aVector, bVector);
    cout << "Dot product is: ";
    printVector(dotProduct);
}

void VectorsAndMatrices::printVectorSum() {
    vector<int> aVector = populateVector();
    vector<int> bVector = populateVector();
    vector<int> vectorSum = getVectorSum(aVector, bVector);
    cout << "Vector sum is: ";
    printVector(vectorSum);
}

void VectorsAndMatrices::printVector(vector<int> v) {
    for (int element: v) {
        cout << element << "; ";
    }
    cout << endl;
}

vector<int> VectorsAndMatrices::populateVector() {
    int input = INT_MIN;
    vector<int> vector;
    cout << "Please enter a series of numbers, to end, enter a 0: " << endl;
    while (input != 0) {
        cin >> input;
        if (input == 0) {
            break;
        }
        vector.push_back(input);
    }
    return vector;
}

void VectorsAndMatrices::printSetFromVector() {
    const vector<int> inputVector = populateVector();
    printVector(getSetFromVector(inputVector));
}

vector<int> VectorsAndMatrices::getSetFromVector(vector<int> v) {
    vector<int> setVector;
    bool isDup;
    for (int i: v) {
        for (int j: setVector) {
            if (i == j) {
                isDup = true;
                break;
            }
        }
        if (!isDup) {
            setVector.push_back(i);
        }
    }
    return setVector;
}

int VectorsAndMatrices::polynomialSpecialization(const vector<int> &coefficients, int x) {
    int result = 0.0;
    int degree = coefficients.size() - 1;

    for (int i = 0; i <= degree; ++i) {
        result += coefficients[i] * pow(x, degree - i);
    }

    return result;
}

void VectorsAndMatrices::printPolynomialSpecialization() {
    const vector<int> coefficients = populateVector();
    if ((coefficients.size() - 1) > 10) {
        cout << "The degree of the polynomial should not be greater than 10." << endl;
        return;
    }


    int x = 0;
    cout << "Enter the value at which you want to evaluate the polynomial: ";
    cin >> x;
    int specialization = polynomialSpecialization(coefficients, x);
    cout << "The polynomial evaluates in: " << specialization;
}

void VectorsAndMatrices::printStudentsThatTookExamAndPercentagesPerNotes() {
    int numStudents;
    cout << "Enter the number of students who took the English exam: ";
    cin >> numStudents;

    vector<int> grades(11, 0);

    for (int i = 0; i < numStudents; ++i) {
        int studentID, grade;
        cout << "Enter the student ID for student " << i + 1 << ": ";
        cin >> studentID;
        cout << "Enter the grade obtained by student " << i + 1 << ": ";
        cin >> grade;


        if (grade >= 0 && grade <= 10) {
            grades[grade]++;
        } else {
            cout << "The entered grade is not in the valid range (0-10)." << endl;
            --i;
        }
    }
    cout << "Number of students who took the exam: " << numStudents << endl;

    for (int i = 0; i <= 10; ++i) {
        double percentage = (static_cast<double>(grades[i]) / numStudents) * 100.0;
        cout << "Percentage of students with grade " << i << ": " << percentage << "%" << endl;
    }
}
