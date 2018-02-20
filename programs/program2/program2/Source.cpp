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
	string empNum;

public:
	employee()
	{
		lastName = "xx";
		firstName = "xxx";
		ssn = "xxx-xx-xxxx";		//MIGHT HAVE TO CHANGE
		empNum = "xxx-L";
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
		while (input.size() != 11)
		{
			cout << "Invalid ssn entered. Please enter in the correct format. (xxx-xx-xxxx)" << endl;
			cin >> input;
		}
		while (input.at(3) != '-' || input.at(6) != '-')
		{
			cout << "Invalid ssn entered. Please enter in the correct format. (xxx-xx-xxxx)" << endl;
			cin >> input;
		}
		ssn = input;
	}

	string getEmpNum()
	{
		return empNum;
	}
	void setEmpNum(string input)
	{
		while (input.size() != 5)
		{
			cout << "Invalid employee number entered. Plese enter in the correct formant. (xxx-L)" << endl;
			cin >> input;
		}
		while (input.at(3) != '-')
		{
			cout << "Invalid employee number entered. Plese enter in the correct formant. (xxx-L)" << endl;
			cin >> input;
		}
		empNum = input;
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
	
	cout << "First name: ";
	cin >> yes;
	x.setFirstName(yes);
	cout << "Last name: ";
	cin >> yes;
	x.setLastName(yes);
	cout << "SSN: ";
	cin >> yes;
	x.setSsn(yes);
	cout << "Emp num: ";
	cin >> yes;
	x.setEmpNum(yes);

	cout << x.getFirstName() << " " << x.getLastName() << " " << x.getSsn() << " " << x.getEmpNum();




	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}
