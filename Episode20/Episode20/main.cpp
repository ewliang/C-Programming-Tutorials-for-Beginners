/*
Author: Eric Liang
Description: Learn how to assign values to enum labels in C++.
IDE: Visual Studio 2015
Youtube Channel: https://www.youtube.com/user/ewliang
Website: https://www.eric-liang.com
*/

#include <iostream>
using namespace std;

enum Mode {
	ADMIN = 1, USER = 100
};

int main() {

	int modeSelectionValue;
	cout << "Please select a mode (ADMIN = 1, USER = 100):";
	cin >> modeSelectionValue;

	switch (modeSelectionValue) {
	case ADMIN:
		cout << "Welcome back Administrator!" << endl;
		break;
	case USER:
		cout << "Hello, welcome to my program." << endl;
		break;
	default:
		cout << "Error, invalid user mode received!" << endl;
		break;
	}

	return 0;
}