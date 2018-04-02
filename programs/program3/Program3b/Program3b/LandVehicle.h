#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

class LandVehicle : public Vehicle
{
private:
	int gear;
	int mileage;
public:
	LandVehicle();
	~LandVehicle();

	int getGear();
	void setGear(int input);

	int getMileage();
	void setMileage(int input);

	void calcDistance(int input);	//add distance traveled to mileage

	void park();	//switch gear to park
};

