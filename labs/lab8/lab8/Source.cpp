//Lab 8
//Nathanael Moyer
//Date 3-22-18


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

using namespace std;

#define inFile "integer.dat"
#define onFile "log.txt"

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

struct node
{
	int number;
	node * next;
	node * prev;
};


void sortList(node * head, int sizeOfList)
{
	node * curr = head;
	node * next;
	int temp;

	while (curr && curr->next)
	{

		node * next = curr->next;
		while (next)
		{
			if (curr->number > next->number)
			{
				swap(next->number, curr->number);
			}
			next = next->next;
		}
		curr = curr->next;
	}
}


void printList(node *list)	//print list
{
	node *temp = NULL;
	temp = list;
		
	while (temp != NULL)
	{
		cout << temp->number << " ";
		temp = temp->next;
	}
}



int main()
{
	fstream ints;
	ints.open(inFile);	//open file
	line();
	if (ints.fail())	//check if file is open
	{
		cout << "***ERROR: Failed to open file integer.dat***" << endl;
		return 0;
	}
	else
	{
		cout << "integer.dat opened" << endl;
	}

	ofstream log;
	log.open(onFile);	//open file
	if (log.fail())		//check if file is open
	{
		cout << "***ERROR: Failed to open file log.txt***" << endl;
		return 0;
	}
	else
	{
		cout << "log.txt opened" << endl;
	}
	line();


	//####################################################################
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################


	struct node *list = NULL;		//node pointers

	int a[20];
	int sizeOfList = 0;
	while (!ints.eof() && sizeOfList <= 20)	//assign values in file to array
	{
		ints >> a[sizeOfList];
		sizeOfList++;
	}


	node * head = NULL;
	node * tail = NULL;
	node * next = NULL;
	node * prev = NULL;
	node * location = NULL;
	node * temp = NULL;

	node * nextEven = NULL;
	node * prevEven = NULL;



	for (int i = 0; i < sizeOfList; i++)	//assign list to values in array
	{
		if (head == NULL)
		{
			head = new node;
			location = head;
			location->prev = NULL;
			location->number = a[i];
			location->next = NULL;
			tail = location;

		}
		else
		{
			location->next = new node;
			location = location->next;
			location->number = a[i];
			location->next = NULL;
			tail = location;

		}
	}



	sortList(head, sizeOfList);	//sort list

	string response = "f";


	cout << "Print list of integers in ascending or descedning order? (A/D)" << endl;
	cin >> response;
	while (response != "d" && response != "D" && response != "a" && response != "A")	//checking user input for response
	{
		cout << "Invalid response" << endl;
		cin >> response;
	}


	line();

	if (response == "a" || response == "A")		//printing file in ascending order
	{
		cout << "Ascending: ";
		printList(head);	//print list in ascending order
	}
	else		//printing file in descending order
	{
		cout << "Descending: ";
		printList(tail);
	}

	ints.close();
	log.close();

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}