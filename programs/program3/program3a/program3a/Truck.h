#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	bool DieselTypeStatus;
public:
	Truck();
	~Truck();

	void setDieselTypeStatus(bool input);
	bool getDieselTypeStatus();
};

