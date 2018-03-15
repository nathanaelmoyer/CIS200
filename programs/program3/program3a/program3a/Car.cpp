#include "Car.h"



Car::Car()
{
	RaceCarStatus = false;
}


Car::~Car()
{
}

void Car::setRaceCarStatus(bool input)
{
	RaceCarStatus = input;
}

bool Car::getRaceCarStatus()
{
	return RaceCarStatus;
}
