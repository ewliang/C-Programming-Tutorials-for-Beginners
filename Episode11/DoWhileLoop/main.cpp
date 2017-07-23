#include <iostream>

using namespace std;

int main() {

	int userAge;
	int minimumVotingAgeRequirement = 18;

	do {
		cout << "Please enter your age: ";
		cin >> userAge;
	} while (userAge < minimumVotingAgeRequirement);

	cout << "Congratulations! You are eligible to vote. Please proceed to the voting booth." << endl;

	return 0;
}