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
	
	outCredit.flush();

	//write data into the file

	string firstName = "";
	string lastName = "";
	
	char response = 'a';
	clientData client;

	ofstream outCredit1("credit.dat", ios::ate); //ios::ate = access anywhere
	while (response != 'n' && 'N')
	{

		cout << "Enter account number to edit. (1-100): ";
		cin >> client.accountNumber;
<<<<<<< HEAD
		while (client.accountNumber > 100 || client.accountNumber < 1)
		{
			cout << "Invalid account number." << endl;
			cin >> client.accountNumber;
		}
		
		
=======
		if (client.accountNumber == 0)
		{
			
		}
		else
		{
>>>>>>> parent of 1f7191e... fixed some dumb ass logic
			cout << "First name: ";
			cin >> firstName;
			while (firstName.size() > 10)
			{
				cout << "First name is too long. Must be 10 or less characters" << endl;
				cin >> firstName;
			}

			cout << "Last name: ";
			cin >> lastName;
			while (lastName.size() > 15)
			{
				cout << "Last name is too long. Must be 15 or less characters" << endl;
				cin >> lastName;
			}

			cout << "Account balance: ";
			cin >> client.balance;

			strcpy_s(client.firstName, firstName.c_str());
			strcpy_s(client.lastName, lastName.c_str());
		


		//cout << endl << client.firstName << endl << client.lastName << endl << client.balance << endl;

		outCredit1.seekp((client.accountNumber - 1) * sizeof(clientData));
		outCredit1.write(reinterpret_cast<const char *>(&client), sizeof(clientData));
		outCredit1.flush();

		cout << "Edit another account? (y/n)" << endl;
		cin >> response;
		while (response != 'n' && response != 'N' && response != 'y' && response != 'Y')
		{
			cout << "Invalid response" << endl;
			cin >> response;
		}

		line();
	}
	//read data from the file requested by user

	ifstream inCredit("credit.dat", ios::in);
	clientData print;


	char response2 = 'a';
	while (response2 != 'n' && 'N')
	{
<<<<<<< HEAD
		ifstream inCredit("credit.dat", ios::in);
		cout << "Account number to view(1-100): ";
		cin >> client.accountNumber;
		



			inCredit.seekg((client.accountNumber - 1) * sizeof(clientData));

			inCredit.read(reinterpret_cast<char *>(&client), sizeof(clientData));
			if (client.firstName == "" && client.accountNumber == 0)
=======

		cout << "Account number to view(1-100 or 0 to quit): ";
		cin >> print.accountNumber;
		if (print.accountNumber == 0)
		{
			
		}
		else
		{
			inCredit.seekg((print.accountNumber - 1) * sizeof(clientData));

			inCredit.read(reinterpret_cast<char *>(&print), sizeof(clientData));
			if (print.firstName == "" || print.accountNumber == 0)
>>>>>>> parent of 1f7191e... fixed some dumb ass logic
			{
				cout << "***ERROR: Account does not exist***" << endl;
			}
			else
			{
				cout << print.accountNumber << " " << print.firstName << " " << print.lastName << " " << print.balance << endl;
			}
<<<<<<< HEAD
=======
		
		}
>>>>>>> parent of 1f7191e... fixed some dumb ass logic

		
		cout << "View another account? (y/n)" << endl;
		cin >> response2;
		while (response2 != 'n' && response2 != 'N' && response2 != 'y' && response2 != 'Y')
		{
			cout << "Invalid response" << endl;
			cin >> response2;
		}
		
		line();
		
	}


	//print out all records that do not have accountNumber = 0

	
	cout << "Accounts that have been created: " << endl;
	inCredit.read(reinterpret_cast<char * >(&print), sizeof(clientData));

	while (inCredit && !inCredit.eof())
	{
		if (print.accountNumber != 0)
		{
			cout << endl;
			cout << "Account num: " << print.accountNumber << endl;
			cout << " Name: " << print.firstName << " " << print.lastName << endl;
			cout << " Balance: " << print.balance << endl;
			cout << endl;
		}

		inCredit.read(reinterpret_cast<char *>(&print), sizeof(clientData));
	}




	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

