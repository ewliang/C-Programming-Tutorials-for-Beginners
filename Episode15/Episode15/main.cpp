#include <iostream>
#include <ctype.h>

using namespace std;

int main() {

	char grade;
	cout << "Please enter your letter grade: ";
	cin >> grade;

	switch (tolower(grade)) {
	case 'a':
		cout << "Excellent! You passed." << endl;
		break;
	case 'b': 
		cout << "Great Job! You passed." << endl;
		break;
	case 'c': 
		cout << "Good Job. You passed." << endl;
		break;
	case 'd':
		cout << "Please try again. You failed." << endl;
		break;
	case 'f': 
		cout << "Oh no! You failed." << endl;
		break;
	default:
		cout << "Please enter a valid letter grade." << endl;
		break;
	}

	return 0;
}