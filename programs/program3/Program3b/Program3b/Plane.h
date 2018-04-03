#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Plane : public Vehicle
{
private:
	float altitude;
	bool jetEngineStatus;
	bool takeOffStatus;
public:
	Plane();
	~Plane();

	float getAltitude();
	void setAltitude(float input);

	bool getJetEngineStatus();
	void setJetEngineStatus(bool input);

	void takeOff();

	void land();
};

