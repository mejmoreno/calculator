#include <iostream>

using namespace std;

void operatorSelection();
void firstInteger();

int main() {

    int operationUsage, integer1, integer2, integerResult;
    char continueChoice;

    do {
        operatorSelection();
        cin >> operationUsage;

        switch (operationUsage) {
            case 1:
                firstInteger();
                cin >> integer1;
                cout << "Second integer: ";
                cin >> integer2;
                integerResult = integer1 + integer2;

                cout << "Result: " << integerResult;
                break;
            case 2:
                firstInteger();
                cin >> integer1;
                cout << "Second integer: ";
                cin >> integer2;
                integerResult = integer1 - integer2;

                cout << "Result: " << integerResult;
                break;
            case 3:
                firstInteger();
                cin >> integer1;
                cout << "Second integer: ";
                cin >> integer2;
                integerResult = integer1 * integer2;

                cout << "Result: " << integerResult;
                break;
            case 4:
                firstInteger();
                cin >> integer1;
                cout << "Second integer: ";
                cin >> integer2;
                integerResult = integer1 / integer2;

                cout << "Result: " << integerResult;
                break;
            case 5:
                firstInteger();
                cin >> integer1;
                cout << "Second integer: ";
                cin >> integer2;
                integerResult = integer1 % integer2;

                cout << "Result: " << integerResult;
                break;
            case 6:
                cout << "You chose to exit" << endl;
                break;
            default:
                cout << "\nPlease enter a valid input" << endl;
        }

        cout << "\n\nDo you want to perform another calculation? (Y/N): ";
        cin >> continueChoice;

    }while(continueChoice == 'y' || continueChoice == 'Y');

    cout << "You chose to exit";
    return 0;
}

void operatorSelection(){
    cout
            <<"Please choose an operator" << endl
            <<"(1) Add (+)" << endl
            <<"(2) Subtract (-)" << endl
            <<"(3) Multiply (*)" << endl
            <<"(4) Divide (/)" << endl
            <<"(5) Modulus (%)" << endl
            <<"(6) Exit" << endl
            <<"\nEnter your choice:";
}

void firstInteger(){
    cout
            << "Please enter two integer values" << endl
            << "First integer: ";
}
//The program will prompt the user to choose the operation choice (from 1 to 5).
// Then it asks the user to input two integer vales for the calculation
