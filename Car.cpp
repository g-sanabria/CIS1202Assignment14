#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(const string& manufacturer, int yearBuilt, int numberOfDoors) : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {}

int Car::getNumberOfDoors() const {
	return numberOfDoors;
}

void Car::setNumberOfDoors(int numberOfDoors) {
	this->numberOfDoors = numberOfDoors;
}

void Car::getVehInput() {
	Vehicle::getVehInput();
	cout << "Enter the number of doors: ";
	cin >> numberOfDoors;
	cin.ignore();
}

void Car::displayCarInfo() const {

	Vehicle::displayInfo();
	cout << "Doors: " << numberOfDoors << endl;
}

