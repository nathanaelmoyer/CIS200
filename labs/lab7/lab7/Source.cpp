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
	sortedListNode * temp = NULL;
	char charArray[255];
	strcpy_s(charArray, input.c_str());

	int i = 0;
	while (i < input.size())
	{
		
		temp->letter = charArray[i];
		temp = temp->next;
		i++;
	}
	//sort(temp->letter.begin(), temp->letter.end());
	
	
	return temp;
}

void printList(sortedListNode * input)
{
	while (input != NULL)
	{
		cout << input->letter << endl;
		input = input->next;

	}
}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################
	

	string word1;
	string word2;
	sortedListNode * list1;
	/*sortedListNode * list2;
	sortedListNode * list3;*/

	cout << "Enter first word: ";
	cin >> word1;
	/*cout << "Enter second word: ";
	cin >> word2;*/
	
	char charArray[255];
	strcpy_s(charArray, word1.c_str());
	//charCopy(word1, charArray);

	/*for (int i = 0; i < word1.size(); i++)
	{
		cout << charArray[i];
	}
	cout << endl;
*/
	

	list1 = fromString(word1);
	cout << "Letter list from word one: " << endl;
	while (list1 != NULL)
	{
		cout << list1->letter << endl;
		list1 = list1->next;
	}
	
	//printList(list1);

	
	

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}