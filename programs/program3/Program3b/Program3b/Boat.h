#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

class Boat : public Vehicle
{
private:
	string boatType;
	float boatLength;
public:
	Boat();
	~Boat();

	string getBoatType();
	void setBoatType(string input);

	float getBoatLength();
	void setBoatLength(float input);

	void launch();

	void dock();
};

