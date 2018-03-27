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

//struct nodes	//node pointers
//{
//	node * head = NULL;
//	node * forward = NULL;
//	node * backward = NULL;
//	node * location = NULL;
//	node * temp = NULL;
//
//	node * forwardEven = NULL;
//	node * backwardEven = NULL;
//};

void assignList(struct node **list, fstream &ints, int &sizeOfList)
{
	node * head = NULL;
	node * forward = NULL;
	node * backward = NULL;
	node * location = NULL;
	node * temp = NULL;

	node * forwardEven = NULL;
	node * backwardEven = NULL;

	sizeOfList = 0;
	while (!ints.eof())
	{
		if (head == NULL)
		{
			head = new node;
			location = head;
			ints >> location->number;
			location->next = NULL;

		}
		else
		{
			location->next = new node;
			location = location->next;
			ints >> location->number;
			location->next = NULL;
		}
		sizeOfList++;
	}

	location = head;
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




//void sortList(struct node * ints)
//{
//	int swapped, i;
//	struct node *ptr1;
//	struct node *lptr = NULL;
//
//	/* Checking for empty list */
//	if (ptr1 == NULL)
//		return;
//
//	do
//	{
//		swapped = 0;
//		ptr1 = ints;
//
//		while (ptr1->next != lptr)
//		{
//			if (ptr1->number > ptr1->next->number)
//			{
//				swap(ptr1, ptr1->next);
//				swapped = 1;
//			}
//			ptr1 = ptr1->next;
//		}
//		lptr = ptr1;
//	} while (swapped);
//}


void printListAscending(struct node *list, int &sizeOfList)	//print list in ascending order
{
	struct node *temp = list;

	line();
	cout << "List in ascending order: " << endl;
	cout << "Size of list: " << sizeOfList << endl;
	while (temp != NULL)
	{
		printf("%d ", temp->number);
		//cout << list->number << " ";
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

	
	struct node *list;		//node pointers
	int sizeOfList = 0;
	assignList(&list, ints, sizeOfList);		//assign list to linked list
	


	string response = "f";


	cout << "Print list of integers in ascending or descedning order? (A/D)" << endl;
	cin >> response;
	while (response != "d" && response != "D" && response != "a" && response != "A")
	{
		cout << "Invalid response" << endl;
		cin >> response;
	}

	//sortList(ints);	//sort list

	printListAscending(list, sizeOfList);	//print list in ascending order

	ints.close();
	log.close();

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}