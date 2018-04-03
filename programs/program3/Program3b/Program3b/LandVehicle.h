#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

class LandVehicle : public Vehicle
{
private:
	int mileage;
public:
	LandVehicle();
	~LandVehicle();

	int getMileage();
	void setMileage(int input);

	void calcDistance(int input);	//add distance traveled to mileage

	void park();	//switch gear to park
};

