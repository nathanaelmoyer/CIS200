#ifndef VECTOR_H
#define VECTOR_H

//#include <iostream>

class Vector
{

public:
	Vector();						//Defualt constructor

	Vector(int s);
									//makes size = s
									//allocates s space
									// e.g. entries = new int[size]
									//makes all entries 0

	Vector(const Vector & other);
	
									//copy constructor
									//makes a deep copy

	~Vector();						//default deconstructor

	void print();					//prints out the vector
	
	void set(int val, int pos);		//if 0<=pos<size
	
									//stores val at pos in entries
									//otherwise
									//error message
	void changeSize(Vector other);
private:
	int size;						//sets the # of elements used
	int *entries;					//point to array of integers with size entries
									//e.g. entries = new int[size]


};


#endif