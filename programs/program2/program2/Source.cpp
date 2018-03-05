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

#define onFile "pay.dat"

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
	double taxCode;
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

	void setTaxCode(string input)
	{
		while (input != "1" && input != "2" && input != "3")
		{
			cout << "Invalid tax rate code entered. Enter 1, 2, or 3" << endl;
			cin >> input;
		}

		if (input == "1")
		{
			taxCode = 25;
		}
		else if (input == "2")
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

		weeklyPay = weeklyPay * (1 - (taxCode / 100));	//tax
	}

	void printSalaryEmp()
	{
		line();
		cout << "Employee name : " << getFirstName() << " " << getLastName() << endl;
		cout << "Social security number: xxx-xx-" << getSsn().at(7) << getSsn().at(8) << getSsn().at(9) << getSsn().at(10) << endl;
		cout << "Employee number: " << getEmpNum() << endl;
		cout << "Annual Pay: " << getAnnualPay() << endl;
		calcWeeklyPay();
		cout << "Weekly pay: $" << getWeeklyPay() << endl;
		cout << "Taxe rate: " << taxCode << "%" << endl;
		line();
	}


};

class hourlyEmployee : public employee
{
private:
	double hourPay;
	double hoursWorked;
	double weeklPay;

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
		while (input > 60)
		{
			cout << "Cannot be more than 60 hours worked. Enter another value" << endl;
			cin >> input;
		}
		hoursWorked = input;
	}

	double getWeeklyPay()
	{
		return weeklPay;
	}

	void setWeeklyPay(double input)
	{
		weeklPay = input;
	}


	

};

class hourlyEmployeePay : public hourlyEmployee
{
private:
	double taxCode;
	char workStatus;


public:

	int getTaxCode()
	{
		return taxCode;
	}

	void setTaxCode(string input)
	{
		while (input != "1" && input != "2" && input != "3")
		{
			cout << "Invalid tax rate code entered. Enter 1, 2, or 3" << endl;
			cin >> input;
		}

		if (input == "1")
		{
			taxCode = 25;
		}
		else if (input == "2")
		{
			taxCode = 20;
		}
		else
		{
			taxCode = 15;
		}
	}

	char getWorkStatus()
	{
		return workStatus;
	}

	void setWorkStatus(char input)
	{
		while (input != 'f' && input != 'F' && input != 'p' && input != 'P')
		{
			cout << "Invalid work status. Please enter F or P" << endl;
			cin >> input;
		}
			if (input == 'f' || input == 'F')
			{
				workStatus = 'F';
			}
			else
			{
				workStatus = 'P';
			}
		
	}

	void calcWeeklyPay()
	{
		double calc = 0;
		double calc2 = 0;
		if (getHoursWrorked() <= 40)
		{
			setWeeklyPay(getHoursWrorked() * getHourPay());
		}
		else if (getHoursWrorked() > 40)		//over time
		{
			calc = getHourPay() * 40;
			calc2 = (getHoursWrorked() - 40) * (getHourPay() * 1.5);
			setWeeklyPay(calc + calc2);
		}

		setWeeklyPay((getWeeklyPay() * (1 - (taxCode / 100))));		//tax
	}


	void printHourlyEmp()
	{
		line();
		cout << "Employee name : " << getFirstName() << " " << getLastName() << endl;
		cout << "Social security number: xxx-xx-" << getSsn().at(7) << getSsn().at(8) << getSsn().at(9) << getSsn().at(10) << endl;
		cout << "Employee number: " << getEmpNum() << endl;

		calcWeeklyPay();
		cout << "Weekly pay: $" << getWeeklyPay() << endl;
		cout << "Taxe rate: " << taxCode << "%" << endl;
		cout << "Work status: " << getWorkStatus() << endl;
		line();
	}
};
//##############################

class agencyEmployeePay : public hourlyEmployeePay
{
private:
	string company;

public:

	string getCompany()
	{
		return company;
	}

	void setCompany(string input)
	{
		company = input;
	}

	void printAgenctEmp()
	{
		line();
		cout << "Employee name : " << getFirstName() << " " << getLastName() << endl;
		cout << "Social security number: xxx-xx-" << getSsn().at(7) << getSsn().at(8) << getSsn().at(9) << getSsn().at(10) << endl;
		cout << "Employee number: " << getEmpNum() << endl;
		cout << "Company to pay: " << company << endl;
		calcWeeklyPay();
		cout << "Weekly pay: $" << getWeeklyPay() << endl;
		cout << "Taxe rate: " << getTaxCode() << "%" << endl;
		cout << "Work status: " << getWorkStatus() << endl;
		line();
	}

};
//##############################

int main()
{
	line();
	cout << "Welcome to the employee paymetn program!";
	line();
	//####################################################################

	ifstream out;

	out << "This is a test" << endl;
	
	string yes = "";
	double doubleInput = 0.0;
	int intInput = 0;
	char charInput = 'a';
	employee x;
	
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


	cout << "Salary employee (1), Hourly Employee (2), or Agency Employee (3)" << endl;
	cin >> yes;
	while (yes != "1" && yes != "2" && yes != "3")
	{
		cout << "Invalid response. Please enter 1, 2, or 3" << endl;
		cin >> yes;
	}

	if (yes == "1")		//Salary employee
	{
		salaryEmployeePay a;

		a.setFirstName(x.getFirstName());
		a.setLastName(x.getLastName());
		a.setSsn(x.getSsn());
		a.setEmpNum(x.getEmpNum());



		cout << "Salary annual pay: ";
		cin >> doubleInput;
		a.setAnnualPay(doubleInput);
		cout << "Tax rate code (1 = 25%, 2 = 20%, 3 = 15%): ";
		cin >> yes;
		a.setTaxCode(yes);


		a.printSalaryEmp();
	}
	else if (yes == "2")		//hourly employee
	{
		hourlyEmployeePay y;

		y.setFirstName(x.getFirstName());
		y.setLastName(x.getLastName());
		y.setSsn(x.getSsn());
		y.setEmpNum(x.getEmpNum());



		cout << "Hourly pay: ";
		cin >> doubleInput;
		y.setHourPay(doubleInput);

		cout << "Work status (F = full time, P = part time): ";
		cin >> charInput;
		y.setWorkStatus(charInput);

		cout << "Hours worked (in one week): ";
		cin >> doubleInput;
		y.setHoursWorked(doubleInput);

		cout << "Tax code: ";
		cin >> yes;
		y.setTaxCode(yes);


		y.calcWeeklyPay();

		cout << "Weekly pay: $" << y.getWeeklyPay();

		y.printHourlyEmp();
	}
	else		//agency employee
	{
		agencyEmployeePay z;

		z.setFirstName(x.getFirstName());
		z.setLastName(x.getLastName());
		z.setSsn(x.getSsn());
		z.setEmpNum(x.getEmpNum());


		
		cout << "Hourly pay: ";
		cin >> doubleInput;
		z.setHourPay(doubleInput);

		cout << "Work status (F = full time, P = part time): ";
		cin >> charInput;
		z.setWorkStatus(charInput);

		cout << "Hours worked (in one week): ";
		cin >> doubleInput;
		z.setHoursWorked(doubleInput);

		cout << "Tax code: ";
		cin >> yes;
		z.setTaxCode(yes);

		cout << "Company to pay: ";
		cin >> yes;
		z.setCompany(yes);

		z.calcWeeklyPay();

		cout << "Weekly pay: $" << z.getWeeklyPay();

		z.printAgenctEmp();

	}


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}
