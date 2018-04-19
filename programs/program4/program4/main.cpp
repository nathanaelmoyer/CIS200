//Program Name
//Nathanael Moyer
//Date


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

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

	Data A = { (4 + rand() % 3), (1 + rand() % 5), 'A' };
	Data B = { (9 + rand() % 3), (6 + rand() % 5), 'A' };
	Data C = { (24 + rand() % 3), (11 + rand() % 5), 'A' };
	Data D = { (25 + rand() % 11), (8 + rand() % 5), 'A' };

	bool cpuStatus = false;// true = cpu is busy false = cpu is idle

	for (int i = 1; i <= 10000; i++)
	{
		//if (i < 500)//wait 500 time units before outputting data
		//{
		//	if (cpuStatus == false)
		//	{
		//		if ((i % A.arrivalTime) == 0)
		//		{
		//			cpuStatus = true;
		//		}
		//		if ((i % B.arrivalTime) == 0)
		//		{
		//			cpuStatus = true;
		//		}
		//		if ((i % C.arrivalTime) == 0)
		//		{
		//			cpuStatus = true;
		//		}


		//	}
		//	else
		//	{
		//		//do nothing since cpu is busy
		//	}
		//}
		//
		if (i >= 500)//start outputting data
		{
			//command line output
			cout << i << ") ";

			if (cpuStatus == false)
			{
				if ((i % A.arrivalTime) == 0)
				{
					cout << "Job A hast started";
					cpuStatus = true;
				}
				if ((i % B.arrivalTime) == 0)
				{
					cout << "Job B has started";
					cpuStatus = true;
				}
				if ((i % C.arrivalTime) == 0)
				{
					cout << "Job C has started";
					cpuStatus = true;
				}
			}
			else
			{
				cout << "CPU is busy";
			}
					

			cout << endl;


			//file output
			ons << i << ") ";
			ons << endl;
		}

	}


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

