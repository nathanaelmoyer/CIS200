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

	char cpuStatus = 'Q';// true = cpu is busy false = cpu is idle

	for (int i = 1; i <= 10000; i++)
	{
		//if (i >= 500)//start outputting data
		//{
		//	//command line output

		//	if (cpuStatus == 'Q')
		//	{
		//		if ((i % A.arrivalTime) == 0)
		//		{
		//			cpuStatus = 'A';
		//		}
		//		if ((i % B.arrivalTime) == 0)
		//		{
		//			cpuStatus = 'B';
		//		}
		//		if ((i % C.arrivalTime) == 0)
		//		{
		//			cpuStatus = 'C';
		//		}
		//	}
		//	else
		//	{

		//	}

		if (i >= 500)//start outputting data
		{
			//command line output
			cout << i << ") ";

			if (cpuStatus == 'Q')
			{
				if ((i % A.arrivalTime) == 0)
				{
					cout << "Job A has started. ";
					cpuStatus = 'A';
				}
			}
			
			if (cpuStatus == 'Q')
			{
				if ((i % B.arrivalTime) == 0)
				{
					cout << "Job B has started. ";
					cpuStatus = 'B';
				}
			}
			if (cpuStatus == 'Q')
			{
				if ((i % C.arrivalTime) == 0)
				{
					cout << "Job C has started. ";
					cpuStatus = 'C';
				}
			}


			if (cpuStatus == 'Q')//idle cpu check
			{
				cout << "CPU is idle";
			}
			
			if (cpuStatus != 'Q')//busy cpu check
			{
				cout << "CPU is running job " << cpuStatus << ".";
			}

			if (cpuStatus == 'A')//end jobs after processing time has finished
			{
				if (i % A.processingTime == 0)
				{
					cpuStatus = 'Q';
				}
			}
			if (cpuStatus == 'B')
			{
				if (i % B.processingTime == 0)
				{
					cpuStatus = 'Q';
				}
			}
			if (cpuStatus == 'C')
			{
				if (i % C.processingTime == 0)
				{
					cpuStatus = 'Q';
				}
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

