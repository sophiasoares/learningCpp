//============================================================================
// Name        : Calculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double calculate (double num1, double num2, int op);

int main() {

	double num1, num2;
	int op;

	cout << "Enter the first number: ";
	cin >> num1;

	do {
		cout << "Enter the operation: \n"
				"1 - Addition \n"
				"2 - Subtraction \n"
				"3 - Multiplication \n"
				"4 - Division" << endl;
		cin >> op;
		if (op < 1 || op > 4) {
			cout << "Please enter a valid number! \n";
		}
	} while (op < 1 || op > 4);

	cout << "Enter the second number: ";
	cin >> num2;

	cout << "The result is: " << calculate(num1, num2, op) << endl;

	return 0;
}

double calculate (double num1, double num2, int op) {


	switch (op) {
	case 1:
		return num1 + num2;
	case 2:
		return num1 - num2;
	case 3:
		return num1 * num2;
	case 4:
		return num1 / num2;
	}
}




