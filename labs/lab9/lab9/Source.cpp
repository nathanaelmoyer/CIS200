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


template <typename T> class node
{
private:
	T value[5];

public:
	node()
	{
	}
	~node()
	{
	}

	T minMaxFunc(T value[5], string input)	//returns min or max value based on input
	{

		return 0;
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

	ins.open(inFile); //open file

					  
	if (ins.fail())	//check if file is exists
	{
		cout << "***ERROR: File data.dat does not exist***" << inFile << endl;
		ins.close();
		return 0;
	}

	if (isEmpty(ins)) //check if file is empty
	{
		cout << "***ERROR: File data.dat is empty***" << inFile << endl;
		ins.close();
		return 0;
	}

	if (ons.fail())	//check if file is exists
	{
		cout << "***ERROR: File out.txt does not exist***" << inFile << endl;
		ins.close();
		return 0;
	}


	node<int> * location = NULL;
	node<int> * head = NULL;
	node<int> * next = NULL;
	node<int> * temp = NULL;

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

