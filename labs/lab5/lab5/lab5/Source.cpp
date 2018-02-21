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

int recursiveLinearSearch(int &count, int array[], int key, int size, bool methodStatus)
{
	++count;
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


	if (key == last)	//linear search from the last position
	{
		return 1;
	}
	else if (key < last)	
	{
		recursiveLinearSearch(count, array, key, size - 1, methodStatus);
	}

	//if (key < mid) //check values less than the middle value	//binary search from middle position
	//{
	//	recursiveLinearSearch(count, array, key, size - 1, methodStatus);
	//}
	//else if (key > mid)	//check values greater than the middle value
	//{
	//	recursiveLinearSearch(count, array, key, size + 1, methodStatus);
	//}
	//else if (key == mid)	//check middle value
	//{
	//	return 1;
	//}
	
	
}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	char response = 'a';
	int count = 0;
	int size = 2500;
	bool methodStatus = false;
	int key = 0;

	int array[2500];
	for (int i = 0; i < size; i++)	//initialize array to sequential numbers starting from 0
	{
		array[i] = i;
	}
	while (response != 'n' && response != 'N')
	{

		count = 0;
		cout << "Enter key value to search for: ";
		cin >> key;

		methodStatus = recursiveLinearSearch(count, array, key, size, methodStatus);

		if (methodStatus == 1)	//check if key value is within array
		{
			cout << key << " is within the current array" << endl;
		}
		else
		{
			cout << key << " is not within the current array" << endl;
		}
		cout << "Recursive function called " << count << " times" << endl;

		line();

		cout << "Would you like to enter another value to search for (y/n)" << endl;		//continue loop
		cin >> response;
		while (response != 'n' && response != 'N' && response != 'y' && response != 'Y')
		{
			cout << "Please enter (y/n)" << endl;
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