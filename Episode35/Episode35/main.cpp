#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string myMessage;

	ifstream myFile("settings.txt");

	if (myFile.is_open()) {
		cout << "The file is open!" << endl;
	}
	else {
		cout << "The file is closed." << endl;
	}

	while (getline(myFile, myMessage)) {
		cout << myMessage << endl;
	}

	myFile.close();

	return 0;
}