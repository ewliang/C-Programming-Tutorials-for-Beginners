/*
Author: Eric Liang
Description: Learn how to assign values to enum labels in C++.
IDE: Visual Studio 2015
Youtube Channel: https://www.youtube.com/user/ewliang
Website: https://www.eric-liang.com
*/

#include <iostream>

using namespace std;

int main() {
	//cstrings end with a null character \0, whereas strings don't have a null character.
	//Method 1 - Array Initialization
	char cs1[4] = {'c', 'a', 't', '\0'};
	cout << "Method 1: " << cs1 << endl;

	//Method 2 - Shortcut Array Initialization
	char cs2[4] = "cat";
	cout << "Method 2: " << cs2 << endl;

	//Method 3 - Empty (aka nothing, just a null character exists)
	char cs3[] = "";
	cout << "Method 3: " << cs3 << endl;


	//Method 4 - Using Pointers
	//char* cs4 = "hello";

	return 0;
}