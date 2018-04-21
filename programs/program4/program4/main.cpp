//Program Name
//Nathanael Moyer
//Date


#include <iostream>//cin and cout operators
#include <string>//string class
#include <iomanip>//manipulators for output
#include <fstream>//file stream for files
#include <cstdlib>//c math operators and many other basic funcitons
#include <assert.h>//assert header file for the assert operator
#include <vector>
#include <queue>//priority queue

#include "Data.h"

using namespace std;

#define onFile "out.txt"

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}


class MinHeap
{
	int *heaparray; // pointer to array of elements in heap
	int capacity;   // maximum possible size of min heap
	int heap_size;  // Current number of elements in min heap
public:
	
	// Constructor
	MinHeap(int capacity);
	
	// to heapify a subtree with root at given index
	void MinHeapify(int);

	// to get index of parent of node at index i
	int parent(int i) { return (i - 1) / 2; }

	// to get index of left child of node at index i
	int left(int i) { return (2 * i + 1); }

	// to get index of right child of node at index i
	int right(int i) { return (2 * i + 2); }

	// to extract the root which is the minimum element
	int extractMin();

	// Returns the minimum key (key at root) from min heap
	int getMin() { return heaparray[0]; }

	// Inserts a new key 'k'
	void insertKey(int k);
};

MinHeap::MinHeap(int cap)
{
	heap_size = 0;
	capacity = cap;
	heaparray = new int[cap];
}

// Inserts a new key 'k'
void MinHeap::insertKey(int k)
{
	if (heap_size == capacity)
	{
		cout << "\nOverflow: Could not insertKey\n";
		return;
	}

	// First insert the new key at the end
	heap_size++;
	int i = heap_size - 1;
	heaparray[i] = k;

	// Fix the min heap property if it is violated
	while (i != 0 && heaparray[parent(i)] > heaparray[i])
	{
		swap(&heaparray[i], &heaparray[parent(i)]);
		i = parent(i);
	}
}

int MinHeap::extractMin()
{
	if (heap_size <= 0)
		return INT_MAX;
	if (heap_size == 1)
	{
		heap_size--;
		return heaparray[0];
	}

	// Store the minimum value, and remove it from heap
	int root = heaparray[0];
	heaparray[0] = heaparray[heap_size - 1];
	heap_size--;
	MinHeapify(0);

	return root;
}

void MinHeap::MinHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if (l < heap_size && heaparray[l] < heaparray[i])
		smallest = l;
	if (r < heap_size && heaparray[r] < heaparray[smallest])
		smallest = r;
	if (smallest != i)
	{
		swap(&heaparray[i], &heaparray[smallest]);
		MinHeapify(smallest);
	}
}


// A utility function to swap two elements
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

struct Data
{
	int arrivalTime;
	int processingTime;
	char jobType;
};


int main()
{
	line();
	cout << "Welcome to my program!";
	line();
	//####################################################################
	
	
	fstream ons;
	ons.open(onFile);
	ons << "File " << onFile << " opened" << endl << endl;

	cout << "File " << onFile << " opened" << endl << endl;

<<<<<<< HEAD
=======
	Data A = { (4 + rand() % 3), (1 + rand() % 5), 'A' };
	Data B = { (9 + rand() % 3), (6 + rand() % 5), 'A' };
	Data C = { (24 + rand() % 3), (11 + rand() % 5), 'A' };
	Data D = { (25 + rand() % 11), (8 + rand() % 5), 'A' };

	bool cpuStatus = false;// true = cpu is busy false = cpu is idle

	for (int i = 1; i <= 10000; i++)
	{
		//if (i < 500)//wait 500 time units before outputting data
		//{
		//	if (cpuStatus == false)
		//	{
		//		if ((i % A.arrivalTime) == 0)
		//		{
		//			cpuStatus = true;
		//		}
		//		if ((i % B.arrivalTime) == 0)
		//		{
		//			cpuStatus = true;
		//		}
		//		if ((i % C.arrivalTime) == 0)
		//		{
		//			cpuStatus = true;
		//		}


		//	}
		//	else
		//	{
		//		//do nothing since cpu is busy
		//	}
		//}
		//
		if (i >= 500)//start outputting data
		{
			//command line output
			cout << i << ") ";

			if (cpuStatus == false)
			{
				if ((i % A.arrivalTime) == 0)
				{
					cout << "Job A hast started";
					cpuStatus = true;
				}
				if ((i % B.arrivalTime) == 0)
				{
					cout << "Job B has started";
					cpuStatus = true;
				}
				if ((i % C.arrivalTime) == 0)
				{
					cout << "Job C has started";
					cpuStatus = true;
				}
			}
			else
			{
				cout << "CPU is busy";
			}
					

			cout << endl;


			//file output
			ons << i << ") ";
			ons << endl;
		}
>>>>>>> parent of c5123d6... Job A is a shit hole

	
	


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}