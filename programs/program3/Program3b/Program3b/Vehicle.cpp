#include "Vehicle.h"
#include <string>
#include <iostream>




Vehicle::Vehicle()
{
	age = 0;
	price = 0.0;
	speed = 0;
	heading = "";
	fuel = 0;
	numberOfPassengers = 0;
	numEngines = 0;
	engineStatus = false;
	distance = 0;
}


Vehicle::~Vehicle()
{
}

int Vehicle::getAge()
{
	return 0;
}

void Vehicle::setAge(int input)
{
}

float Vehicle::getPrice()
{
	return 0.0f;
}

void Vehicle::setPrice(float input)
{
}

int Vehicle::getSpeed()
{
	return 0;
}

void Vehicle::setSpeed(int input)
{
}

string Vehicle::getHeading()
{
	return string();
}

void Vehicle::setHeading(string input)
{
}

int Vehicle::getFuel()
{
	return 0;
}

void Vehicle::setFuel(int input)
{
}

int Vehicle::getNumberOfPassengers()
{
	return 0;
}

void Vehicle::setNumberOfPassengers(int input)
{
}

int Vehicle::getNumEngines()
{
	return 0;
}

void Vehicle::setNumEngines(int input)
{
}

bool Vehicle::getEngineStatus()
{
	return false;
}

void Vehicle::setEngineStatus(bool input)
{
}

int Vehicle::getDistance()
{
	return 0;
}

void Vehicle::setDistance(int input)
{
}

void Vehicle::start()
{
	engineStatus = true;
}

void Vehicle::stop()
{
	speed = 0;
}

void Vehicle::move(int input)
{
	distance = distance + input;
}

void Vehicle::acelleration(int input)
{
	speed = speed + input;
}

void Vehicle::decellertion(int input)
{
	speed = speed + input;
}

void Vehicle::off()
{
	engineStatus = false;

}

void Vehicle::turn(string input)
{
	while (heading != "N" && heading != "S" && heading != "E" && heading != "W")
	{
		cout << "Invalid input" << endl;
		cin >> input;
	}
	heading = input;
}
