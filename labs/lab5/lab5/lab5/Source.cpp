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
	int first = 0;
	int last = size - 1;
	int mid = (first + last) / 2;
	
	
	return 0;
	
}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	
	int size = 10;
	bool methodStatus = false;
	int key = 0;
	int array[10];
	for (int i = 0; i < size; i++)
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

