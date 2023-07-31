#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Car : public Vehicle {
private:
	int numberOfDoors;

public:
	Car(const string& manufacturer = "", int yearBuilt = 0, int numberOfDoors = 0);
	int getNumberOfDoors() const;
	void setNumberOfDoors(int numberOfDoors);
	void getVehInput();
	void displayCarInfo() const;
};

#endif