#include <iostream>

using namespace std;

int main() {

	float num1, num2;
	while (true) {


		int choice;
		cout << " Choose your Choice:  " << endl;
		cout << " 1- Addition." << endl;
		cout << " 2- Subtraction." << endl;
		cout << " 3- Multiplication." << endl;
		cout << " 4- Division." << endl;
		cout << "0- Exit" << endl;

		cout << "Enter your Choice Here: " << endl;
		cin >> choice;
		if (choice == 0) {
			break;
		}

		switch (choice) {

		case 1:
			cout << "Enter first Number: ";
			cin >> num1;
			cout << "Enter second Number: ";
			cin >> num2;

			if (num1 > num2) {
				cout << num1 << " is Greater" << endl;
			}
			else if (num2 > num1) {
				cout << num2 << "is Greater" << endl;
			}
			else {
				cout << "Both are equal";
			}
			cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
			break;
		case 2:
			cout << "Enter first Number: ";
			cin >> num1;
			cout << "Enter second Number: ";
			cin >> num2;

			if (num1 > num2) {
				cout << num1 << " is Greater" << endl;
			}
			else if (num2 > num1) {
				cout << num2 << "is Greater" << endl;
			}
			else {
				cout << "Both are equal";
			}
			cout << num1 << "-" << num2 << " = " << num1 - num2 << endl;
			break;
		case 3:
			cout << "Enter first Number: ";
			cin >> num1;
			cout << "Enter second Number: ";
			cin >> num2;

			if (num1 > num2) {
				cout << num1 << " is Greater" << endl;
			}
			else if (num2 > num1) {
				cout << num2 << "is Greater" << endl;
			}
			else {
				cout << "Both are equal";
			}
			cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
			break;
		case 4:
			cout << "Enter first Number: ";
			cin >> num1;
			cout << "Enter second Number: ";
			cin >> num2;

			if (num1 > num2) {
				cout << num1 << " is Greater" << endl;
			}
			else if (num2 > num1) {
				cout << num2 << "is Greater" << endl;
			}
			else {
				cout << "Both are equal";
			}
			cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
			break;
		default:
			cout << "Invalid Operator." << endl;
		}

	}

}