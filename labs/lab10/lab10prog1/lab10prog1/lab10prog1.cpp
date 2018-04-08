//Lab 10 program 1
//Nathanael Moyer
//Date 4-7-2018


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

using namespace std;



void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


struct date
{
	int month;
	int day;
	int year;
};


date converStringToDate(string input)
{

}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	date x;
	string input;

	try
	{
		cout << "Please enter your birth date. (Format ex: 08-27-1990)" << endl;
		cin >> input;

		if (input.at(2) != '-')
		{
			throw string("Invalid date format");
		}
		else if (input.at(5) != '-')
		{
			throw string("Invalid date format");
		}

		if ((input.at(0) + input.at(1) > 31))
		{
			throw string("Invalid month");
		}
	}
	catch (string s)
	{
		cout << s << endl;
	}

	





	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

