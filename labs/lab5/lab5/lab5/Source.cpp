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

int recursiveLinearSearch(int array[], int key, int size, bool methodStatus)
{
	int result;

	array[size - 1] = result;


	return 0;
}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	int size = 0;
	bool methodStatus = true;
	int key = 0;
	int array[5000];
	for (int i = 0; i < 5000; i++)
	{
		array[i] = i;
	}

	cout << "Enter key value to search for: ";
	cin >> key;

	recursiveLinearSearch(array, key, size, methodStatus);


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

