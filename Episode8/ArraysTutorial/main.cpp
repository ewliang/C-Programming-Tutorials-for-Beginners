#include <iostream>
#include <string>

using namespace std;

int main() {

	string students[3] = {
		"Eric",
		"John",
		"Jane"
	};

	int grades[3] = {
		90,
		85,
		100
	};

	cout << "The students in my class are: " << students[0] << ", " << students[1] << ", " << students[2] << endl;
	cout << "Student Grades" << endl;
	cout << students[0] << ": " << grades[0] << endl;
	cout << students[1] << ": " << grades[1] << endl;
	cout << students[2] << ": " << grades[2] << endl;

	grades[0] = 95;

	cout << "NEW GRADE: " << students[0] << ": " << grades[0] << endl;


	return 0;
}