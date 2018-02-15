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
	for (int i = 0; i < size; i++)
	{
		entries[i] = 0;
	}
	
	
}

Vector::Vector(const Vector & other)
{
	entries = new int[other.size];
	size = other.size;
	for (int i = 0; i < other.size; i++)
	{
		entries[i] = other.entries[i];
	}
	
}


Vector::~Vector()
{
}


void Vector::print()
{
	cout << endl << "Size of vector: " << size << endl<< "Values in vector:" << endl << "[ ";
	for (int i = 0; i < size; i++)
	{
		cout << entries[i] << " ";
	}
	cout << "]" <<endl << endl;
	
}


void Vector::set(int val, int pos)
{
	if (pos < 0)
	{
		cout << "***ERROR: Position " << pos << " is out of range***" << endl;
	}
	else if (pos > size - 1)
	{
		cout << "***ERROR: Position " << pos << " is greater than size (" << size << ") of specified vector***" << endl;
	}
	else
	{
		entries[pos] = val;
	}
}


void Vector::changeSize(Vector other)
{
	size = other.size;
	entries = new int[size];
	for (int i = 0; i < size; i++)
	{
		entries[i] = 0;
	}
	
	
}