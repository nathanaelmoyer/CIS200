#ifndef VECTOR_H
#define VECTOR_H


template<class T>
class Vector
{
private:
	int size;				//sets the # of elements used
	int *entries;			//point to array of integers with size entries
							//e.g. entries = new int[size]

public:
	Vector();		//Defualt constructor

	Vector(int s)
	{
		size = s;
		entries = new int[size];
	}
					//makes size = s
					//allocates s space
					// e.g. entries = new int[size]
					//makes all entries 0

	Vector(const Vector & other)
	{

	}
									//copy constructor
									//makes a deep copy

	~Vector();		//default deconstructor

	void print(T input)		//prints out the vector
	{
		for (int i = 0; i < size; i++)
		{
			cout << input[i];
		}
		
	};
	void set(int val, int pos)		//if 0<=pos<size
	{

	};
									//stores val at pos in entries
									//otherwise
									//error message


};


#endif