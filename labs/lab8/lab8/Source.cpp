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

struct nodes	//node pointers
{
	node * head = NULL;
	node * forward = NULL;
	node * backward = NULL;
	node * location = NULL;
	node * temp = NULL;

	node * forwardEven = NULL;
	node * backwardEven = NULL;
};

void assignList(nodes &list, fstream &ints, int &sizeOfList)
{
	sizeOfList = 0;
	while (!ints.eof())
	{
		if (list.head == NULL)
		{
			list.head = new node;
			list.location = list.head;
			ints >> list.location->number;
			list.location->next = NULL;

		}
		else
		{
			list.location->next = new node;
			list.location = list.location->next;
			ints >> list.location->number;
			list.location->next = NULL;
		}
		sizeOfList++;
	}

	list.location = list.head;
}

//void sortList(struct node **head_ref, int &sizeOfList)
//{
//	struct node * sorted = NULL;	//initialze sorted linked list
//
//	struct node * current = * head_ref;
//
//	while (current != NULL)
//	{
//		struct node * next = current->next;
//
//
//	}
//
//}




void sortList(struct node** head_ref)
{
	
}


void printListAscending(nodes &list, int &sizeOfList)	//print list in ascending order
{


	line();
	cout << "List in ascending order: " << endl;
	cout << "Size of list: " << sizeOfList << endl;
	while (list.location != NULL)
	{
		cout << list.location->number << " ";
		list.location = list.location->next;
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

	
	nodes list;		//node pointers
	int sizeOfList = 0;
	assignList(list, ints, sizeOfList);		//assign list to linked list
	


	string response = "f";


	cout << "Print list of integers in ascending or descedning order? (A/D)" << endl;
	cin >> response;
	while (response != "d" && response != "D" && response != "a" && response != "A")
	{
		cout << "Invalid response" << endl;
		cin >> response;
	}

	sortList(&list.head);	//sort list

	printListAscending(list, sizeOfList);	//print list in ascending order

	ints.close();

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}