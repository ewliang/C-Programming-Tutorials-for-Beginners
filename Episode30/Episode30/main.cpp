#include <iostream>

using namespace std; 

int main() {

	//SYNTAX FOR CREATING A DYNAMIC ARRAY
	/*
		dataType *nameOfTheDynamicArray;
		nameOfTheDynamicArray = new dataType[numberOfElements];
		nameOfTheDynamicArray[0] = value;
		delete [] nameOfTheDynamicArray;
	*/

	int count;
	cout << "How many values to store in the dynamic array?";
	cin >> count;
	int *myDynamicArray;
	myDynamicArray = new int[count];

	for (int k = 0; k < count; k++) {
		cout << "Input Value: ";
		cin >> myDynamicArray[k];
		cout << endl;
	}

	for (int i = 0; i < count; i++) {
		cout << myDynamicArray[i] << endl;
	}

	delete[] myDynamicArray;

	return 0;
}