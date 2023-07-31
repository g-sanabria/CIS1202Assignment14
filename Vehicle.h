#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle(const string& manufacturer = "", int yearBuilt = 0);
	string getManufacturer() const;
	void setManufacturer(const string& manufacturer);
	int getYearBuilt() const;
	void setYearBuilt(int yearBuilt);
	void getVehInput();
	void displayInfo() const;
};

#endif