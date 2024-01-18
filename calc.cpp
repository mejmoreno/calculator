#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    char operation;

    cout << "Choose an operation (+, -, *, /, %, ^): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result;

    switch (operation) {
        case '+':
            result = a + b;
            cout << "The sum is " << result << "." << endl;
            break;
        case '-':
            result = a - b;
            cout << "The difference is " << result << "." << endl;
            break;
        case '*':
            result = a * b;
            cout << "The product is " << result << "." << endl;
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                cout << "The division result is " << result << "." << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        case '%':
            if (b != 0) {
                result = a % b;
                cout << "The remainder is " << result << "." << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        case '^':
            result = pow(a, b);
            cout << "The result of " << a << " raised to the power of " << b << " is " << result << "." << endl;
            break;
        default:
            cout << "Invalid operation. Please choose a valid operation (+, -, *, /, %, ^)." << endl;
    }

    return 0;
}
