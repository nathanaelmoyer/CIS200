#include "LandVehicle.h"
#include <string>
#include <iostream>


LandVehicle::LandVehicle()
{
	gear = 0;
	mileage = 0;
}


LandVehicle::~LandVehicle()
{
}

int LandVehicle::getGear()
{
	return gear;
}

void LandVehicle::setGear(int input)
{
	gear = input;
}

int LandVehicle::getMileage()
{
	return mileage;
}

void LandVehicle::setMileage(int input)
{
	if (input < 0)
	{
		cout << "Invalid mileage. Must be greater than 0." << endl;
		return;
	}
	mileage = input;
}

void LandVehicle::calcDistance(int input)
{
	setDistance(input + getDistance());
}

void LandVehicle::park()
{
	if (gear == 0)
	{
		cout << "Gear is already in park." << endl;
		return;
	}
	if (getSpeed() == 0)
	{
		gear = 0;
		cout << "Gear switched to park." << endl;
	}
	else if (getSpeed() > 0)
	{
		cout << "Car is moving. Cannot switch gear to park." << endl;
	}
}
