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

#define inFile userFile

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

int size(int tempArray[], int length)		//return the length of the array
{
	length = 0;
	for (int i = 0; tempArray[i] != NULL; i++)
	{
		length++;
	}
	
	return length;
}

bool isEmpty(ifstream& file)
{
	return file.peek() == ifstream::traits_type::eof();
}

int readIntFile(ifstream &x, int intArray[20], int &length)
{
	int i = 0;
	int tempArray[200];
	while (!x.eof())
	{
		
		x >> tempArray[i];

		i++;
		
	}
	if (size(tempArray, length) > 20)
	{
		cout << endl << "***ERROR: Length of input from file must be 20 characters or less***" << endl << endl;
		return 0;
	}
	else
	{
		for (int i = 0; i < 20; i++)
		{
			intArray[i] = tempArray[i];
		}
	}
	return 0;
}

void printFileValues(int intArray[], int &length, string userFile)
{
	cout << "Data in '" << userFile << "': " << endl;
	for (int i = 0; i < 20; i++)
	{
		cout  << intArray[i];
	}
	cout << endl;
}
int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	string userFile = "";
	ifstream file;
	int intArray[20];
	int length;

	

	cout << "Enter file name you wish to open" << endl;
	cin >> userFile;

	file.open(inFile); //open file 

	if (file.fail())	//check if file will open
	{
		cout << "***ERROR: cannot open '" << inFile << "'***" <<  endl;
		file.close();
		return 0;
	}

	if (isEmpty(file) == 1)
	{

		cout << endl << "***ERROR: File is empty***" << endl << endl;
		return 0;
	}

	readIntFile(file, intArray, length);

	/*if (size(intArray, length) > 20)
	{
		cout << endl << "***ERROR: Length of input from file must be 20 characters or less***" << endl << endl;
		return 0;
	}*/

	printFileValues(intArray, length, userFile);
	



	//file.close;	//close file

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

