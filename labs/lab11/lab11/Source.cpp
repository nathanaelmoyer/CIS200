//Lab 11
//Nathanael Moyer
//4-16-18

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define onFile "outputFile.txt"

struct listNode
{
	int recordNum;
	char toolName[20];
	int quantity;
	double cost;
	listNode next;
};

struct recordArr
{
	int recordNum;
	char toolName[20];
	int quantity;
	double cost;
};

void addRecord(recordArr arrSorted[], recordArr arrUnsorted[], listNode * listSorted, listNode * listUnsorted, fstream ons)
{
	listNode * location = NULL;
	listNode * temp = NULL;
	listNode * previous = NULL;

	string stringInput = "";
	int intInput = 0;
	double input = 0.0;

	cout << "Enter a record number: ";
	cin >> intInput;

	while (intInput < 1 || intInput > 100)	//check user input for record number
	{
		cout << "Invalid input. Record number must be 1-100" << endl;
		cin >> intInput;
	}

	int comparisons = 0;
	while (location != NULL && location->recordNum != intInput)
	{
		location = location->next;
		comparisons++;
	}
}

int main()
{
	return 0;
}