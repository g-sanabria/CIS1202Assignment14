#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

Truck::Truck(const string& manufacturer, int yearBuilt, int towingCapacity) : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
	return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
	this->towingCapacity = towingCapacity;
}

void Truck::getVehInput() {
	Vehicle::getVehInput();
	cout << "Vehicle Information: \n";
	
	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	cin.ignore();
}

void Truck::displayTruckInfo() const {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}

