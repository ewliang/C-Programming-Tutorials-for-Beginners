/*
	Title: Episode 28 - C++ Pointers
	Author: Eric Liang
	Website: www.eric-liang.com
*/

#include <iostream>

using namespace std;

int main() {

	int age = 23; //Variable
	int *agePointer; //Pointer Variable

	agePointer = &age;
	cout << "No Asterisk: " << agePointer << endl; //Memory Address Value Returned
	cout << "With Asterisk: " << *agePointer << endl; //Actual Value Stored in the Variable is Returned

	return 0;
}