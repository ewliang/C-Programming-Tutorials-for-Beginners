/*
	Author: Eric Liang
	Description: Learn how to create enumerations in C++.
	IDE: Visual Studio 2015
	Youtube Channel: https://www.youtube.com/user/ewliang
	Website: https://www.eric-liang.com
*/

#include <iostream>

using namespace std;

enum Season {
	SPRING, SUMMER, FALL, WINTER
};

int main() {

	Season thisSeason = SUMMER;
	if (thisSeason == SUMMER) {
		cout << "The weather is very hot outside!" << endl;
	}
	else {
		cout << "The weather can get hotter." << endl;
	}

	return 0;
}