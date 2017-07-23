#include <iostream>
#include <string>

using namespace std;

int main() {
	string message1 = "hello world";
	string message2 = "world";
	string message3;

	//Method 1 - Equal Operator
	//message3 = message1;
	//cout << message3 << endl;

	//Method 2 - Assign Function to Copy Values
	//message3.assign(message1);
	//cout << message3 << endl;

	//Concatenating Strings
	//message3 = message1 + " " + message2;
	//cout << message3 << endl;

	//Length of String
	//cout << message1.size() << endl;

	string password;

	cout << "Please type your password: ";
	getline(cin, password);

	if (password.size() < 6) {
		cout << "The password is too short. Make sure it's at least 6 characters long." << endl;
	}
	else {
		cout << "The password is valid. Good job!" << endl;
	}

	return 0;
}