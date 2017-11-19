#include <iostream>
#include <fstream>

using namespace std;

int main() {

	//ofstream myFile;
	//myFile.open("settings.txt");

	ofstream myFile("settings.txt");

	if (myFile.is_open()) {
		cout << "The file is open!" << endl;
	}
	else {
		cout << "The file is closed." << endl;
	}
	cout << "Hello Console Window!" << endl;
	myFile << "Hello, I'm in the file!\n";

	myFile.close();

	return 0;
}