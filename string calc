// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
using namespace std;
int main()
{
	int firstValue, secondValue, sum;
	cout
		<< "Please input two values to add"
		<< " First value: ";
	cin >> firstValue;
	cout << " Second value: ";
	cin >> secondValue;
	sum = firstValue + secondValue;
	cout << "Sum = " << sum;
}*/

/*#include <iostream>
using namespace std;
void menu();

int main()
{
	int firstValue, secondValue, result;
	char usedOperator;

	cout << "Please input two values to add or subtract\n\nFirst value: ";
	cin >> firstValue;
	cout << "Second value: ";
	cin >> secondValue;
	cout << "\nPlease choose an operator to use\n(1) Addition\n(2) Subtraction\n\nChoice: ";
	cin >> usedOperator;

	switch(usedOperator) {
	case '1':
		result = firstValue + secondValue;

	case '2':
		result = firstValue - secondValue;
	}
	cout << "Result: " << result;
	return 0;
}*/

/*#include <iostream>
#include <math.h>
#include <cctype>
using namespace std;

int main()
{
	int firstValue, secondValue, result;
	char usedOperator;
	char uiRepeat;

	do {
		cout << "Please input two values to add or subtract\n\nFirst value: ";
		cin >> firstValue;
		cout << "Second value: ";
		cin >> secondValue;
		cout << "\nPlease choose an operator to use"
			<< "\n(1) Addition"
			<< "\n(2) Subtraction"
			<< "\n(3) Multiplication"
			<< "\n(4) Division"
			<< "\n(5) Modulus"
			<< "\n(6) Power"
			<< "\n(0) Exit"
			<< "\nChoice: ";
		cin >> usedOperator;

		switch (usedOperator) {
		case '1':
			result = firstValue + secondValue;
			break;
		case '2':
			result = firstValue - secondValue;
			break;
		case '3':
			result = firstValue * secondValue;
			break;
		case '4':
			result = firstValue / secondValue;
			break;
		case '5':
			result = firstValue % secondValue;
			break;
		case '6':
			result = pow(firstValue, secondValue);
			break;
		case '0':
			exit(0);
		}
		cout << "Result: " << result;
		cout << "\nPerform another calculation? (Y/N)"
			<< "\nChoice: ";
		cin >> uiRepeat;
		uiRepeat = toupper(uiRepeat);
		system("cls");
	} while (uiRepeat == 'Y');
}*/

#include <iostream>
#include <math.h>
#include <cctype>
using namespace std;

int main()
{
	int firstValue, secondValue, result;
	char usedOperator;
	char uiRepeat;
	string name;

	do {
		cout << "Please enter your name: ";
		cin >> name;
		system("cls");
		cout << "Welcome " << name << "!" << endl
			<< "\nPlease choose an operator to use"
			<< "\n(1) Addition"
			<< "\n(2) Subtraction"
			<< "\n(3) Multiplication"
			<< "\n(4) Division"
			<< "\n(5) Modulus"
			<< "\n(6) Power"
			<< "\n(0) Exit" << endl
			<< "\nChoice: ";
		cin >> usedOperator;
		system("cls");
		cout << "Please input two values to add or subtract\n\nFirst value: ";
		cin >> firstValue;
		cout << "Second value: ";
		cin >> secondValue;
		switch (usedOperator) {
		case '1':
			result = firstValue + secondValue;
			break;
		case '2':
			result = firstValue - secondValue;
			break;
		case '3':
			result = firstValue * secondValue;
			break;
		case '4':
			result = firstValue / secondValue;
			break;
		case '5':
			result = firstValue % secondValue;
			break;
		case '6':
			result = pow(firstValue, secondValue);
			break;
		case '0':
			exit(0);
		}
		cout << "\nResult: " << result;
		cout << "\n\nPerform another calculation? (Y/N)"
			<< "\nChoice: ";
		cin >> uiRepeat;
		uiRepeat = toupper(uiRepeat);
		system("cls");
	} while (uiRepeat == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
