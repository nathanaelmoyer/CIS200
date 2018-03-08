//Lab 6
//Nathanael Moyer
//Date 3-8-2018


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


struct clientData
{
	int accountNumber;
	char lastName[15];
	char firstName[10];
	float balance;
};


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	//initializing default data for account numbers

	ofstream outCredit("credit.dat", ios::out);

	clientData blankClient = { 0, "", "", 0.0 };

	for (int i = 0; i < 100; i++)
	{
		outCredit.write(reinterpret_cast<const char *>(&blankClient), sizeof(clientData));

	}






	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

