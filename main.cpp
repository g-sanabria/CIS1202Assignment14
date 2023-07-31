/*
*Gabriel Sanabria
*07/29/2023
*Assignment 14
*/
#include<iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"


using namespace std;

int main() {

	cout << "Vehicle Program\n";

	Vehicle vehicle;
	Car car;
	Truck truck;

	cout << "\nVehicle:" << endl;

	vehicle.getVehInput();
	vehicle.displayInfo();

	cout << endl;

	cout << "\Car:" << endl;

	car.getVehInput();
	car.displayCarInfo();

	cout << endl;

	cout << "\Truck:" << endl;

	truck.getVehInput();
	truck.displayTruckInfo();

	return 0;
}
