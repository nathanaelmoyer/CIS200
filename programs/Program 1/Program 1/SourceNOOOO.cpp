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
	int length = 0;

public:
	myString()
	{
		for (int i = 0; i < 25; i++)
		{
			name[i] = NULL;
		}
		
	}

	string getString()
	{
		return name;
	}
	void setString(char firstString[25])
	{
		
		for (int i = 0; i < 25; i++)
		{
			name[i] = firstString[i];
		}
	}

	int size()
	{
		for (int i = 0; name[i] != NULL; i++)
		{
			length++;
		}
		return length;
	}

	void addStart(myString x)
	{
		int y;
		if (length + x.length > 25)
		{
			for (int i = length; i < length; i++)
			{
				y = name[length - 1];
				name[length - 1] = name[i];
				name[i] = y;
			}
			for (int i = 0; i < 25; i++)
			{
				name[i] = x.charAt(i);
			}
		}
			
	}
	char charAt(int pos)
	{
		return name[pos];
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
	char inString2[25];

	
	cout << "Enter string" << endl;
	cin >> inString;

	instance1.setString(inString);

	cout << instance1.getString() << endl;

	cout << "Length of string: " << instance1.size() << endl;

	cout << "Enter characters to go before previous string" << endl;
	cin >> inString;
	instance2.setString(inString);
	instance2.size();


	instance1.addStart(instance2);

	cout << "New: ";
	cout << instance1.getString();
	
	





	//#############################################################################

	line();
	cout << "Thank you for running the myString program written by Nathan";
	line();

	return 0;
}