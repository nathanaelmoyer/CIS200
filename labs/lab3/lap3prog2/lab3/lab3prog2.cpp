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


bool isEmpty(ifstream& file)
{
	return file.peek() == ifstream::traits_type::eof();
}

void readIntFile(ifstream &x, int intArray[20], int &length)
{
	int i = 0;
	while (!x.eof())
	{
		
		x >> intArray[i];

		i++;
		
	}

	
	
	

	length = i;
	if (length > 20)
	{
		cout << endl << "***ERROR: Length of input from file must be 20 characters or less***" << endl << endl;
		
	}

	
}

void printFileValues(int intArray[], int &length, string userFile)
{
	cout << "Data in '" << userFile << "': " << endl;
	for (int i = 0; intArray[i] != NULL; i++)
	if (length <= 20) //won't print if length is greater than 20
	{
		cout << "Data in '" << userFile << "': " << endl;
		for (int i = 0; i < length; i++)
		{
			cout << intArray[i];
		}
		cout << endl;
	}
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
	char response = 'a';
	
	do
	{
		

		cout << "Enter file name you wish to open" << endl;
		cin >> userFile;

		file.open(inFile); //open file 

		if (file.fail())	//check if file will open
		{
			cout << "***ERROR: cannot open file '" << inFile << "'***" << endl;
			file.close();
			
		}

		if (file.is_open())
		{
			if (isEmpty(file) == 1)	//check if file is empty
			{

				cout << endl << "***ERROR: File is empty***" << endl << endl;

			}
		}

		if (file.is_open() && isEmpty(file) == 0)	//will not read or print anything if file is empty or cannot open
		{
			readIntFile(file, intArray, length);

			printFileValues(intArray, length, userFile);
		}


		line();

		cout << "Would you like to open another file? (y/n)" << endl;		//checking if user wants to open another file
		cin >> response;
		while (response != 'n' && response != 'y')	
		{
			cout << "Please make a vaid choice. (y/n)" << endl << endl;
			cin >> response;
		}
		
	} while (response != 'n');
	



	//file.close;	//close file

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

