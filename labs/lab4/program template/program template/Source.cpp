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

//####################################################################

#include "VECTOR_H.h"

//####################################################################

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################

	//REQUIRED CODE

	Vector a, b(3), c(3);

	a.print();			//outputs[]
	b.print();			//outputs[0 0 0]
	c.set(0, -1);		//outputs error message
	c.set(1, 0);
	c.set(2, 1);
	c.set(3, 2);
	c.set(4, 3);		//outputs error message
	c.print();			//outputs[1 2 3]

	Vector d(c);
	d.print();			//outputs[1 2 3]

	d.set(0, 1);
	d.print();			//outputs [1 0 3]
	c.print();			//outputs [1 2 3] proves deep copy

	//My code after this point

	Vector e(a);
	e.print();			//outputs []
	a.print();			//outputs []
	e.changeSize(4);	//change size of vector
	e.set(2, 2);
	e.print();			//outputs [0 0 2 0]
	a.print();			//outputs []



	//####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

