#include <iostream>

using namespace std;

union HotelRoom {
	int roomNumber;
	float price;
};

int main() {

	HotelRoom myRoom;
	myRoom.roomNumber = 100;
	cout << myRoom.roomNumber << endl;
	myRoom.price = 32.99;
	cout << myRoom.price << endl;
	cout << myRoom.roomNumber << endl;

	return 0;
}