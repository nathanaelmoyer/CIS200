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


void convertDate(date input)
{
	line();
	if (input.month == 1)
	{
		cout << "January";
	}
	if (input.month == 2)
	{
		cout << "February";
	}
	if (input.month == 3)
	{
		cout << "March";
	}
	if (input.month == 4)
	{
		cout << "April";
	}
	if (input.month == 5)
	{
		cout << "May";
	}
	if (input.month == 6)
	{
		cout << "June";
	}
	if (input.month == 7)
	{
		cout << "July";
	}
	if (input.month == 8)
	{
		cout << "August";
	}
	if (input.month == 9)
	{
		cout << "September";
	}
	if (input.month == 10)
	{
		cout << "October";
	}
	if (input.month == 11)
	{
		cout << "November";
	}
	if (input.month == 12)
	{
		cout << "December";
	}

	cout << " " << input.day << ", " << input.year << endl;
}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	date x = { 0, 0, 0 };
	try
	{


		try
		{
			cout << "Enter birth month: ";
			cin >> x.month;

			cout << "Enter day of birth: ";
			cin >> x.day;

			cout << "Enter birth year: ";
			cin >> x.year;


			if (x.month < 1 || x.month > 12)
			{
				throw string("Invalid month");
			}

			if (x.day < 1 || x.day > 31)
			{
				throw int();
			}

			if (x.year < 1915 || x.year > 2017)
			{
				throw char();
			}


		}
		catch (string)
		{
			throw string();
		}

		catch (int)
		{
			throw int();
		}

		catch (...)
		{
			throw char();
		}
	}

		catch (string s)
		{
			cout << s << endl;
			cout << "Invalid month. Re-enter month: ";
			cin >> x.month;

		}

		catch (int s)
		{
			cout << "Invalid day. Re-enter day." << endl;
			cin >> x.day;

		}

		catch (...)
		{
			cout << "Invalid year" << endl;
			cout << "Re-enter year" << endl;
			cin >> x.year;
		}
	

	convertDate(x);




	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

