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
		
		for (int i = 0; i < 26; i++)
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

	void addStart(char inPut[25])		//add input to the beginning of original array
	{
		
			
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
		for (int i = 0; i < 26; i++)
		{
			name[i] = firstString[i];
		}
	}

	char charAt(int pos)	//return character at a specified position
	{
		pos = pos - 1;
		return name[pos];
	}	

	bool emptyString()	//check if array is NULL
	{
	
		if (name[0] == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
	
	bool fullString()	//check if array is full(has 25 chars)
	{
		if (length = 25)
		{
			return true;
		}
		else
		{
			return false;
		}
	
		
	}

	void initString()	//set array to NULL
	{
		for (int i = 0; i < 25; i++)
		{
			name[i] = NULL;
		}
		
	}

	void printString()	//print current array
	{
		for (int i = 0; i < length; i++)
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

	string partString(int startPos)	//return myString from current myString starting at a specified position
	{
		char part[25];
		if (startPos = length)
		{
			return NULL;
		}
		for (int i = 0; i < length; i++)
		{
			int x = startPos;
			
			part[i] = name[x];

			x++;
		}

		return part;
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
	int userResponse;

	

	cout << "Enter initial string" << endl;		
	cin >> inString;						// take in inital string
	instance1.setString(inString);		//set input as array
	while (instance1.size() > 25)
	{
		cout << "String is too long. Please enter a string of 25 characters or less" << endl;
		cin >> inString;
		instance1.setString(inString);
	}

	char response = 'a';
	while (response != 'n')
	{



		instance1.size();		//return length of array

		printMenu();		//print menu of options
		cin >> userResponse;

		while (userResponse != 1 && userResponse != 2 && userResponse != 3 && userResponse != 4 && 
			userResponse != 5 && userResponse != 6 && userResponse != 7 && userResponse != 8 && userResponse != 9 && 
			userResponse != 10 && userResponse != 11 && userResponse != 12 && userResponse != 13)
		{
			cout << "Invalid response. Please enter a number 1-13." << endl;
			cin >> userResponse;
		}

		switch (userResponse)
		{
		
		case 1:	//check size
			cout << instance1.getString() << endl;
			cout << "Length of string: " << instance1.size() << endl;
			line();
			break;


		case 2:	//add to start of array
			cout << "This function does not work" << endl;
			line();
			break;


		case 3:	//add to end of array
			cout << "This function does not work" << endl;
			line();
			break;


		case 4:	//print part of string

			cout << "This function does not work" << endl;
			line();
			break;


		case 5:	//Replace part of the string

			cout << "Enter starting position" << endl;
			cin >> startPos;

			cout << "Enter second string" << endl;

			cin >> inString;

			instance1.replPartString(inString, startPos);
			cout << "New string: " << instance1.getString() << endl;
			line();
			break;


		case 6:	//Replace the whole string
			cout << "Enter string to replace with original" << endl;
			cin >> inString;
			instance1.replWholeString(inString);
			cout << "New string: " << instance1.getString() << endl;
			line();
			break;


		case 7:	//Check if string is empty
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


		case 8:	//Check if string is full
			if (instance1.fullString() == 0)
			{
				cout << "String is not full" << endl;
			}
			else
			{
				cout << "String is full" << endl;
			}
			line();

			break;


		case 9:	//Compare input with current string
			cout << "This function does not work" << endl;
			line();
			break;


		case 10: //Return a character at a specific position
			cout << "Enter position of character" << endl;
			cin >> startPos;
			cout << "Character: " << instance1.charAt(startPos) << endl;
			line();
			break;


		case 11: //Set array to NULL

			cout << "String is now NULL" << endl;
			line();
			break;


		case 12:	//Print the array
			cout << "Current string: ";
			instance1.printString();
			line();
			break;


		case 13:	//exit program
			line();
			cout << "Thank you for running the myString program written by Nathan";
			line();

			return 0;
			break;
		default:
			
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
	

	//#############################################################################

	line();
	cout << "Thank you for running the myString program written by Nathan";
	line();

	return 0;
}