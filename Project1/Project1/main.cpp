#include <iostream>
#include <string>

using namespace std;

enum VendingMachineState {
	SELECT, QUANTITY, CALCULATE, UPDATE
};

enum Brand {
	COKE = 100, PEPSI = 200, SEVENUP = 300
};

struct Student {
	string name;
	int points;
};

struct Soda {
	Brand brandName;
	int inventory;
	int price;
};

int main() {

	//Initial Vending Machine State is SELECT. Update upon state change.
	VendingMachineState currentState = SELECT;

	//Fill up our vending machine with Sodas.
	Soda vendingMachine[3];
	//Load Up with COKE
	vendingMachine[0].brandName = COKE;
	vendingMachine[0].inventory = 10;
	vendingMachine[0].price = 1000;
	//Load Up with PEPSI
	vendingMachine[1].brandName = PEPSI;
	vendingMachine[1].inventory = 10;
	vendingMachine[1].price = 2000;
	//Load Up with SEVENUP
	vendingMachine[2].brandName = SEVENUP;
	vendingMachine[2].inventory = 10;
	vendingMachine[2].price = 3000;

	Soda selectedSoda;
	Student eric;
	eric.name = "Eric";
	eric.points = 100000; //100,000 Points in Wallet

	switch (currentState) {
	case SELECT:
		//1. Display the current status for the vending machine and the student's wallet.
		cout << "<<<<<---CURRENT STATUS--->>>>>" << endl;
		cout << "[[[Vending Machine]]]" << endl;
		for (int i = 0; i < 3; i++) {
			cout << vendingMachine[i].brandName << " has " << vendingMachine[i].inventory << " drinks, and each costs " << vendingMachine[i].price << " points." << endl;
		}
		cout << "[[[Student]]]" << endl;
		cout << eric.name << " has " << eric.points << " points total." << endl;
		cout << "<<<<<---END STATUS--->>>>>" << endl << endl;
		//2. Ask the user what drink they want.
		cout << "Please select a drink from the following available options: " << endl;
		//3. Display the soda names and corresponding ID values.
		cout << "COKE = 100\nPEPSI = 200\nSEVENUP = 300" << endl;
		//4. User inputs the drink.
		int selectedDrink;
		cin >> selectedDrink;
		//5. If valid drink selected, move to QUANTITY state; else, go back to SELECT state.
		switch (selectedDrink) {
			case COKE: 
				cout << "You have selected COKE" << endl;
				selectedSoda.brandName = COKE;
				currentState = QUANTITY;
				break;
			case PEPSI:
				cout << "You have selected PEPSI" << endl;
				selectedSoda.brandName = PEPSI;
				currentState = QUANTITY;
				break;
			case SEVENUP:
				cout << "You have selected SEVENUP" << endl;
				selectedSoda.brandName = SEVENUP;
				currentState = QUANTITY;
				break;
			default:
				cout << "Invalid Drink Selected!" << endl;
				currentState = SELECT;
				break;
		}
		break;
	case QUANTITY:
		break;
	case CALCULATE:
		break;
	case UPDATE:
		break;
	default: 
		cout << "Error! Invalid State Detected." << endl;
		break;
	}

	return 0;
}