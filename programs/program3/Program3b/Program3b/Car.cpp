#include "Car.h"



Car::Car()
{
	raceCarStatus = false;
	coupeStatus = false;
}


Car::~Car()
{
}

bool Car::getRaceCarStatus()
{
	return raceCarStatus;
}

void Car::setRaceCarStatus(bool input)
{
	raceCarStatus = input;
}

bool Car::getCoupeStatus()
{
	return coupeStatus;
}

void Car::setCoupeStatus(bool input)
{
	coupeStatus = input;
}
