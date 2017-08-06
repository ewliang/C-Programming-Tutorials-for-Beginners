/*
	Program: C++ Project 1 - Vending Machine Finite State Machine
	Author: Eric Liang
	Desc: Simple 4 state finite state machine for simulating a console application vending machine that
	allows user to pay with points, update wallet, and keep track of inventory.
	Date: 8/5/17
	Website: https://www.eric-liang.com
	GitHub: https://github.com/ewliang
	YouTube: https://www.youtube.com/user/ewliang
*/

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

	while (true) {
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

			cout << "How many drinks would you like? ";
			int orderQuantity;
			cin >> orderQuantity;

			cout << "Your order has been received. You placed an order " << orderQuantity << " soda(s)." << endl;

			switch (selectedSoda.brandName) {
			case COKE:
				if (orderQuantity < 0 || orderQuantity > vendingMachine[0].inventory) {
					cout << "Not Enough " << selectedSoda.brandName << " In Stock" << endl;
					currentState = SELECT;
					cout << endl << endl;
				}
				else {
					currentState = CALCULATE;
				}
				break;
			case PEPSI:
				if (orderQuantity < 0 || orderQuantity > vendingMachine[1].inventory) {
					cout << "Not Enough In Stock" << endl;
					currentState = SELECT;
					cout << endl << endl;
				}
				else {
					currentState = CALCULATE;
				}
				break;
			case SEVENUP:
				if (orderQuantity < 0 || orderQuantity > vendingMachine[2].inventory) {
					cout << "Not Enough In Stock" << endl;
					currentState = SELECT;
					cout << endl << endl;
				}
				else {
					currentState = CALCULATE;
				}
				break;
			default:
				cout << "Invalid Amount Received." << endl;
				break;
			}

			break;
		case CALCULATE:
			cout << "The total cost for your soda is: ";
			int cost;
			switch (selectedSoda.brandName) {
				case COKE:
					cost = vendingMachine[0].price * orderQuantity;
					cout << cost << endl;
					break;
				case PEPSI:
					cost = vendingMachine[1].price * orderQuantity;
					cout << cost << endl;
					break;
				case SEVENUP:
					cost = vendingMachine[2].price * orderQuantity;
					cout << cost << endl;
					break;
				default:
					cout << "Error!" << endl;
					break;
			}
			int payment;
			cout << "Please type in your payment: ";
			cin >> payment;

			if (payment > eric.points || payment < cost || payment <= 0) {
				cout << "You don't have enough money!" << endl;
				currentState = SELECT;
				cout << endl << endl;
			}
			else {
				eric.points = eric.points - payment;
				int change = payment - cost;
				cout << "Thank you! Your change is " << change << " points." << endl;
				eric.points = eric.points + change;
				currentState = UPDATE;
			}

			break;
		case UPDATE:

			switch (selectedSoda.brandName) {
				case COKE:
					vendingMachine[0].inventory = vendingMachine[0].inventory - orderQuantity;
					currentState = SELECT;
					cout << endl << endl;
					break;
				case PEPSI:
					vendingMachine[1].inventory = vendingMachine[1].inventory - orderQuantity;
					currentState = SELECT;
					cout << endl << endl;
					break;
				case SEVENUP:
					vendingMachine[2].inventory = vendingMachine[2].inventory - orderQuantity;
					currentState = SELECT;
					cout << endl << endl;
					break;
				default: 
					cout << "Error" << endl;
					currentState = SELECT;
					cout << endl << endl;
					break;
			}

			cout << "Inventory Updated" << endl;
			currentState = SELECT;
			cout << endl << endl;

			break;
		default:
			cout << "Error! Invalid State Detected." << endl;
			break;
		}
	}
	return 0;
}