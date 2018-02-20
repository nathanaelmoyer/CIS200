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
	string getfirstName()
	{
		return firstName;
	}
	string getLastName()
	{
		return lastName;
	}
	string getSsn()
	{
		return ssn;
	}

};

class salaryEmployeePay
{
private:
	int taxCode;
	double annualPay;
	double weeklyPay;

public:



};

class hourlyEmployee
{
private:
	double hourPay;
	double hoursWorked;

public:




};

class hourlyEmployeePay
{
private:
	double weekPay;
	int taxCode;
	double const otRate = 1.5;	//overtime rate
	char workStatus;


public:




};

class agencyEmployeePay
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






	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}
