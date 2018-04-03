#pragma once
#include "LandVehicle.h"
#include <iostream>
using namespace std;

class Truck : public LandVehicle
{
private:
	bool dieselTypeStatus;
	float cargoCapacity;
	float currentCargo;
	float liftKitHeight;
public:
	Truck();
	~Truck();

	bool getDieselTypeStatus();
	void setDieselTypeStatus(bool input);

	float getCargoCapacity();
	void setCargoCapacity(float input);

	float getCurrentCargo();
	void setCurrentCargo(float input);

	float getLiftKitHeight();
	void setLiftKitHeight(float input);

	void loadCargo(float input);

	
};

