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


template <typename T> class listClass
{
private:
	T head;

public:
	listClass()
	{
	}
	~listClass()
	{
	}

	T minMaxFunc(T value[5], string input)	//returns min or max value based on input
	{

		return 0;
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
		size = 1;
		value = { -1, -1, -1, -1, -1 };
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
			return;
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
		return value[size];
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



int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	ifstream ins;
	ofstream ons;

	ins.open("data.dat"); //open file
	//ons.open("out.txt"); //open file
	ins.peek();
		  
	if (ins.fail())	//check if file is exists
	{
		cout << "***ERROR: File data.dat does not exist***" << endl;
		ins.close();
		ons.close();
		return 0;
	}

	if (isEmpty(ins)) //check if file is empty
	{
		cout << "***ERROR: File data.dat is empty***" << endl;
		ins.close();
		ons.close();
		return 0;
	}

	if (ons.fail())	//check if file is exists
	{
		cout << "***ERROR: File out.txt does not exist***" << endl;
		ons.close();
		ins.close();
		return 0;
	}


	listClass<int> * location = NULL;
	listClass<int> * head = NULL;
	listClass<int> * next = NULL;
	listClass<int> * temp = NULL;

	string choice = "";

	cout << "Max(1) or min(2) value" << endl;
	cin >> choice;
	while (choice != "1" && choice != "2")
	{
		cout << "Invalid input" << endl;
		cin >> choice;
	}

	


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

