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
	
	B<float> x;

	x.setValuea(1.34);
	x.setValueb(3.14);




	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

