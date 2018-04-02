#include "Truck.h"



Truck::Truck()
{
	dieselTypeStatus = false;
	cargoCapacity = 0.0;
	currentCargo = 0.0;
	liftKitHeight = 0.0;
}


Truck::~Truck()
{
}

bool Truck::getDieselTypeStatus()
{
	return dieselTypeStatus;
}

void Truck::setDieselTypeStatus(bool input)
{
	dieselTypeStatus = input;
}

float Truck::getCargoCapacity()
{
	return cargoCapacity;
}

void Truck::setCargoCapacity(float input)
{
	cargoCapacity = input;
}

float Truck::getCurrentCargo()
{
	return currentCargo;
}

void Truck::setCurrentCargo(float input)
{
	currentCargo = input;
}

float Truck::getLiftKitHeight()
{
	return liftKitHeight;
}

void Truck::setLiftKitHeight(float input)
{
	liftKitHeight = input;
}

void Truck::loadCargo(float input)
{
	if (cargoCapacity == 0)
	{
		cout << "Cargo capacity has not been set. Please set a cargo capacity." << endl;
		return;
	}
	if (input > cargoCapacity)
	{
		cout << "Cannot load cargo. It is too heavy for this truck." << endl;
		return;
	}
	if ((input + currentCargo) > cargoCapacity)
	{
		cout << "Current total load: " << currentCargo << "lbs" << endl;
		cout << "Cannot load " << input << "lbs more. It is too heavy for this truck." << endl;
		return;
	}

	currentCargo = currentCargo + input;
	cout << "Cargo loaded: " << input << "lbs" << endl;
	cout << "Cargo capacity: " << cargoCapacity << "lbs" << endl;
	cout << "Current total load: " << currentCargo << "lbs" << endl;

}
