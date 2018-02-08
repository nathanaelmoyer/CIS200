//Program Name
//Nathanael Moyer
//Date


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

#define inFile userFile

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

int size(int intArray[], int length)		//return the length of the array
{
	length = 0;
	for (int i = 0; intArray[i] != NULL; i++)
	{
		length++;
	}
	return length;
}

bool isEmpty(ifstream& file)
{
	return file.peek() == ifstream::traits_type::eof();
}

void readIntFile(ifstream &x, int intArray[], int &length)
{
	
	while (!x.eof())
	{
		int i = 0;
		x >> intArray[i];

		i++;
		
	}
	if (length > 20)
	{
		cout << "***ERROR: Array overflow. Length of input from file must be 20 characters or less***" << endl;
		return;
	}
}

void printFileValues(int intArray[], int &length)
{

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
		cout << "Error: canot open " << inFile << endl;
		file.close();
		return 0;
	}

	if (isEmpty(file) == 1)
	{
		cout << "***ERROR: File is empty***" << endl;
		return 0;
	}

	readIntFile(file, intArray, length);
	size(intArray, length);



	//file.close;	//close file

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

