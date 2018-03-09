//Lab 6
//Nathanael Moyer
//Date 3-8-2018


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

using namespace std;



void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


struct clientData
{
	int accountNumber;
	char lastName[15];
	char firstName[10];
	float balance;
};


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	//initializing default data for account numbers

	ofstream outCredit("credit.dat", ios::out);

	clientData blankClient = { 0, "", "", 0.0 };

	for (int i = 0; i < 100; i++)
	{
		outCredit.write(reinterpret_cast<const char *>(&blankClient), sizeof(clientData));
		
	}
	


	//write data into the file

	clientData client;

	ofstream outCredit1("credit.dat", ios::ate); //ios::ate = access anywhere

	cout << "Enter account number to edit. (1-100 or 0 to quit): ";
	cin >> client.accountNumber;
	if (client.accountNumber == 0)
	{
		;
	}
	else
	{
		cout << "First name: ";
		cin >> client.firstName;
		cout << "Last name: ";
		cin >> client.lastName;
		cout << "Account balance: ";
		cin >> client.balance;
		
		
	}

	//cout << endl << client.firstName << endl << client.lastName << endl << client.balance << endl;

	outCredit1.seekp((client.accountNumber - 1) * sizeof(clientData));
	outCredit.write(reinterpret_cast<const char *>(&client), sizeof(clientData));

	line();

	//read data from the file requested by user

	ifstream inCredit("credit.dat", ios::in);

	cout << "Account number to view(1-100 or 0 to quit): ";
	cin >> client.accountNumber;

	inCredit.seekg((client.accountNumber - 1) * sizeof(clientData));

	inCredit.read(reinterpret_cast<char *>(&client), sizeof(clientData));

	inCredit >> client.accountNumber;
	inCredit >> client.firstName;
	inCredit >> client.lastName;
	inCredit >> client.balance;
	cout << client.accountNumber << " " << client.firstName << " " << client.lastName << " " << client.balance << endl;
	
	line();

	//print out all records that do not have accountNumber = 0

	/*ifstream inCredit("credit.dat", ios::out);

	inCredit.read(reinterpret_cast<char *>(&client), sizeof(clientData));

	while (inCredit && !inCredit.eof())
	{
		if (client.accountNumber != 0)
		{
			
		}

		inCredit.read(reinterpret_cast<char *>(&client), sizeof(clientData));
	}*/




	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

