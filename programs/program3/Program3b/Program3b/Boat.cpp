#include "Boat.h"



Boat::Boat()
{
	boatType = "a";
	boatLength = 0.0;
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

void Boat::launch()
{
}

void Boat::dock()
{
}
