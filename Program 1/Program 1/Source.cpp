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
	myString()	//set all chars in array to NULL
	{
		for (int i = 0; i < 25; i++)
		{
			name[i] = NULL;
		}
		
	}

	string getString()		//return array as string
	{
		return name;
	}

	void setString(char firstString[25])		//set input to array
	{
		
		for (int i = 0; i < 25; i++)
		{
			name[i] = firstString[i];
		}
	}

	int size()		//return the length of the array
	{
		length = 0;
		for (int i = 0; name[i] != NULL; i++)
		{
			length++;
		}
		return length;
	}

	void addStart(myString x)		//add input to the beginning of original array
	{
	/*	char temp[25];
		char temp2[25];
		x.setString(temp2);*/
		
			
	}

	void addEnd(myString x, char firstString[25])	//add input to the end of the original array
	{
		int startPos = length + 1;
		int y = 0;
		for (int i = startPos; firstString[y] != NULL; i++)
		{
			name[i] = firstString[y];
		}
	}

	void replWholeString(char firstString[25])	//replace input for the original array
	{
		for (int i = 0; i < 25; i++)
		{
			name[i] = firstString[i];
		}
	}

	char charAt(int pos)	//return character at a specified position
	{
		return name[pos];
	}	

	bool emptyString()	//check if array is NULL
	{
	
		int a = 0;
		for (int i = 0; i < length; i++)
		{
			if (name[i] != NULL)
			{
				a = a + 1;
			}
		}
		if (a > 0)
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}
	
	bool fullString()	//check if array is full(has 25 chars)
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

	void initString()	//set array to NULL
	{
		for (int i = 0; i > 25; i++)
		{
			name[i] = NULL;
		}
		
	}

	void printString()	//print current array
	{
		for (int i = 0; i > length; i++)
		{
			cout << name[i];
		}
		cout << endl;
	}

	bool compareString(char firstString[25])	//check if input and original array are equal
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

	int partString(int startPos,int length)	//return myString from current myString starting at a specified position
	{


		return 0;
	}

	void replPartString(char firstString[25], int startPos)	//replace part of a string with input
	{
		int x = 0;
		for (int i = startPos - 1; firstString[x] != NULL && i < length ; i++)
		{
			
			name[i] = firstString[x];
			x++;
		}
	}
};

void printMenu()	//print the menu for the user
{
	line();
	cout << "Pleae enter the coresponding number to execute a function" << endl;
	cout << "0: Do nothing" << endl;
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
	cout << endl;
	cout << "Choice: ";
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
	int user;

	

	cout << "Enter initial string" << endl;		
	cin >> inString;						// take in inital string
	instance1.setString(inString);		//set input as array


	char response = 'a';
	while (response != 'n')
	{



		instance1.size();		//return length of array

		printMenu();		//print menu of options
		cin >> user;

		switch (user)
		{
		case 0:
			break;
		case 1:
			cout << instance1.getString() << endl;
			cout << "Length of string: " << instance1.size() << endl;
			line();
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			cout << "Enter starting position" << endl;
			cin >> startPos;

			cout << "Enter second string" << endl;

			cin >> inString;

			instance1.replPartString(inString, startPos);
			cout << "New string: " << instance1.getString() << endl;
			line();
			break;

		case 6:
			cout << "Enter string to replace with original" << endl;
			cin >> inString;
			instance1.replWholeString(inString);
			cout << "New string: " << instance1.getString() << endl;
			line();
			break;
		case 7:
			if (instance1.emptyString() == 0)
			{
				cout << "String is not empty" << endl;
			}
			else
			{
				cout << "String is empty" << endl;
			}
			line();

			break;
		case 8:

			break;
		case 9:

			break;
		case 10:

			break;
		case 11:
			instance1.initString();
			cout << "String is now NULL" << endl;
			line();
			break;
		case 12:

			break;
		case 13:

			break;
		default:
			cout << "Invalid response. Please enter a number 0-13." << endl;
			break;
		}

		cout << "Would you like to make another action? (y/n)" << endl;
		cin >> response;
		while (response != 'n' && response != 'y')
		{
			cout << "Please make a vaid choice. (y/n)" << endl << endl;
			cin >> response;
		}

	
	}
	
	


	
	
	
	





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