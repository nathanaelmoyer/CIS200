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

using namespace std;

#define onFile "output.txt"


void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}




int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	ofstream out;
	out.open(onFile);
	Car x;

	x.turn("N");
	out << "Heading set to N" << endl;
	cout << "Heading: " << x.getHeading() << endl;

	x.start();
	out << "Engine started" << endl;
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
	








	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}