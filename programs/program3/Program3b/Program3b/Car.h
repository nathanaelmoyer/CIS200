#pragma once
#include "LandVehicle.h"
#include <iostream>
using namespace std;

class Car : public LandVehicle
{
private:
	bool raceCarStatus;
	bool coupeStatus;
public:
	Car();
	~Car();

	bool getRaceCarStatus();
	void setRaceCarStatus(bool input);

	bool getCoupeStatus();
	void setCoupeStatus(bool input);
};

