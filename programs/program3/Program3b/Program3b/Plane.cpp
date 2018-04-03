#include "Plane.h"


Plane::Plane()
{
	altitude = 0.0;
	jetEngineStatus = false;
	takeOffStatus = false;
}


Plane::~Plane()
{
}

float Plane::getAltitude()
{
	return altitude;
}

void Plane::setAltitude(float input)
{
	if (takeOffStatus == false)
	{
		cout << "Cannot change altitude when on the ground." << endl;
		return;
	}
	if (input < 100)
	{
		cout << "Altitude cannot be less than 100ft when in air." << endl;
		return;
	}
	altitude = input;
}

bool Plane::getJetEngineStatus()
{
	return jetEngineStatus;
}

void Plane::setJetEngineStatus(bool input)
{
	jetEngineStatus = input;
}

void Plane::takeOff()
{
	if (takeOffStatus == true)
	{
		cout << "Plane is already in the air." << endl;
		return;
	}
	takeOffStatus = true;
	altitude = 100;
	cout << "Plane has taken off. Altitude is 100ft" << endl;
}

void Plane::land()
{
	if (takeOffStatus == false)
	{
		cout << "Plane is already on the ground." << endl;
		return;
	}
	takeOffStatus = false;
	altitude = 0;
	cout << "Plane has landed" << endl;
}