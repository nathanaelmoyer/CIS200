//Lab 9 prog 2
//Nathanael Moyer
//Date 4/5/18


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator

using namespace std;

#define onFile "out.txt"

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


template <class T>
class A
{
private:
	T valuea;
public:
	A()
	{

	}
	A(const A & x)
	{
		valuea = x.valuea;
	}
	~A()
	{

	}

	T getValuea() const { return valuea; }
	void setValuea(T x) { valuea = x; }
};


template <class T>
class B : public A <T>
{
private:
	T valueb;
public:
	B()
	{

	}
	B(const B & x)
	{
		valueb = x.valueb;
	}
	~B()
	{

	}

	T getValueb() const { return valueb; }
	void setValueb(T x) { valueb = x; }

};

struct Date
{
	int day;
	int month;
	int year;
};


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	ofstream ons;
	ons.open(onFile);

	if (ons.fail())	//check if file is exists
	{
		cout << "***ERROR: File " << onFile << " does not exist***" << endl;
		ons.close();
		return 0;
	}

	B<float> floatType;

	floatType.setValuea(1.34);
	floatType.setValueb(3.14);

	cout << "Float type" << endl;
	cout << "Valuea: " << floatType.getValuea() << endl;
	cout << "Valueb: " << floatType.getValueb() << endl;

	ons << "Float type" << endl;
	ons << "Valuea: " << floatType.getValuea() << endl;
	ons << "Valueb: " << floatType.getValueb() << endl;

	line();
	ons << endl << "--------------------------------------------------------------------------------" << endl;

	B<int> intType;

	intType.setValuea(1.34);
	intType.setValueb(3.14);

	cout << "Int type" << endl;
	cout << "Valuea: " << intType.getValuea() << endl;
	cout << "Valueb: " << intType.getValueb() << endl;

	ons << "Int type" << endl;
	ons << "Valuea: " << intType.getValuea() << endl;
	ons << "Valueb: " << intType.getValueb() << endl;

	line();
	ons << endl << "--------------------------------------------------------------------------------" << endl;

	B<char> charType;


	charType.setValuea('a');
	charType.setValueb('c');

	cout << "Char type" << endl;
	cout << "Valuea: " << charType.getValuea() << endl;
	cout << "Valueb: " << charType.getValueb() << endl;

	ons << "Char type" << endl;
	ons << "Valuea: " << charType.getValuea() << endl;
	ons << "Valueb: " << charType.getValueb() << endl;

	line();
	ons << endl << "--------------------------------------------------------------------------------" << endl;

	B<string> stringType;

	stringType.setValuea("good");
	stringType.setValueb("morning");

	cout << "String type" << endl;
	cout << "Valuea: " << stringType.getValuea() << endl;
	cout << "Valueb: " << stringType.getValueb() << endl;

	ons << "String type" << endl;
	ons << "Valuea: " << stringType.getValuea() << endl;
	ons << "Valueb: " << stringType.getValueb() << endl;

	line();
	ons << endl << "--------------------------------------------------------------------------------" << endl;

	B<Date> dateType;

	dateType.setValuea({27, 10, 2015});
	dateType.setValueb({ 2,11,2015 });

	cout << "Date type" << endl;
	cout << "Valuea: " << dateType.getValuea().month << "/" << dateType.getValuea().day << "/" << dateType.getValuea().year << endl;
	cout << "Valuea: " << dateType.getValueb().month << "/" << dateType.getValueb().day << "/" << dateType.getValueb().year << endl;
	
	ons << "Date type" << endl;
	ons << "Valuea: " << dateType.getValuea().month << "/" << dateType.getValuea().day << "/" << dateType.getValuea().year << endl;
	ons << "Valuea: " << dateType.getValueb().month << "/" << dateType.getValueb().day << "/" << dateType.getValueb().year << endl;

	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

