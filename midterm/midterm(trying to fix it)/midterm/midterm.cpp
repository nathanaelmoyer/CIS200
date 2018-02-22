//Midterm
//Nathanael Moyer
//Date: 2-22-2018


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <assert.h>

using namespace std;



void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

class BankAccount
{
private:
	
	string accountNum;


public:
	double balance;
	BankAccount()
	{
		balance = 0.0;
		accountNum = "0000";
	};
	
	void setAccountNum(string input)
	{
		accountNum = input;
	}

	string getAccountNum()
	{
		return accountNum;
	}

	void setBalance(double input)
	{
		balance = input;
	}

	double getBalance()
	{
		return balance;
	}

	double withdraw(double amount)
	{
		balance = balance - amount;
		return balance;
	}

	double deposit(double amount)
	{
		balance = balance + amount;
		return balance;
	}




	~BankAccount()
	{

	};
};

class CheckingAccount : public BankAccount
{

private:
	int withdrawNum;
public:
	CheckingAccount()
	{
		withdrawNum = 0;
	};

	void Withdraw()
	{
		char response = 'a';
		int count = 0;
		double amount = 0;
		while (response != 'n' && response != 'N')
		{
			cout << "Enter amount you would like to withdraw from checking account" << endl;
			cin >> amount;
			
			if ((balance - amount) < 0)
			{
				cout << "Insuficcent funds" << endl;
				
			}
			else
			{
				cout << " New balance for checking account: " << withdraw(amount) << endl;

				count = count + 1;

				if (count == 3)
				{
					cout << "Maximum free withdrawals exceded. There will be a fee of $0.50 for every withdrawal from now on." << endl;
				}

				if (count >= 3)
				{
					withdraw(0.5);
				}
			}
			cout << "Would you like to make another withdrawal? (y/n)" << endl;
			cin >> response;
			while (response != 'n' && response != 'N' && response != 'y' && response != 'Y')
			{
				cout << "Invalid response. Enter (y/n)" << endl;
				cin >> response;
			}
			
		}
		
		
	}


	~CheckingAccount()
	{

	};
	
};

class SavingsAccount : public BankAccount
{
private:
	double annualInterest;
	double dailyInterest;
	int const days = 5;
	BankAccount x;
public:

	SavingsAccount()
	{
		annualInterest = 3;
		dailyInterest = annualInterest / 365;

	};

	double getBalance(double balance)
	{
		//double interest = x.getBalance() * dailyInterest;
		cout << "Balance after " << days << " days: " << x.deposit(balance * dailyInterest);
		return x.getBalance();
	}



	~SavingsAccount()
	{

	};
	
};





int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	double doubleInput;
	string stringInput;
	BankAccount x;
	CheckingAccount y;
	SavingsAccount z;

	





	cout << "Checking account" << endl;
	cout << "Enter account number" << endl;
	cin >> stringInput;
	x.setAccountNum(stringInput);

	

	cout << "Account number: " << x.getAccountNum() << endl;

	cout << "Balance: " << x.getBalance() << endl;

	cout << "Deposit amount: ";
	cin >> doubleInput;
	y.deposit(doubleInput);

	y.Withdraw();




	


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

