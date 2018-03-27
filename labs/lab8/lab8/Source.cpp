//Lab 8
//Nathanael Moyer
//Date 3-22-18


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

using namespace std;

#define inFile "integer.dat"

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

struct node
{
	int number;
	node * next;
};


int main()
{
	fstream ints;
	ints.open(inFile);	//open file
	line();
	if (ints.fail())	//check if file is open
	{
		cout << "***ERROR: Failed to open file integer.dat***" << endl;
		return 0;
	}
	else
	{
		cout << "integer.dat opened" << endl;
	}
	line();


	//####################################################################
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	node * head = NULL;
	node * forward = NULL;
	node * backward = NULL;
	node * location = NULL;
	node * temp = NULL;

	node * forwardEven = NULL;
	node * backwardEven = NULL;



	



	ints.close();

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}