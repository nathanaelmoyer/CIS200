#include "Vehicle.h"



Vehicle::Vehicle()
{
	age = 0;
	price = 0.0;
}


Vehicle::~Vehicle()
{
}

void Vehicle::setAge(int input)
{
	age = input;
}


void Vehicle::setPrice(float input)
{
	price = input;
}

int Vehicle::getAge()
{
	return age;
}

float Vehicle::getPrice()
{
	return price;
}
