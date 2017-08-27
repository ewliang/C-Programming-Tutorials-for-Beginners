#include<iostream>

using namespace std;

int main() {

	int myBigArray[2][4] = {
		{1, 10, 100, 1000},
		{2, 20, 200, 2000}
	};

	for (int row = 0; row < 2; row++) {
		for (int column = 0; column < 4; column++) {
			cout << myBigArray[row][column] << " ";
		}
		cout << endl;
	}

	return 0;
}