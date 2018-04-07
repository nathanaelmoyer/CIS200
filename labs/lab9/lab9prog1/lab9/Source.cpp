//Program Name
//Nathanael Moyer
//Date


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

using namespace std;

#define inFile "data.dat"
#define onFile "out.txt"

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

bool isEmpty(ifstream& input)
{
	return input.peek() == ifstream::traits_type::eof();
}

struct node
{
	int value;
	node * next;
	node * prev;
};

template <typename T> class listClass
{
private:
	node * head = NULL;
	node * location = NULL;
	node * previous = NULL;
	node * tail = NULL;

	int size = 0;


public:
	listClass()
	{
	}
	~listClass()
	{
	}

	T PUSH(T input)
	{
		size = 0;
		if (head == NULL)
		{
			head = new node;
			head->value = input;
			head->next = NULL;
			head->prev = NULL:
		}
		else
		{
			location = head;
			previous = location;
			while (location->next != NULL)
			{
				location = location->next;
				if (size > 0)
				{
					previous = previous->next;
				}
				size++;
			}
			location->next = new node;
			location->prev = previous;
			localion->next->value = input;
		}
	}

	T POP()
	{
		T end;
		location = head;
		previous = location;
		while (location->next != NULL)
		{
			location = location->next;
			
		}
		location->prev->next = NULL;
		end = location->value;
		delete location;

		return end;


	}

	T PEEK()
	{
		while (location->next != NULL)
		{
			location = location->next;

		}

		return location->value;
	}

	bool ISFULL()
	{
		if (size == 5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool ISEMPTY()
	{
		if (size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};


template <typename T> class arrayClass
{
private:
	T value[5];
	int size;

public:
	arrayClass()
	{
		size = 0;
		
	}
	~arrayClass()
	{
	}

	T PUSH(T input)
	{
		if (ISFULL() == false)
		{
			value[size] = input;
			size++;
		}
		else
		{
			return 0;
		}
	}

	T POP()
	{
		if (ISEMPTY() == false)
		{
			size--;
			return value[size + 1];

		}
	}

	T PEEK()
	{
		return value[size - 1];
	}

	bool ISFULL()
	{
		if (size == 5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool ISEMPTY()
	{
		if (size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	

};


template <typename T> 
T minMaxFunc(listClass<T> stack, string input)	//returns min or max value based on input
{

	return 0;
}

template <typename T>
listClass<T> listBuild(T array[], int &size)
{
	listClass<T> result;
	arrayClass<T> temp;

	
	for (int i = 0; i < 5; i++)
	{


		if (i == 0)
		{
			temp.PUSH(array[i]);
		
		}
		else
		{
			temp.PUSH(array[i]);
		
		}

	}

	return result;
}



int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	ifstream ins;
	ofstream ons;

	ins.open(inFile); //open file
	ons.open(onFile); //open file
	ins.peek();
		  
	if (ins.fail())	//check if file is exists
	{
		cout << "***ERROR: File " << inFile << " does not exist***" << endl;
		ins.close();
		ons.close();
		return 0;
	}

	if (isEmpty(ins)) //check if file is empty
	{
		cout << "***ERROR: File " << inFile << " is empty***" << endl;
		ins.close();
		ons.close();
		return 0;
	}

	if (ons.fail())	//check if file is exists
	{
		cout << "***ERROR: File " << onFile << " does not exist***" << endl;
		ons.close();
		ins.close();
		return 0;
	}

	/*int size = 5;
	int arr[5] = { 1, 3, 6, 4, 8 };
	listClass<int> head;
	listClass<int> location;


	head = listBuild(arr, size);
	location = head;
	
	do
	{
		cout << location->value << " ";
		location = location->next;
	} while (location != NULL));*/
		
		


	





	/*string choice = "";

	cout << "Max(1) or min(2) value" << endl;
	cin >> choice;
	while (choice != "1" && choice != "2")
	{
		cout << "Invalid input" << endl;
		cin >> choice;
	}*/

	


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

