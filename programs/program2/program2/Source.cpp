//Program 2
//Nathanael Moyer
//Date 2-20-2018


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <assert.h>

using namespace std;

#define onFile "pay.dat"
ofstream file;

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
		file << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << endl;
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
		file << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << endl;
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



	file.open(onFile);
	file << "Create instance of file variable" << endl;
	file << "Open file pay.dat" << endl;

	//####################################################################
	line();
	cout << "Welcome to the employee payment program!";
	line();

	file << "Print welcome message to screen" << endl << endl;
	//####################################################################

	
	
	
	
	string stringInput = "";
	file << "Initialize string stringInput" << endl;
	double doubleInput = 0.0;
	file << "Initialize double doubleInput" << endl;
	int intInput = 0;
	file << "Initialize int intInput" << endl;
	char charInput = 'a';
	file << "Initialize char charInput" << endl;
	employee x;
	file << "Initialize employee class instance x" << endl << endl;
	
	cout << "First name: ";
	file << "Ask user for first name" << endl;
	cin >> stringInput;
	file << "User entered: " << stringInput << endl;
	file << "Call employee function setFirstName(stringInput)" << endl << endl;
	x.setFirstName(stringInput);
	

	cout << "Last name: ";
	file << "Ask user for last name" << endl;
	cin >> stringInput;
	file << "User entered: " << stringInput << endl;
	file << "Call employee function setLastName(stringInput)" << endl << endl;
	x.setLastName(stringInput);
	

	cout << "SSN: ";
	file << "Ask user for ssn" << endl;
	cin >> stringInput;
	file << "User entered: " << stringInput << endl;
	file << "Call employee function setSsn(stringInput)" << endl << endl;
	x.setSsn(stringInput);
	

	cout << "Emp num: ";
	file << "Ask user for emp num" << endl;
	cin >> stringInput;
	file << "User entered: " << stringInput << endl;
	file << "Call employee function setEmpNum(stringInput)" << endl << endl;
	x.setEmpNum(stringInput);
	


	file << "Ask user which type of employee they are entering data for. Salary (1), Hourly(2), or Agency(3)." << endl;
	file << "The user is to enter an integer corresponding to the type of employee." << endl;
	cout << "Salary employee (1), Hourly Employee (2), or Agency Employee (3)" << endl;
	cin >> stringInput;
	file << "User entered: " << stringInput << endl << endl;
	while (stringInput != "1" && stringInput != "2" && stringInput != "3")
	{
		file << "***ERROR: User entered incorrect data***" << endl;
		file << "User must enter new data for type of employee" << endl;

		cout << "Invalid response. Please enter 1, 2, or 3" << endl;
		cin >> stringInput;

		file << "User entered: " << stringInput << endl << endl;
	}

	if (stringInput == "1")		//Salary employee
	{
		
		salaryEmployeePay a;
		file << "Created instance of salaryEmployeePay class" << endl;

		file << "Copied firstName, lastName, ssn, and empNum using set functions from employee instance to salaryEmployeePay Instance" << endl;
		a.setFirstName(x.getFirstName());
		a.setLastName(x.getLastName());
		a.setSsn(x.getSsn());
		a.setEmpNum(x.getEmpNum());
		



		cout << "Salary annual pay: ";
		file << "Ask user for salary annual pay" << endl;
		cin >> doubleInput;
		file << "User entered: " << doubleInput << endl;
		file << "Call setAnnualPay from salaryEmployee class: setAnnualPay(doubleInput)" << endl;
		a.setAnnualPay(doubleInput);
		


		cout << "Tax rate code (1 = 25%, 2 = 20%, 3 = 15%): ";
		file << "Ask user for tax rate code. 1 = 25%, 2 = 20%, 3 = 15%" << endl;
		cin >> stringInput;
		file << "User entered: " << stringInput << endl;
		file << "Call setTaxCode function from salaryEmployee class: setTaxCode(stringInput)" << endl;
		a.setTaxCode(stringInput);
		


		a.printSalaryEmp();
	}
	else if (stringInput == "2")		//hourly employee
	{
		hourlyEmployeePay y;
		file << "Created instance of hourlyEmployeePay class" << endl;

		file << "Copy firstName, lastName, ssn, and empNum using set functions from employee instance to hourlyEmployeePay Instance" << endl;
		y.setFirstName(x.getFirstName());
		y.setLastName(x.getLastName());
		y.setSsn(x.getSsn());
		y.setEmpNum(x.getEmpNum());
		


		cout << "Hourly pay: ";
		file << "Ask user for hourly pay" << endl;
		cin >> doubleInput;
		file << "User entered: " << doubleInput << endl;
		file << "Call setHourlyPay(doubleInput) from hourlyEmployee class" << endl;
		y.setHourPay(doubleInput);
		


		cout << "Work status (F = full time, P = part time): ";
		file << "Ask user for work status. (F = full time, P = part time)" << endl;
		cin >> charInput;
		file << "User entered: " << charInput << endl;
		file << "Call setWorkStatus(charInput) from hourlyEmployeePay class" << endl;
		y.setWorkStatus(charInput);
		


		cout << "Hours worked (in one week): ";
		file << "Ask user for hours worked" << endl;
		cin >> doubleInput;
		file << "User entered: " << doubleInput << endl;
		file << "Call setHoursWorked(doubleInput) from hourlyEmployee class" << endl;
		y.setHoursWorked(doubleInput);
		


		cout << "Tax rate code (1 = 25%, 2 = 20%, 3 = 15%): ";
		file << "Ask user for tax rate code. (1 = 25%, 2 = 20%, 3 = 15%)" << endl;
		cin >> stringInput;
		file << "User entered: " << stringInput << endl;
		file << "Call setTaxCode(stringInput) from hourlyEmployeePay class" << endl;
		y.setTaxCode(stringInput);
		

		file << "Call calcWeeklyPay() from hourlyEmployeePay class" << endl;
		y.calcWeeklyPay();
		
		file << "Call printHourlyEmp() from hourlyEmployeePay class" << endl;
		y.printHourlyEmp();
	}
	else		//agency employee
	{
		agencyEmployeePay z;
		file << "Created instance of agencyEmployeePay class" << endl;

		file << "Copy firstName, lastName, ssn, and empNum using set functions from employee instance to agencyEmployeePay Instance" << endl;
		z.setFirstName(x.getFirstName());
		z.setLastName(x.getLastName());
		z.setSsn(x.getSsn());
		z.setEmpNum(x.getEmpNum());


		
		cout << "Hourly pay: ";
		file << "Ask user for hourly pay" << endl;
		cin >> doubleInput;
		file << "User entered: " << doubleInput << endl;
		file << "Call setHourlyPay(doubleInput) from hourlyEmployee class" << endl;
		z.setHourPay(doubleInput);

		cout << "Work status (F = full time, P = part time): ";
		file << "Ask user for work status. (F = full time, P = part time)" << endl;
		cin >> charInput;
		file << "User entered: " << charInput << endl;
		file << "Call setWorkStatus(charInput) from hourlyEmployeePay class" << endl;
		z.setWorkStatus(charInput);

		cout << "Hours worked (in one week): ";
		file << "Ask user for hours worked" << endl;
		cin >> doubleInput;
		file << "User entered: " << doubleInput << endl;
		file << "Call setHoursWorked(doubleInput) from hourlyEmployee class" << endl;
		z.setHoursWorked(doubleInput);

		cout << "Tax rate code (1 = 25%, 2 = 20%, 3 = 15%): ";
		file << "Ask user for tax rate code. (1 = 25%, 2 = 20%, 3 = 15%)" << endl;
		cin >> stringInput;
		file << "User entered: " << stringInput << endl;
		file << "Call setTaxCode(stringInput) from hourlyEmployeePay class" << endl;
		z.setTaxCode(stringInput);

		cout << "Company to pay: ";
		file << "Ask user for company to pay" << endl;
		cin >> stringInput;
		file << "User entered: " << stringInput << endl;
		file << "Call setCompany(stringInput) from agencyEmployeePay class" << endl;
		z.setCompany(stringInput);


		file << "Call calcWeeklyPay() from hourlyEmployeePay class" << endl;
		z.calcWeeklyPay();


		file << "Call printHourlyEmp() from hourlyEmployeePay class" << endl;
		z.printAgenctEmp();

	}


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();
	
	file << endl << "Print thank you message to screen" << endl;


	return 0;
}
