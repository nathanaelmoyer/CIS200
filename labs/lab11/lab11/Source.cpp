//Lab 11
//Nathanael Moyer
//4-16-18

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

#define onFile "outputFile.txt"

struct listNode
{
	int recordNum;
	char toolName[20];
	int quantity;
	double cost;
	listNode * next;
};

struct recordArr
{
	int recordNum;
	char toolName[20];
	int quantity;
	double cost;
};

void addRecord(recordArr arrSorted[], recordArr arrUnsorted[], listNode * listSorted, listNode * listUnsorted, fstream &ons)
{
	listNode * location = NULL;
	listNode * temp = NULL;
	listNode * previous = NULL;

	string stringInput = "a";
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

	if (location == NULL)
	{
		cout << "Tool name: ";
		cin >> stringInput;
		while (stringInput.length() > 20)	//check name length
		{
			cout << "Name is too long. Must be 20 or less characters." << endl;
			cin >> stringInput;
		}
		char toolName[21];
		strcpy_s(toolName, stringInput.c_str());	//copy stringInput to toolName array

		cout << "Quantity: ";
		cin >> intInput;
		
		
		
	}
}

int main()
{
	recordArr arrSorted[100];
	recordArr arrUnsorted[100];
	listNode * listSortedHead = NULL;
	listNode * listUnsortedHead = NULL;
	fstream ons;

	ons.open(onFile);

	addRecord(arrSorted, arrUnsorted, listSortedHead, listUnsortedHead, ons);


	//cout << arrSorted[0].recordNum << endl;;
	return 0;
}