


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

void VectorsAndMatrices::getMatrixSum() {
    const int MAX_ROWS = 100;
    const int MAX_COLS = 100;
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;


    int A[MAX_ROWS][MAX_COLS];
    int B[MAX_ROWS][MAX_COLS];
    int C[MAX_ROWS][MAX_COLS];


    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> B[i][j];
        }
    }


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    cout << "Matrix C (result of the addition of A and B):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void VectorsAndMatrices::getSumByRow() {
    const int MAX_ROWS = 100;
    const int MAX_COLS = 100;
    int rows, cols;

    cout << "Ingrese el número de filas: ";
    cin >> rows;
    cout << "Ingrese el número de columnas: ";
    cin >> cols;

    int matrix[MAX_ROWS][MAX_COLS];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> rowSums;
    for (int i = 0; i < rows; ++i) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
        rowSums.push_back(sum);
    }

    cout << "Vector de sumas de filas:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Fila " << i + 1 << ": " << rowSums[i] << endl;
    }

}

void VectorsAndMatrices::getDiagonalSum() {

    const int MAX_SIZE = 100;
    int size;


    cout << "Enter the size of the square matrix: ";
    cin >> size;


    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of the square matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    int trace = 0;
    for (int i = 0; i < size; ++i) {
        trace += matrix[i][i];
    }
    cout << "Trace of the matrix: " << trace << endl;

}

void VectorsAndMatrices::getIdentityMatrix() {

    const int MAX_SIZE = 100;
    int n;

    cout << "Enter the dimension of the square matrix: ";
    cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter the elements of the square matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    bool isIdentity = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = false;
                break;
            } else if (i != j && matrix[i][j] != 0) {
                isIdentity = false;
                break;
            }
        }
        if (!isIdentity) {
            break;
        }
    }

    if (isIdentity) {
        cout << "The matrix is the identity matrix." << endl;
    } else {
        cout << "The matrix is not the identity matrix." << endl;
    }

}

void VectorsAndMatrices::getVectorFromMinValuePerRow() {

    const int MAX_ROWS = 100;
    const int MAX_COLS = 100;

    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[MAX_ROWS][MAX_COLS];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> rowMinima;
    for (int i = 0; i < rows; ++i) {
        int min = matrix[i][0];
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
        rowMinima.push_back(min);
    }

    cout << "Vector of minimum values in each row:" << endl;
    for (int i = 0; i < rows; ++i) {
        cout << "Row " << i + 1 << ": " << rowMinima[i] << endl;
    }
}

