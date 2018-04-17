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

void addRecord(recordArr arrSorted[], recordArr arrUnsorted[], listNode  headListSorted, listNode * headListUnsorted, fstream &ons)
{
	listNode * location = NULL;
	listNode * temp = NULL;
	listNode * previous = NULL;

	string stringInput = "a";
	char toolName[21];
	int intInput = 0;
	int userNum = 0;
	double doubleInput = 0.0;

	cout << "Enter a record number: ";
	cin >> userNum;

	while (userNum < 1 || userNum > 100)	//check user input for record number
	{
		cout << "Invalid input. Record number must be 1-100" << endl;
		cin >> userNum;
	}

	int comparisons = 0;
	while (location != NULL && location->recordNum != userNum)
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
		
		strcpy_s(toolName, stringInput.c_str());	//copy stringInput to toolName array

		cout << "Quantity: ";
		cin >> intInput;
		while (intInput < 0)	//check value of quantity is positive
		{
			cout << "Quantity must be greater than 0." << endl;
			cin >> intInput;
		}

		cout << "Cost: ";
		cin >> doubleInput;
		while (doubleInput < 0)	//check value of cost is positive
		{
			cout << "Cost must be greater than 0." << endl;
			cin >> doubleInput;
		}
	}

	//adding to sorted linked list
	comparisons = 0;
	if (headListSorted->recordNum > userNum)
	{
		temp = new listNode;
		temp->recordNum = userNum;
		for (int i = 0; toolName[i] == NULL; i++)
		{
			temp->toolName[i] = toolName[i];
		}
		temp->quantity = intInput;
		temp->cost = doubleInput;
		temp->next = headListSorted;
		headListSorted = temp;
		comparisons++;
	}
	else
	{
		previous = headListSorted;
		location = headListSorted->next;
		while (location != NULL && location->recordNum < userNum)
		{
			previous = location;
			location = location->next;
			comparisons++;
		}

		if (location == NULL)
		{
			temp = new listNode;
			temp->recordNum = userNum;
			for (int i = 0; toolName[i] == NULL; i++)
			{
				temp->toolName[i] = toolName[i];
			}
			temp->quantity = intInput;
			temp->cost = doubleInput;
			temp->next = headListSorted;
			headListSorted = temp;

			previous->next = temp;
			temp->next = location;
		}

		if (location->recordNum > userNum)
		{
			temp = new listNode;
			temp->recordNum = userNum;
			for (int i = 0; toolName[i] == NULL; i++)
			{
				temp->toolName[i] = toolName[i];
			}
			temp->quantity = intInput;
			temp->cost = doubleInput;
			temp->next = headListSorted;
			headListSorted = temp;

			previous->next = temp;
			temp->next = location;
		}
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

	listSortedHead = 0;
	

	addRecord(arrSorted, arrUnsorted, listSortedHead, listUnsortedHead, ons);


	//cout << arrSorted[0].recordNum << endl;;
	return 0;
}