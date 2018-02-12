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

	a.print(a);			//outputs[]
	b.print(b);			//outputs[0 0 0]
	c.set(0, -1);		//outputs error message
	c.set(1, 0);
	c.set(2, 1);
	c.set(3, 2);
	c.set(4, 3);		//outputs error message
	c.print(c);			//outputs[1 2 3]

	Vector d(c);
	d.print(d);			//outputs[1 2 3]

	d.set(0, 1);
	d.print(d);			//outputs [1 0 3]
	c.print(c);			//outputs [1 2 3] proves deep copy

	//My code after this point

	Vector e(3);
	e.print(e);

	


	//####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}

