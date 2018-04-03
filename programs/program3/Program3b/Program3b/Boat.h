#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

class Boat : public Vehicle
{
private:
	string boatType;
	float boatLength;
	bool dockStatus;
public:
	Boat();
	~Boat();

	string getBoatType();
	void setBoatType(string input);

	float getBoatLength();
	void setBoatLength(float input);

	bool getDockStatus();
	void setDockStatus(bool input);

	void launch();

	void dock();
};

