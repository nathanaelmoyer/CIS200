//Nathanael Moyer
//1-23-18
//Program 1

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;


class myString
{
private:
	char name[25];


public:
	myString()
	{
		
	}
	myString(char firstString[25])
	{
		for (size_t i = 0; i < 24; i++)
		{
			name[i] = firstString[i];
		}
		
	}

	string getString()
	{
		return name;
	}
	void setString(char firstString[25])
	{
		for (size_t i = 0; i < 24; i++)
		{
			name[i] = firstString[i];
		}
		
	}

	int size()
	{
		return 0;
	}

	void addStart(string firstString)
	{
		/*name = firstString + name;*/
		operator+ (firstString, name);
	}

};

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


int main()
{
	line();
	cout << "Welcome to the myString program!";
	line();

	//############################################################################

	myString instance1;
	myString instance2;
	char inString[25];










	/*cout << instance1.getString() << endl;
	cin >> inString;
	instance1.setString(inString);
	cout << instance1.getString() << endl;
	cout << "Lenght: " << instance1.size() << endl;

	cout << "add" << endl;
	cin >> inString;
	instance1.addStart(inString);
	cout << "New: " << inString << endl;*/
	





	//#############################################################################

	line();
	cout << "Thank you for running the myString program written by Nathan";
	line();

	return 0;
}