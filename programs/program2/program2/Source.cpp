//Program Name
//Nathanael Moyer
//Date


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

class employee
{
private:
	string lastName;
	string firstName;
	string ssn;				//MIGHT HAVE TO CHANGE VARIABLE TYPE
	char empNum[4];

public:
	employee()
	{
		lastName = "xx";
		firstName = "xxx";
		ssn = "xxx-xx-xxxx";		//MIGHT HAVE TO CHANGE
	}
	string getFirstName()
	{
		return firstName;
	}
	void setFirstName(string input)
	{
		firstName = input;
	}

	string getLastName()
	{
		return lastName;
	}
	void setLastName(string input)
	{
		lastName = input;
	}

	string getSsn()
	{
		return ssn;
	}
	void setSsn(string input)
	{
		ssn = input;
	}


};

class salaryEmployeePay : public employee
{
private:
	int taxCode;
	double annualPay;
	double weeklyPay;

public:
	


};

class hourlyEmployee : public employee
{
private:
	double hourPay;
	double hoursWorked;

public:




};

class hourlyEmployeePay : public hourlyEmployee
{
private:
	double weekPay;
	int taxCode;
	double const otRate = 1.5;	//overtime rate
	char workStatus;


public:




};

class agencyEmployeePay : public hourlyEmployeePay
{
private:
	string company;

public:




};

int main()
{
	line();
	cout << "Welcome to the employee paymetn program!";
	line();
	//####################################################################

	salaryEmployeePay x;
	string yes = "";
	
	cin >> yes;
	x.setFirstName(yes);
	cin >> yes;
	x.setLastName(yes);
	cin >> yes;
	x.setSsn(yes);

	cout << x.getFirstName() << " " << x.getLastName() << " " << x.getSsn();




	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}
