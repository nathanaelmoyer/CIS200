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



void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

struct node
{
	int number;
	node * next;
};


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	node * head = NULL;
	node * previous = NULL;
	node * location = NULL;
	node * temp = NULL;



	for (int i = 5; i < 25; i = i + 5)
	{
		if (head == NULL)
		{
			head = new node;
			location = head;
			location->number = 5;
			location->next = NULL;
		}
		else
		{
			location->next = new node;
			location = location->next;
			location->number = i;
			location->next = NULL;

		}
	}

	location = head;
	while (location != NULL)
	{
		cout << location->number << endl;
		location = location->next;
	}




	int inputNum;
	cout << "Insert number: ";
	cin >> inputNum;

	if (head == NULL)
	{
		location = new node;
		location->number = inputNum;
		location->next = head;
		head = location;
	}
	else
	{
		previous = head;
		location = head->next;
		while (location != NULL && location->number < inputNum)
		{
			previous = location;
			location = location->next;
		}
		temp = new node;
		temp->number = inputNum;
		temp->next = location;
		previous->next = temp;
	}


	location = head;

	while (location != NULL)
	{
		cout << location->number << endl;
		location = location->next;
	}





	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}