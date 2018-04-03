#include "Boat.h"



Boat::Boat()
{
	boatType = "a";
	boatLength = 0.0;
	dockStatus = false;
}


Boat::~Boat()
{
}

string Boat::getBoatType()
{
	return boatType;
}

void Boat::setBoatType(string input)
{
	boatType = input;
}

float Boat::getBoatLength()
{
	return boatLength;
}

void Boat::setBoatLength(float input)
{
	boatLength = input;
}

bool Boat::getDockStatus()
{
	return dockStatus;
}

void Boat::setDockStatus(bool input)
{
	dockStatus = input;
}

void Boat::launch()
{
	if (dockStatus == true)
	{
		cout << "Boat is already launched." << endl;
		return;
	}
	cout << "Boat has been launched." << endl;
	dockStatus = true;
}

void Boat::dock()
{
	if (dockStatus == false)
	{
		cout << "Boat is already docked." << endl;
		return;
	}
	cout << "Boat has been docked." << endl;
	dockStatus = false;
}
