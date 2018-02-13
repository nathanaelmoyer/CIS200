#include "VECTOR_H.h"
#include <iostream>
using namespace std;

Vector::Vector()
{
}

Vector::Vector(int s)
{
	
	size = s;
	entries = new int[size];
	
}

Vector::Vector(const Vector & other)
{

}


Vector::~Vector()
{
}


void Vector::print()
{
	cout << "Values in specified vector: ";
	for (int i = 0; i < size; i++)
	{
		cout << entries[i];
	}

}


void Vector::set(int val, int pos)
{
	if (pos < 0)
	{
		cout << "Position is out of range" << endl;
	}
	else if (pos > size)
	{
		cout << "Position is greater than size of vector" << endl;
	}
	else
	{
		entries[pos] = val;
	}
}


