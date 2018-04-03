#include "Vehicle.h"
#include <string>
#include <iostream>




Vehicle::Vehicle()
{
	gear = 0;
	age = 0;
	price = 0.0;
	speed = 0;
	heading = "E";
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

int Vehicle::getGear()
{
	return gear;
}

void Vehicle::setGear(int input)
{
	gear = input;
}

void Vehicle::setAge(int input)
{
	age = input;
}

float Vehicle::getPrice()
{
	return price;
}

void Vehicle::setPrice(float input)
{
	price = input;
}

int Vehicle::getSpeed()
{
	return speed;
}

void Vehicle::setSpeed(int input)
{
	speed = input;
}

string Vehicle::getHeading()
{
	return heading;
}

void Vehicle::setHeading(string input)
{
	while (input != "N" && input != "S" && input != "E" && input != "W")
	{
		cout << "Invalid input" << endl;
		cin >> input;
	}
	heading = input;
}

int Vehicle::getFuel()
{
	return fuel;
}

void Vehicle::setFuel(int input)
{
	fuel = input;
}

int Vehicle::getNumberOfPassengers()
{
	return numberOfPassengers;
}

void Vehicle::setNumberOfPassengers(int input)
{
	numberOfPassengers = input;
}

int Vehicle::getNumEngines()
{
	return numEngines;
}

void Vehicle::setNumEngines(int input)
{
	numEngines = input;
}

bool Vehicle::getEngineStatus()
{
	return engineStatus;
}

void Vehicle::setEngineStatus(bool input)
{
	engineStatus = input;
}

int Vehicle::getDistance()
{
	return distance;
}

void Vehicle::setDistance(int input)
{
	if (input < 0)
	{
		cout << "Distance must be greater than 0." << endl;
		return;
	}
	distance = input;
}

void Vehicle::start()
{
	if (engineStatus == 1)
	{
		cout << "Engine is already on" << endl;
		return;
	}
	cout << "Car has been started" << endl;
	engineStatus = true;
}

void Vehicle::stop()
{
	speed = 0;
	cout << "Vehicle has stopped." << endl;
}

void Vehicle::move()
{
	if (engineStatus == 0)
	{
		cout << "Engine must be on to move car." << endl;
		return;
	}
	int input;
	cout << "How far would you like to move? (in miles)" << endl;
	cin >> input;
	distance = distance + input;
	cout << "Distance just moved: " << input << endl;
	cout << "Total distance traveled: " << distance << endl;
}

void Vehicle::acelerate()
{
	if (gear == 0)
	{
		cout << "Car is in park. Cannot acelerate." << endl;
		return;
	}
	cout << "Current speed: " << speed << endl;
	cout << "How much would you like to acelerate? (in mph)" << endl;
	int input;
	cin >> input;
	while (input < 0)
	{
		cout << "Invalid input. Aceleration must be greater than zero." << endl;
		cin >> input;
	}
	speed = speed + input;
	cout << "New speed: " << speed << endl;
}

void Vehicle::decelerate()
{
	if (speed == 0)
	{
		cout << "Car is not moving. Cannot decelerate." << endl;
		return;
	}
	cout << "Current speed: " << speed << endl;
	cout << "How much would you like to decelerate? (in mph)" << endl;
	int input;
	cin >> input;
	while (input < 0)
	{
		cout << "Invalid input. Aceleration must be greater than zero." << endl;
		cin >> input;
	}
	speed = speed - input;
	cout << "New speed: " << speed << endl;
}

void Vehicle::off()
{
	if (engineStatus == 0)
	{
		cout << "Engine is already off" << endl;
		return;
	}
	cout << "Car has been turned off" << endl;
	engineStatus = false;

}

void Vehicle::turn()
{
	string input;
	cout << "What heading would you like to turn to? (N, S, E, W)" << endl;
	cin >> input;
	while (input != "N" && input != "n" && input != "S" && input != "s" 
		&& input != "E" && input != "e" && input != "W" && input != "w")
	{
		cout << "Invalid input" << endl;
		cin >> input;
	}
	heading = input;
}


