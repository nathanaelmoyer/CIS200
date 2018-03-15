//Program Name
//Nathanael Moyer
//Date


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"



using namespace std;



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

	Vehicle a;
	Car b;
	Truck c;

	//Test vehicle class
	cout << "Initial vehicle values: " << endl;
	cout << "Age: " << a.getAge() << " years" <<  endl;
	cout << "Price: $" << a.getPrice() << endl << endl;

	a.setAge(10);
	a.setPrice(4000.00);
	cout << "Updated vehicle values: " << endl;
	cout << "Age: " << a.getAge() << " years" << endl;
	cout << "Price: $" << a.getPrice() << endl << endl;
	line();

	//Test car class
	cout << "Initial car values: " << endl;
	cout << "Age: " << b.getAge() << " years" << endl;
	cout << "Price: $" << b.getPrice() << endl;
	cout << "Race car status: ";
	if (b.getRaceCarStatus() == 1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << endl;

	b.setAge(5);
	b.setPrice(10000.00);
	b.setRaceCarStatus(true);
	cout << "Updated car values: " << endl;
	cout << "Age: " << b.getAge() << " years" << endl;
	cout << "Price: $" << b.getPrice() << endl;
	cout << "Race car status: ";
	if (b.getRaceCarStatus() == 1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << endl;
	line();

	//Test truck class
	cout << "Initial truck values: " << endl;
	cout << "Age: " << c.getAge() << " years" << endl;
	cout << "Price: $" << c.getPrice() << endl;
	cout << "Race car status: ";
	if (c.getDieselTypeStatus() == 1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << endl;

	c.setAge(2);
	c.setPrice(50000.00);
	c.setDieselTypeStatus(true);
	cout << "Updated truck values: " << endl;
	cout << "Age: " << c.getAge() << " years" << endl;
	cout << "Price: $" << c.getPrice() << endl;
	cout << "Diesel Type status: ";
	if (c.getDieselTypeStatus() == 1)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << endl;


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

