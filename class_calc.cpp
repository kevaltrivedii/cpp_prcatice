#include <iostream>
using namespace std;

class Calculator {
public:
    int num1, num2;

    void getInput() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    double divide() {
        return (num1) / num2;
    }
};
int main() {
    Calculator calc;
    calc.getInput();

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}