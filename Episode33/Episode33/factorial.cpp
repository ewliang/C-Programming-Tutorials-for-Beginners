#include <iostream>
#include "factorial.h"

using namespace std;

double factorial(int x) {
	if (x != 1) {
		return x * factorial(x - 1);
	}
	else {
		return 1;
	}
}