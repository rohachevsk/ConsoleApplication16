#include <iostream>

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operation;
    double (*operations[4])(double, double) = { add, subtract, multiply, divide };
    cout << "Simple Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    int operationIndex = -1;

    if (operation == '+') {
        operationIndex = 0;
    }
    else if (operation == '-') {
        operationIndex = 1;
    }
    else if (operation == '*') {
        operationIndex = 2;
    }
    else if (operation == '/') {
        operationIndex = 3;
    }

    if (operationIndex >= 0 && operationIndex < 4) {
        double result = operations[operationIndex](num1, num2);
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
    }
    else {
        cout << "Error: Invalid operation!" << endl;
    }
    return 0;
}