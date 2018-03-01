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

		if (input == 1)
		{
			taxCode = 25;
		}
		else if (input == 2)
		{
			taxCode = 20;
		}
		else
		{
			taxCode = 15;
		}
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
		cout << "Taxe rate: " << taxCode << "%" << endl;
		line();
	}


};

class hourlyEmployee : public employee
{
private:
	double hourPay;
	double hoursWorked;
	double weekPay;

public:
	double getHourPay()
	{
		return hourPay;
	}
	
	void setHourPay(double input)
	{
		if (input < 10)
		{
			cout << "Hour pay cannot be less than 10. Enter another value." << endl;
			cin >> input;
		}
		hourPay = input;
	}

	double getHoursWrorked()
	{
		return hoursWorked;
	}

	void setHoursWorked(double input)
	{
		if (input > 60)
		{
			cout << "Cannot be more than 60 hours worked. Enter another value" << endl;
			cin >> input;
		}
		hoursWorked = input;
	}

	double getWeekPay()
	{
		return weekPay;
	}

	void setWeekPay(double input)
	{
		weekPay = input;
	}



};

class hourlyEmployeePay : public hourlyEmployee
{
private:
	int taxCode;
	double const otRate = 1.5;	//overtime rate
	char workStatus;


public:

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

		if (input == 1)
		{
			taxCode = 25;
		}
		else if (input == 2)
		{
			taxCode = 20;
		}
		else
		{
			taxCode = 15;
		}
	}

	double getOtRate()
	{
		return otRate;
	}

	char getWorkStatus()
	{
		return workStatus;
	}

	void setWorkStatus(char input)
	{
		while (input != 'f' || input != 'F' || input != 'p' || input != 'P')
		{
			cout << "Invalid work status. Please enter F or P" << endl;
			cin >> input;

			if (input == 'f' || input == 'F')
			{
				workStatus = 'F';
			}
			else if (input == 'p' || input == 'P')
			{
				workStatus = 'P';
			}
		}
	}



	void calcWeeklyPay()
	{
		double calc = 0;
		if (getHoursWrorked() <= 40)
		{
			setWeekPay(getHoursWrorked() * getHourPay());
		}
		else if (getHoursWrorked() > 40)
		{
			calc = getHourPay() * 40;
			setWeekPay(calc + ((getHoursWrorked() - 40) * otRate));
		}
	}


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

	hourlyEmployeePay y;
	salaryEmployeePay x;
	string yes = "";
	double doubleInput = 0.0;
	int intInput = 0;
	
	
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

	//Salary employee
	cout << "Salary annual pay: ";
	cin >> doubleInput;
	x.setAnnualPay(doubleInput);
	cout << "Tax rate code (1 = 25%, 2 = 20%, 3 = 15%): ";
	cin >> intInput;
	x.setTaxCode(intInput);


	x.printSalaryEmp();


	//hourly employee
	cout << "Hourly pay: ";
	cin >> doubleInput;
	y.setHourPay(doubleInput);

	cout << "Hours worked (in one week): ";
	cin >> doubleInput;
	y.setHoursWorked(doubleInput);





	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}
