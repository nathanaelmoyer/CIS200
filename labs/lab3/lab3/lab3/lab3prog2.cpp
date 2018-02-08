//Program Name
//Nathanael Moyer
//Date


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;



void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


bool isEmpty(ifstream& file)
{
	return file.peek() == ifstream::traits_type::eof();
}

void readIntFile(ifstream &x, int intArray[], int &length)
{

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

	#define inFile userFile

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
		cout << "File is empty" << endl;
		return 0;
	}






	//file.close;	//close file

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

