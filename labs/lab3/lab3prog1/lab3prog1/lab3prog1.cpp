//Lab 3 Program 1
//Nathanael Moyer
//2-1-2018
//Function that calculates a square root of a float number

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>

#include <assert.h>

using namespace std;



void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


double squareRoot(double userNum)
{
	assert(userNum > -1);
	double x0 = userNum / 2;
	double x1 = 0.0;
	double y = x0;
	do
	{
		x0 = y;
		x1 = (x0 + (userNum / x0)) / 2;
		y = x1;
	} while (fabs(x0 - x1) > .0001);
	

	return x1;
}




int main()
{
	line();
	cout << "Welcome to the square root program";
	line();
	//####################################################################

	double userNum = 0.0;
	char response = 'a';

	while (response != 'n' && response != 'N')
	{
		line();

		cout << "Enter a positive real number: ";
		cin >> userNum;

		cout << "The square root of " << userNum << " = " << squareRoot(userNum) << endl;

		line();

		cout << "Enter another number? (y/n)" << endl;
		cin >> response;

			while (response != 'y' && response != 'Y' && response != 'n' && response != 'N')
				{
					cout << "Invalid entry. Please enter (y/n)" << endl;
					cin >> response;
				}
		
	}


	//#####################################################################
	line();
	cout << "Thank you for running the program!";
	line();


	return 0;
}

