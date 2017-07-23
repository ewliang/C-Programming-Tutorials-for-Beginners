#include <iostream>

using namespace std;

int main() {

	int testScores[] = { 23, 56, 100, 89, 45, 100, 55, 12, 23, 9 };
	int numberOfElements = sizeof(testScores) / sizeof(testScores[0]);

	for (int i = 0; i < numberOfElements; i++) {
		cout << testScores[i] << endl;
	}

	return 0;
}