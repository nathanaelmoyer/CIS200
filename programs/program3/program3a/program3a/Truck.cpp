#include "Truck.h"



Truck::Truck()
{
	DieselTypeStatus = false;
}


Truck::~Truck()
{
}

void Truck::setDieselTypeStatus(bool input)
{
	DieselTypeStatus = input;
}

bool Truck::getDieselTypeStatus()
{
	return DieselTypeStatus;
}
