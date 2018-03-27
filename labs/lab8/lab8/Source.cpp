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


void sortedInsert(struct node** head_ref, struct node* newNode)
{
	struct node* current;

	// if list is empty
	if (*head_ref == NULL)
		*head_ref = newNode;

	// if the node is to be inserted at the beginning
	// of the doubly linked list
	else if ((*head_ref)->number >= newNode->number) {
		newNode->next = *head_ref;
		newNode->next->prev = newNode;
		*head_ref = newNode;
	}

	else {
		current = *head_ref;

		// locate the node after which the new node
		// is to be inserted
		while (current->next != NULL &&
			current->next->number < newNode->number)
			current = current->next;

		/*Make the appropriate links */

		newNode->next = current->next;

		// if the new node is not inserted
		// at the end of the list
		if (current->next != NULL)
			newNode->next->prev = newNode;

		current->next = newNode;
		newNode->prev = current;
	}
}

void insertionSort(struct node** head_ref)
{
	// Initialize 'sorted' - a sorted doubly linked list
	struct node* sorted = NULL;

	// Traverse the given doubly linked list and
	// insert every node to 'sorted'
	struct node* current = *head_ref;
	while (current != NULL) {

		// Store next for next iteration
		struct node* next = current->next;

		// removing all the links so as to create 'current'
		// as a new node for insertion
		current->prev = current->next = NULL;

		// insert current in 'sorted' doubly linked list
		sortedInsert(&sorted, current);

		// Update current
		current = next;
	}

	// Update head_ref to point to sorted doubly linked list
	*head_ref = sorted;
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

	list.location = list.head;
	insertionSort(&list.head);	//sort list

	printListAscending(list, sizeOfList);	//print list in ascending order

	ints.close();

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}