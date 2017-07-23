#include <iostream>
#include <string>

using namespace std;

struct Book {
	string name;
	string author;
	int publicationYear;
};

int main() {

	//1st Way to Initialize a Structure
	Book bookA = {
		"Harry Potter and the Sorceror's Stone",
		"JK Rowling",
		1997
	};

	cout << "Title: " << bookA.name << endl;
	cout << "Author: " << bookA.author << endl;
	cout << "Publication Year: " << bookA.publicationYear << endl;

	//2nd Method to Initialize a Structure
	Book bookB;
	bookB.name = "Harry Potter and the Chamber of Secrets";
	bookB.author = "JK Rowling";
	bookB.publicationYear = 1998;

	cout << "Title: " << bookB.name << endl;
	cout << "Author: " << bookB.author << endl;
	cout << "Publication Year: " << bookB.publicationYear << endl;
	
	bookB.name = "Harry Potter and the Prisoner of Azkaban";
	bookB.publicationYear = 1999;

	cout << "Title: " << bookB.name << endl;
	cout << "Publication Year: " << bookB.publicationYear << endl;


	return 0;
}