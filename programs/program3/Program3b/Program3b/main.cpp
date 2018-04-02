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

	fstream out;

	Vehicle x;

	x.start();
	





	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

