//Program 4
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


using namespace std;

#define onFile "out.txt"

void line()
{

	cout << endl << "--------------------------------------------------------------------------------" << endl;

}

// A utility function to swap two elements
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
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
	void insertKey(int k, char jobType, int &numJobsInterrupted, bool idleStatus);

	int getHeapSize()//get the size of the queue
	{
		return heap_size;
	}
};

MinHeap::MinHeap(int cap)
{
	heap_size = 0;
	capacity = cap;
	heaparray = new int[cap];
}

// Inserts a new key 'k'
void MinHeap::insertKey(int k, char jobType, int &numJobsInterrupted, bool idleStatus)
{
	fstream ons;
	ons.open(onFile);
	if (heap_size == capacity)
	{
		cout << "\nOverflow: Could not insertKey\n";
		ons << "\nOverflow: Could not insertKey\n";
		return;
	}

	
	heap_size++;
	int i = heap_size - 1;
	if (jobType == 'D')//if jobType is D then put next in queue
	{
		
		if (idleStatus == false)
		{
			heaparray[0] = k;
			numJobsInterrupted++;
		}
	
	}
	else// First insert the new key at the end
	{
		heaparray[i] = k;
	}
	
	

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

	MinHeap queue1(4000);
	Data jobs[10000];

	int counter = 0;	//used to know when to know what time jobs are placed
	int b = 0; //used to place job in correct order
	bool idleStatus = true; //used to check if cpu is busy

	//metric variables
	int averageQueueSize = 0;
	int averageTimeInQueue = 0;
	int idleTime = 0;
	int aJobCount = 0;
	int bJobCount = 0;
	int cJobCount = 0;
	int dJobCount = 0;
	int totalWaitTime = 0; //total wait time in the queue
	int maxJobs = 0; //max number of jobs in the queue
	int totalJobsComplete = 0;
	int numJobsInterrupted = 0; //number of jobs that were interrupted
	int numberOfCPU = 1; //number of cpus used for simulation
	int totalTime = 0; //total number of time units the cpu runs
	int totalTimeProcessed = 0; //total time the processors spent processing



	for (int i = 0; i < 2000; i++)//create jobs by setting time of arrivals and processing times
	{
		if (counter % 5 == 0)//job A
		{
			jobs[b].jobType = 'A';
			jobs[b].arrivalTime = counter + 4 + rand() % 3;
			jobs[b].processingTime = counter + 1 + rand() % 5;
			b++;
		}
		if (counter % 10 == 0)//job B
		{
			jobs[b].jobType = 'B';
			jobs[b].arrivalTime = counter + 9 + rand() % 3;
			jobs[b].processingTime = counter + 6 + rand() % 5;
			b++;
		}
		if (counter % 25 == 0)//job C
		{
			jobs[b].jobType = 'C';
			jobs[b].arrivalTime = counter + 24 + rand() % 3;
			jobs[b].processingTime = counter + 11 + rand() % 5;
			b++;
		}
		if (counter % 30 == 0)//job D
		{
			jobs[b].jobType = 'D';
			jobs[b].arrivalTime = counter + 25 + rand() % 11;
			jobs[b].processingTime = counter + 8 + rand() % 5;
			b++;
		}
		counter = counter + 5;//increment count of 5
	}

	int jobI = 0;//index for which job is starting/running
	int stop = 0;//used to know when to stop the job

	for (int i = 1; i <= 10000; i++)//CPU simulation
	{
		cout << i << ") ";
		ons << i << ") ";
		if (i >= jobs[jobI].arrivalTime)//start job if arrival time has been reached
		{
			cout << "Job " << jobs[jobI].jobType << " has been added to the queue";
			ons << "Job " << jobs[jobI].jobType << " has been added to the queue";
			queue1.insertKey(jobs[jobI].processingTime, jobs[jobI].jobType, numJobsInterrupted, idleStatus);

			if (jobs[jobI].jobType == 'A')
			{
				aJobCount++;
			}
			if (jobs[jobI].jobType == 'B')
			{
				bJobCount++;
			}
			if (jobs[jobI].jobType == 'C')
			{
				cJobCount++;
			}
			if (jobs[jobI].jobType == 'D')
			{
				dJobCount++;
			}
			averageTimeInQueue++;
			jobI++;
		}

		if (idleStatus == false)
		{
			cout << "Processing job " << jobs[jobI].jobType << endl;
			ons << "Processing job " << jobs[jobI].jobType << endl;
			totalTimeProcessed++;
			totalTime++;
		}
		else
		{
			cout << "CPU is idle";
			ons << "CPU is idle";
			idleTime++;
		}

		if (idleStatus == true && queue1.getHeapSize() > 0)
		{
			cout << "Processing job " << jobs[jobI].jobType << endl;
			ons << "Processing job " << jobs[jobI].jobType << endl;
			stop = (i + queue1.extractMin());
			idleStatus = false;
		}
		else
		{
			if (i >= stop)
			{
				idleStatus = true;
				totalJobsComplete++;
			}
		}

		if (queue1.getHeapSize() > maxJobs)
		{
			maxJobs = queue1.getHeapSize();
		}


		cout << endl;
		ons << endl;
		averageQueueSize = averageQueueSize + queue1.getHeapSize();
	}

	averageQueueSize = averageQueueSize / 10000;

	cout << endl << endl;
	cout << "Queue size: " << queue1.getHeapSize() << endl;
	cout << "Average queue size: " << averageQueueSize << endl;
	cout << "Average time in queue: " << averageTimeInQueue << endl;
	cout << "Idle time: " << idleTime << endl;
	cout << "Total number of jobs A arrived: " << aJobCount << endl;
	cout << "Total number of jobs B arrived: " << bJobCount << endl;
	cout << "Total number of jobs C arrived: " << cJobCount << endl;
	cout << "Total number of jobs D arrived: " << dJobCount << endl;
	cout << "Max number of jobs in queue: " << maxJobs << endl;
	cout << "Jobs interrupted: " << numJobsInterrupted << endl;
	cout << "Total jobs completed: " << totalJobsComplete << endl;
	cout << "Numbe of processors: " << numberOfCPU << endl;
	cout << "Total number of time units the processors (s) run: " << totalTime << endl;
	cout << "Total time processor (s) spent processing : " << totalTimeProcessed << endl;


	//#####################################################################
	line();
	cout << "Thank you for running the program written by Nathan!";
	line();


	return 0;
}