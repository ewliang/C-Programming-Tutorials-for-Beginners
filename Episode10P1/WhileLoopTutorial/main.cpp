#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string captcha = "abc123";
	string userInput;

	while (userInput != captcha) {
		cout << "Please try again, the captcha is " + captcha + ":";
		getline(cin, userInput);
	}

	cout << "Correct! You got the captcha typed correctly." << endl;
	

	return 0;
}