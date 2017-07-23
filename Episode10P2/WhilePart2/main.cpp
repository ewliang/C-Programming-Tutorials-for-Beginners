#include <iostream>

using namespace std;

int main() {


	do {
		//Statements that you want to repeat goes in here.
	} while (/*conditional statement*/);




	//////

	int userAge;
	int minimumVotingAgeRequirement = 18;

	cout << "Please enter your age: ";
	cin >> userAge;

	while (userAge < minimumVotingAgeRequirement) {
		cout << "You are too young to vote. Sorry, please try again when you are older." << endl;
		cout << "Please enter your age: ";
		cin >> userAge;
	}

	cout << "Congratulations! You are eligible to vote. Please proceed to the voting booth." << endl;

	return 0;
}