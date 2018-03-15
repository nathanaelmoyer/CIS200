#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	bool RaceCarStatus;

public:
	Car();
	~Car();

	void setRaceCarStatus(bool input);
	bool getRaceCarStatus();

};

