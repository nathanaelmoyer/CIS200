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

int recursiveLinearSearch(int count, int array[], int key, int size, bool methodStatus)
{
	int first = 0;
	int last = size;
	int mid = (first + last) / 2;
	
	
	if (key < 0)
	{
		return 0;
	}
	if (key > size)
	{
		return 0;
	}
	if (key < mid) //check values less than the middle value
	{
		
		recursiveLinearSearch(count, array, key, size - 1, methodStatus);
		
	}
	else if (key > mid)	//check values greater than the middle value
	{
		
		recursiveLinearSearch(count, array, key, size + 1, methodStatus);
		
	}
	else if (key == mid)	//check middle value
	{
		return 1;
	}
	
	
}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	int count = 0;
	int size = 2776;
	bool methodStatus = false;
	int key = 0;

	int array[2776];
	for (int i = 0; i < size; i++)	//initialize array to sequential numbers starting from 0
	{
		array[i] = i;
	}

	cout << "Enter key value to search for: ";
	cin >> key;
	
	methodStatus = recursiveLinearSearch(count, array, key, size, methodStatus);

	if (methodStatus == 1)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	cout << count << endl;
	
	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

