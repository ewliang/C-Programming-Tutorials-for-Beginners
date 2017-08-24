/*
	Title: Episode 29 - Pass by Reference vs Pass by Value
	Author: Eric Liang
	Website: https://www.eric-liang.com
*/

#include <iostream>

using namespace std;

void passByValue(int incomingValNumber) {
	incomingValNumber = 100;
	cout << "Inside PassByValue() " << incomingValNumber << endl;
}

void passByReference(int *incomingRefNumber) {
	*incomingRefNumber = 200;
	cout << "Inside PassByReference() " << *incomingRefNumber << endl;
}

int main() {

	int age1 = 1;
	int age2 = 2;

	passByValue(age1);
	cout << "Age1 " << age1 << endl;
	passByReference(&age2);
	cout << "Age2 " << age2 << endl;

	return 0;
}