#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(const string& manufacturer, int yearBuilt) : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

string Vehicle::getManufacturer() const {
	return manufacturer;
}

void Vehicle::setManufacturer(const string& manufacturer) {
	this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() const {
	return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
	this->yearBuilt = yearBuilt;
}

void Vehicle::getVehInput() {
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cin.ignore();
}

void Vehicle::displayInfo() const {
	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}

