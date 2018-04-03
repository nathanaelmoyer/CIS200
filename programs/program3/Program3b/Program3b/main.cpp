//Program3b
//Nathanael Moyer
//Date 4-3-2018


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

#include "Vehicle.h"
#include "LandVehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Boat.h"
#include "Plane.h"

using namespace std;

#define onFile "output.txt"


void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


void mainMenu(string &input)
{
	line();
	cout << "What vehicle would you like to drive?" << endl;
	cout << "Car, truck, boat, or plane." << endl;

	cin >> input;

	while (input != "car" && input != "Car" && input != "boat" && input != "Boat" && input != "truck" && input != "Truck" && input != "plane" && input != "Plane")
	{
		cout << "Invalid input" << endl;
		cin >> input;
	}
}

void carMenu(string &input)
{
	line();
	cout << "What action would you like to take?" << endl;

	cout << "Start: starts car" << endl;
	cout << "Off: turns car off" << endl;
	cout << "Move: move a specified distance" << endl;
	cout << "Acelerate: increase speed by specified amount" << endl;
	cout << "Decelerate: decrease speed by specified amount" << endl;
	cout << "Stop: stop car" << endl;
	cout << "Turn: turn in a specified heading" << endl;

	cin >> input;

	while (input != "start" && input != "Start" && input != "off" && input != "Off" &&
		input != "move" && input != "Move" && input != "acelerate" && input != "Acelerate" &&
		input != "decelerate" && input != "decelerate" && input != "stop" && input != "Stop" && input != "turn" && input != "Turn")
	{
		cout << "Invalid input" << endl;
		cin >> input;
	}

}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	ofstream out;
	out.open(onFile);

	string inputStn = "car";

	//mainMenu(inputStn);

	if (inputStn == "car" || inputStn == "Car")
	{
		carMenu(inputStn);
	}
	else
	{
		cout << "FUCK YOU" << endl;
	}
	

	/*
	Truck x;

	x.turn("N");
	cout << "Heading: " << x.getHeading() << endl;

	x.start();
	if (x.getEngineStatus() == 1)
	{
		cout << "Engine is on" << endl;
	}
	else
	{
		cout << "Engine is off" << endl;
	}

	x.start();
	x.setGear(1);
	cout << "Speed: " << x.getSpeed() << endl;
	x.acelerate(25);
	cout << "Speed: " << x.getSpeed() << endl;

	x.park();


	x.turn("E");
	cout << "Heading: " << x.getHeading() << endl;

	x.decelerate(5);
	cout << "Speed: " << x.getSpeed() << endl;

	x.stop();
	cout << "Speed: " << x.getSpeed() << endl;

	x.park();
	x.park();

	x.off();
	if (x.getEngineStatus() == 1)
	{
		cout << "Engine is on" << endl;
	}
	else
	{
		cout << "Engine is off" << endl;
	}
	x.off();
	
	x.loadCargo(1000);

	x.setCargoCapacity(4000);

	x.loadCargo(2000);

	x.loadCargo(3000);
	
	Boat a;

	a.setBoatType("Speed-boat");
	a.setBoatLength(15);

	cout << "Boat type: " << a.getBoatType() << endl;
	cout << "Boat length: " << a.getBoatLength() << "ft" <<endl;


	a.launch();
	a.launch();

	a.dock();
	a.dock();



	Plane b;

	b.setJetEngineStatus(true);
	if (b.getJetEngineStatus() == 1)
	{
		cout << "Plane has jet engines." << endl;
	}
	else
	{
		cout << "Plane does not have jet engines." << endl;
	}

	b.land();
	b.takeOff();
	b.takeOff();


	cout << "Current altitude: " << b.getAltitude() << endl;
	b.setAltitude(50);
	cout << "Current altitude: " << b.getAltitude() << endl;
	b.setAltitude(1000);
	cout << "Current altitude: " << b.getAltitude() << endl;
	*/

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}