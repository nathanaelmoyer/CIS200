//Program Name
//Nathanael Moyer
//Date


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


int factorial(int value, bool methodStatus)
{
	if (value == 0 || value == 1)
	{
		return 1;
	}
	return value * factorial(value - 1, methodStatus);
	
}



int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	int value = 0;
	bool methodStatus = 0;
	char response = 'a';

	while (response != 'n' && response != 'N')	//loop until user enters n or N
	{
		cout << "Enter an integer to solve its factorial: " << endl;
		cin >> value;

		while (value < 0)	//check user input if value is negeative
		{
			cout << "Invalid input. Value must be greater than 0" << endl;
			cin >> value;
		}

		cout << "Answer: " << factorial(value, methodStatus);

		line();

		cout << "Would you like to solve another factorial? (y/n)" << endl;
		cin >> response;
		while (response != 'n' && response != 'N' && response != 'y' && response != 'Y')
		{
			cout << "Please enter a valid response. (y/n)" << endl;
			cin >> response;
		}

		line();

	}
	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

