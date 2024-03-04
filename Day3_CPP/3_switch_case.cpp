#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0.0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Divide by zero error!" << endl;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! Operator is not correct" << endl;
            break;
    }

    return 0;
}
