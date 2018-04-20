//Lab 11
//Nathanael Moyer
//4-16-18

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

#define onFile "log.txt"




struct listNode
{
	int recordNum;
	string toolName;
	int quantity;
	double cost;
	listNode * next;
};

struct recordArr
{
	int recordNum;
	string toolName;
	int quantity;
	double cost;
};

void printList(listNode *list)	//print list
{
	listNode *temp = NULL;
	temp = list;

	if (temp == NULL)
	{
		cout << "Record does not exist" << endl;
	}
	while (temp != NULL)
	{
		cout << temp->recordNum << " ";
		cout << temp->toolName << " ";
		cout << temp->quantity << " ";
		cout << temp->cost << " ";
		cout << endl;
		temp = temp->next;
	}
}

void addRecord(recordArr arrSorted[], recordArr arrUnsorted[], listNode *&headListSorted, listNode * headListUnsorted, fstream &ons)
{

	listNode * location = NULL;
	listNode * temp = NULL;
	listNode * previous = NULL;

	string stringInput = "a";
	int intInput = 0;
	int userNum = 0;
	double doubleInput = 0.0;
	int comparisons = 0;

	cout << "Enter a record number: ";
	cin >> userNum;

	while (userNum < 1 || userNum > 100)	//check user input for record number
	{
		cout << "Invalid input. Record number must be 1-100" << endl;
		cin >> userNum;
	}


	while (location != NULL && location->recordNum != userNum)
	{
		location = location->next;
		comparisons++;
	}

	if (location == NULL)
	{
		cout << "Tool name: ";
		cin >> stringInput;

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


		//adding to sorted linked list
		comparisons = 0;
		if (headListSorted == NULL)
		{
			headListSorted = new listNode;
			location = headListSorted;
			location->recordNum = userNum;
			location->toolName = stringInput;

			location->quantity = intInput;
			location->cost = doubleInput;
			location->next = headListSorted;
			headListSorted = location;
			comparisons++;
		}
		if (headListSorted->recordNum > userNum)
		{
			temp = new listNode;
			temp->recordNum = userNum;
			location->toolName = stringInput;

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
				location->toolName = stringInput;

				temp->quantity = intInput;
				temp->cost = doubleInput;
				temp->next = headListSorted;
				headListSorted = temp;

				previous->next = temp;
				temp->next = location;
				comparisons++;
			}
			
			if (location->recordNum > userNum)
			{
				temp = new listNode;
				temp->recordNum = userNum;
				location->toolName = stringInput;

				temp->quantity = intInput;
				temp->cost = doubleInput;
				temp->next = headListSorted;
				headListSorted = temp;

				previous->next = temp;
				temp->next = location;
				comparisons++;
			}
			
		}
		
		ons << "Sorted linked list comparisons: " << comparisons << endl << endl;
		location = headListSorted;

		//End sorted linked list

		//add to unsorted linked list

		//end unsorted linked list

		//add to sorted array

		arrSorted[userNum - 1].cost = doubleInput;
		arrSorted[userNum - 1].quantity = intInput;
		arrSorted[userNum - 1].toolName = stringInput;
		comparisons = 1;
		ons << "Sorted array comparisons: " << comparisons << endl << endl;

		//end sorted array

		//add to unsorted array

		comparisons = 0;

		int x = 0;
		while (arrUnsorted[x].cost != 0)
		{
			arrUnsorted[x].cost = doubleInput;
			arrUnsorted[x].quantity = intInput;
			arrUnsorted[x].toolName = stringInput;
			x++;
		}


	}
}




int main()
{
	recordArr arrSorted[100];
	for (int i = 0; i < 100; i++)
	{
		arrSorted[i].recordNum = i + 1;
		arrSorted[i].toolName = " ";
		arrSorted[i].quantity = 0;
		arrSorted[i].cost = 0;
	}
	recordArr arrUnsorted[100];
	for (int i = 0; i < 100; i++)
	{
		arrUnsorted[i].recordNum = i + 1;
		arrUnsorted[i].toolName = " ";
		arrUnsorted[i].quantity = 0;
		arrUnsorted[i].cost = 0;
	}
	listNode * headSorted = NULL;
	listNode * headUnsorted = NULL;
	listNode * location = NULL;
	fstream outFile;

	outFile.open(onFile);

	cout << "Welcome to lab 11." << endl;
	

	addRecord(arrSorted, arrUnsorted, headSorted, headUnsorted, outFile);
	addRecord(arrSorted, arrUnsorted, headSorted, headUnsorted, outFile);

	for (int i = 0; i < 100; i++)
	{
		cout << arrSorted[i].toolName << " " << arrSorted[i].cost << " " << arrSorted[1].quantity << endl;

	}
	//printList(headSorted);
	
	

	
	return 0;
}