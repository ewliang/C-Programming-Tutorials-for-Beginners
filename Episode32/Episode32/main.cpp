#include <iostream>

using namespace std;

//5! = 5 * 4 * 3 * 2 * 1 = 120
//3! = 3 * 2 * 1 = 6
//1! = 1
//0! = 1

double factorial(int x) {
	if (x != 1) {
		return x * factorial(x - 1);
	}
	else {
		return 1;
	}
}

int main() {
	cout << factorial(20) << endl;
	return 0;
}
