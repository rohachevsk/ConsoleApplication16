#include <iostream>

using namespace std;
// zadanie 1
//double add(double a, double b) {
//    return a + b;
//}
//
//double subtract(double a, double b) {
//    return a - b;
//}
//
//double multiply(double a, double b) {
//    return a * b;
//}
//
//double divide(double a, double b) {
//    if (b == 0) {
//        cout << "Error: Division by zero!" << endl;
//        return 0;
//    }
//    return a / b;
//}
//
//int main() {
//    double num1, num2;
//    char operation;
//    double (*operations[4])(double, double) = { add, subtract, multiply, divide };
//    cout << "Simple Calculator" << endl;
//    cout << "Enter first number: ";
//    cin >> num1;
//
//    cout << "Enter operation (+, -, *, /): ";
//    cin >> operation;
//
//    cout << "Enter second number: ";
//    cin >> num2;
//
//    int operationIndex = -1;
//
//    if (operation == '+') {
//        operationIndex = 0;
//    }
//    else if (operation == '-') {
//        operationIndex = 1;
//    }
//    else if (operation == '*') {
//        operationIndex = 2;
//    }
//    else if (operation == '/') {
//        operationIndex = 3;
//    }
//
//    if (operationIndex >= 0 && operationIndex < 4) {
//        double result = operations[operationIndex](num1, num2);
//        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
//    }
//    else {
//        cout << "Error: Invalid operation!" << endl;
//    }
// 

//zadanie 2
    void sumArrays(double* arrA, double* arrB, double* arrC, int size) {
        for (int i = 0; i < size; ++i) {
            arrC[i] = arrA[i] + arrB[i];
        }
    }

    int main() {
        const int SIZE = 5;
        double arrayA[SIZE] = { 1.0, 2.5, 3.0, 4.5, 5.0 };
        double arrayB[SIZE] = { 5.0, 4.5, 3.0, 2.5, 1.0 };
        double arrayC[SIZE];

        sumArrays(arrayA, arrayB, arrayC, SIZE);

        cout << "Array A: ";
        for (int i = 0; i < SIZE; ++i) {
            cout << arrayA[i] << " ";
        }
        cout << endl;

        cout << "Array B: ";
        for (int i = 0; i < SIZE; ++i) {
            cout << arrayB[i] << " ";
        }
        cout << endl;

        cout << "Array C (sum of A and B): ";
        for (int i = 0; i < SIZE; ++i) {
            cout << arrayC[i] << " ";
        }
        cout << endl;

        return 0;
    }