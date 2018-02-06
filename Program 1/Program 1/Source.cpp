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
		length = 0;
		for (int i = 0; name[i] != NULL; i++)
		{
			length++;
		}
		return length;
	}

	void addStart(myString x)
	{
	/*	char temp[25];
		char temp2[25];
		x.setString(temp2);*/
		
			
	}

	void addEnd(myString x, char firstString[25])
	{
		int startPos = length + 1;
		int y = 0;
		for (int i = startPos; firstString[y] != NULL; i++)
		{
			name[i] = firstString[y];
		}
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

	bool compareString(char firstString[25])
	{
		bool status = true;
		
		for (int i = 0; i > length; i++)
		{
			if (name[i] != firstString[i])
			{
				status = false;
			}
		}

		return status;
	}

	int partString(int startPos,int length)
	{


		return 0;
	}

	void replPartString(char firstString[25], int startPos)
	{
		int x = 0;
		for (int i = startPos - 1; firstString[x] != NULL && i < length ; i++)
		{
			
			name[i] = firstString[x];
			x++;
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
	cout << "13: Exit the program" << endl;
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
	int startPos = 0;

	printMenu();

	cout << "Enter string" << endl;
	cin >> inString;

	instance1.setString(inString);
	cout << "Length of string: " << instance1.size() << endl;
	cout << instance1.getString() << endl;
	
	
	cout << "Enter starting position" << endl;
	cin >> startPos;

	cout << "Enter second string" << endl;

	cin >> inString;
	
	instance1.addEnd(instance1, inString);
	cout << "New string: " << instance1.getString() << endl;





	/*int a = instance1.compareString(inString2);
	if (a = 1)
	{
		cout << "Strings are not equal" << endl;
	}
	else
	{
		cout << "Strings are equal" << endl;
	}
*/


	
	//if (instance1.fullString() == 25)
	//{
	//	cout << "String is full" << endl;
	//}
	//else
	//{
	//	cout << "String is not full" << endl;
	//}




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