//final
//Nathanael Moyer
//Date 4-19-18


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

struct listrec
{
	char value;
	listrec *next;
};

void shallowcopy(listrec *&head_old, listrec *&head_new)
{
	head_new = head_old;
}

void deepcopy(listrec *head_old, listrec *&head_new)
{
	
	for (int i = 0; i < 4; i++)
	{
		head_new->value = head_old->value;
		head_new = head_new->next;
		head_old = head_old->next;
	}
	//I have no idea what I am doing here
}

void emptylist(listrec *& input)
{
	if (input == NULL)
	{
		cout << "List already is empty" << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			input->value = NULL;
			input = input->next;
		}
		delete input;
	}
}

void addnode(listrec *input, char chInput)
{
	listrec *location = NULL;
	listrec *tail = NULL;

	if (chInput == 'X')
	{
		tail = input->next->next;
	}
	else
	{
		tail = input->next->next->next;
	}
	
	location = tail;
	
		if (input == NULL)
		{
			input = new listrec;
			location = input;
			location->value = chInput;
			location->next = NULL;
		}
		else
		{
			location->next = new listrec;
			location = location->next;
			location->value = chInput;
			location->next = NULL;
		}

}

void printlist(listrec *input)
{
	listrec *temp = NULL;
	temp = input;

	if (temp == NULL)
	{
		cout << "Empty list";
	}
	while (temp != NULL)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	listrec *head_old = NULL, *head_new = NULL;

	listrec *location = NULL;

	char arr[3] = { 'a', 'c', 'w' };

	//create list
	for (int i = 0; i < 3; i++)
	{
		if (head_old == NULL)
		{
			head_old = new listrec;
			location = head_old;
			location->value = arr[i];
			location->next = NULL;
		}
		else
		{
			location->next = new listrec;
			location = location->next;
			location->value = arr[i];
			location->next = NULL;
		}
	}

	location = head_old;

	shallowcopy(head_old, head_new);

	printlist(head_old);

	printlist(head_new);

	

	addnode(head_old, 'X');

	printlist(head_old);

	printlist(head_new);



	deepcopy(head_old, head_new);

	printlist(head_old);

	printlist(head_new);

	

	addnode(head_old, 'Z');
	
	printlist(head_old);

	printlist(head_new);



	emptylist(head_new);

	printlist(head_old);
	
	printlist(head_new);

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

