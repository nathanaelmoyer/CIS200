//Lab 7
//Nathanael Moyer
//Date 3-15-18


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator
#include <algorithm>

using namespace std;



void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

void charCopy(string strInput, char chInput[])	//convert string to char array
{
	for (int i = 0; i < strInput.size(); i++)
	{
		chInput[i] = strInput[i];
	}
}

struct sortedListNode
{
	char letter;
	int occurrences;
	sortedListNode * next;
};

sortedListNode * fromString(string &input)
{
	sortedListNode * head = NULL;
	sortedListNode * previous = NULL;
	sortedListNode * location = NULL;
	sortedListNode * temp = NULL;

	for (int i = 0; i < input.size(); i++)
	{
		if (head == NULL)
		{
			head = new sortedListNode;
			location = head;
			location->letter = input.at(0);
			location->next = NULL;
			
		}
		else
		{
			location->next = new sortedListNode;
			location = location->next;
			location->letter = input.at(i);
			location->next = NULL;
			
		}
	}

	location = head;
	

	for (int i = 0; i < input.size(); i++)	// trying to add to occurrences
	{
		if (head != NULL)
		{
			location->occurrences = location->occurrences + 1;
			location = location->next;
		}
	}
		
	
	location = head;
	return location;
}

void printList(sortedListNode * input)
{
	while (input != NULL)
	{
		cout << "Letter: " << input->letter << setw(17) << "Occurrences: " << input->occurrences << endl;
		input = input->next;
	}
	cout << endl;
}




int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################
	
	char charArray1[255];	//words stored into arrays
	char charArray2[255];

	string word1;	//user input stored into string variables
	string word2;

	sortedListNode * list1 = NULL;
	sortedListNode * list2 = NULL;
	sortedListNode * list3 = NULL;

	cout << "Enter first word: ";
	cin >> word1;
	cout << "Enter second word: ";
	cin >> word2;
	
	
	sort(word1.begin(), word1.end());
	sort(word2.begin(), word2.end());
	

	cout << endl;
	
	strcpy_s(charArray1, word1.c_str());
	strcpy_s(charArray2, word2.c_str());

	

	list1 = fromString(word1);	//word one to list
	cout << "Letter list from word one: " << endl;
	printList(list1);	//print list from word one

	list2 = fromString(word2);	//word two to list
	cout << "Letter list from word two: " << endl;
	printList(list2);	//print list from word two

	//list3 = list1 + list2;	//operator combines lists
	//cout << "Letter list from both words" << endl;
	//printList(list2);	//print combine list

	
	

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}