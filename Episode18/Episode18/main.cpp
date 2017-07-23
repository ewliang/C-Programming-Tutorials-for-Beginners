#include <iostream>

using namespace std;

float PI = 3.14;

//Calculates Area of a Circle
float calculateAreaOfCircle(float radius) {
	//A = pi*r^2   aka pi*r*r
	float areaOfCircle;
	areaOfCircle = PI * radius * radius;
	return areaOfCircle;
}

//Calculates Circumference of a Circle
float calculateCircumferenceOfCircle(float radius) {
	//C = 2*pi*r
	float circumferenceOfCircle;
	circumferenceOfCircle = 2 * PI * radius;
	return circumferenceOfCircle;
}

int main() {

	float radius;
	cout << "Please enter a radius: ";
	cin >> radius;

	cout << "Area: " << calculateAreaOfCircle(radius) << endl;
	cout << "Circumference: " << calculateCircumferenceOfCircle(radius) << endl;

	return 0;
}