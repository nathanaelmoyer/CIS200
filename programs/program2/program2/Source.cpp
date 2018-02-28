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

//##############################
class employee
{
private:
	string lastName;
	string firstName;
	string ssn;
	string empNum;

public:
	employee()	//default constructor sets default values
	{
		lastName = "xx";
		firstName = "xxx";
		ssn = "xxx-xx-xxxx";
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
//##############################

class salaryEmployeePay : public employee
{
private:
	int taxCode;
	double annualPay;
	double weeklyPay;

public:
	salaryEmployeePay()	//default constructor sets default values
	{
		taxCode = 0;
		annualPay = 0.0;
		weeklyPay = 0.0;
	}

	int getTaxCode()
	{
		return taxCode;
	}

	void setTaxCode(double input)
	{
		while (input < 0 || input > 3)
		{
			cout << "Invalid tax rate code entered. Enter 1, 2, or 3" << endl;
			cin >> input;
		}
		taxCode = input;
	}

	double getAnnualPay()
	{
		return annualPay;
	}

	void setAnnualPay(double input)
	{
		while (input < 0)
		{
			cout << "Invalid pay entered. Please enter a value greater than zero." << endl;
			cin >> input;
		}
		annualPay = input;
	}

	double getWeeklyPay()
	{
		return weeklyPay;
	}

	void setWeeklyPay(double input)
	{
		weeklyPay = input;
	}

	void calcWeeklyPay()
	{
		weeklyPay = annualPay / 52;
	}

	void printSalaryEmp()
	{
		line();
		cout << "Employee name : " << getFirstName() << " " << getLastName() << endl;
		cout << "Social security number: " << getSsn() << endl;
		cout << "Employee number: " << getEmpNum() << endl;
		cout << "Annual Pay: " << getAnnualPay() << endl;
		calcWeeklyPay();
		cout << "Weekly pay: " << getWeeklyPay() << endl;
		line();
	}


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
//##############################

class agencyEmployeePay : public hourlyEmployeePay
{
private:
	string company;

public:




};
//##############################

int main()
{
	line();
	cout << "Welcome to the employee paymetn program!";
	line();
	//####################################################################

	salaryEmployeePay x;
	string yes = "";
	double doubleInput = 0.0;
	int intInput = 0;
	
	//Salary employee
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

	cout << "Salary annual pay: ";
	cin >> doubleInput;
	x.setAnnualPay(doubleInput);
	cout << "Tax rate code: ";
	cin >> intInput;
	x.setTaxCode(intInput);


	


	x.printSalaryEmp();


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}
