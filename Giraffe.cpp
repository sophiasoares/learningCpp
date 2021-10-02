//============================================================================
// Name        : Giraffe.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include "Penguin.h"
using namespace std;


int main() {
	cout << "Hello World!" << endl;
	cout << "Sophia" << endl;


	string phrase = "Giraffe Academy";
	cout << phrase.find("e", 0) << endl;
	cout << round(4.5) << endl;

	int age;
	string name;
	cout << "Please enter your age: ";
	cin >> age;
	cout << "Wow " << age << " years old, the golden time!" << endl;

	cout << "Please enter your name: ";
	fflush(stdin);
	getline(cin, name);
	cout << "Omg " << name << " you're so gorgeous!" << endl;

	cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
	cout << "The subtraction of 3 and 4 is: " << subtract(3, 4) << '\n';

	// Arrays
	int luckyNums[20] = {4, 34, 67, 21, 8};
	cout << luckyNums[0] << endl;
	luckyNums[5] = 99;
	cout << luckyNums[5];

	return 0;
}

