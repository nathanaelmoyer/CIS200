//Nathanael Moyer
//1-23-18
//Program 1

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

class myString
{
private:
	char name[26];
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
	void setString(char firstString[26])
	{
		
		for (int i = 0; i > 25; i++)
		{
			name[i] = firstString[i];
		}
	}

	int size()
	{
		length = 0;
		for (int i = 0; name[i] != NULL; i++)
		{
			length++;
		}
		return length;
	}

	void addStart(myString x)
	{
		char temp[25];
		char temp2[25];
		x.setString(temp2);
		//if (length + x.size() > 25)
		//{
		for (int i = length; i = 0; i--)
		{
			temp[i] = name[i];
		}
		for (int i = length; i = 0; i--)
		{
			name[i] = temp2[i] + temp[i];
		}
		/*x.size();
		for (int i = length + 1; name[i] != NULL; i++)
		{
			name[i] = temp[i];
		}*/
			
		//}
			
	}

	void replWholeString(char firstString[25])
	{
		for (int i = 0; i < 25; i++)
		{
			name[i] = firstString[i];
		}
	}

	char charAt(int pos)
	{
		return name[pos];
	}

	bool emptyString()
	{

		int a = 0;
		for (int i = 0; i < length; i++)
		{
			if (name[i] != NULL)
			{
				a = a + 1;
			}
		}

		
		return a;
	}

	bool fullString()
	{
		int a = 0;
		for (int i = 0; i < length; i++)
		{
			if (name[i] != NULL)
			{
				a = a + 1;
			}
		}


		return a;
	}

	void initString()
	{
		for (int i = 0; i > 25; i++)
		{
			name[i] = NULL;
		}
		
	}
	void printString()
	{
		for (int i = 0; i > length; i++)
		{
			cout << name[i];
		}
	}
};

void printMenu()
{
	line();
	cout << "Pleae enter the coresponding number to execute a function" << endl;
	cout << "1: Length of string" << endl;
	cout << "2: Add characters to beginning of string" << endl;
	cout << "3: Add characters to end of string" << endl;
	cout << "4: Print part of the string" << endl;
	cout << "5: Replace part of the string" << endl;
	cout << "6: Replace the whole string" << endl;
	cout << "7: Check if string is empty" << endl;
	cout << "8: Check if string is full" << endl;
	cout << "9: Compare input with current string" << endl;
	cout << "10: Return a character at a specific position" << endl;
	cout << "11: Set string to null" << endl;
	cout << "12: Print the string" << endl;
	line();
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

	printMenu();

	cout << "Enter string" << endl;
	cin >> inString;

	instance1.setString(inString);

	cout << instance1.getString() << endl;

	cout << "Length of string: " << instance1.size() << endl;
	
	if (instance1.fullString() == 25)
	{
		cout << "String is full" << endl;
	}
	else
	{
		cout << "String is not full" << endl;
	}




	/*cout << "Enter characters to go before previous string" << endl;
	cin >> inString;
	instance2.setString(inString);
	instance1.addStart(instance2);
	

	cout << "New: ";
	cout << instance1.getString() << endl;
	cout << "Length of string: " << instance1.size() << endl;
	*/





	//#############################################################################

	line();
	cout << "Thank you for running the myString program written by Nathan";
	line();

	return 0;
}