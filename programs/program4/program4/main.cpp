//Program Name
//Nathanael Moyer
//Date


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator
#include <vector>

using namespace std;

#define onFile "out.txt"

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

struct Data
{
	int arrivalTime;
	int processingTime;
	char jobType;
};


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################
	
	fstream ons;
	ons.open(onFile);
	ons << "File " << onFile << " opened" << endl << endl;

	cout << "File " << onFile << " opened" << endl << endl;

	vector<Data> A; 
	Data B = { (9 + rand() % 3), (6 + rand() % 5), 'A' };
	Data C = { (24 + rand() % 3), (11 + rand() % 5), 'A' };
	Data D = { (25 + rand() % 11), (8 + rand() % 5), 'A' };

	A.push_back(Data());

	for (int i = 1; i < 2500; i++)
	{
		A[0] = { (i * 9 + rand() % 3), (6 + rand() % 5), 'A' };
	}
	


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}