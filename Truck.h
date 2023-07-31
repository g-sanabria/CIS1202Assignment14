#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Truck : public Vehicle {
private:
	int towingCapacity;

public:
	Truck(const string& manufacturer = "", int yearBuilt = 0, int towingCapacity = 0);
	int getTowingCapacity() const;
	void setTowingCapacity(int towingCapacity);
	void getVehInput();
	void displayTruckInfo() const;
};

#endif