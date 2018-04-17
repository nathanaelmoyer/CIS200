//selection sort
//Nathanael Moyer
//4-17-18

#include <iostream>
#include <cstdlib>


using namespace std;

void selectionSort(int a[])
{
	int minVal = 0;

	for (int i = 0; i < 5; i++)
	{
		if (a[i] < a[i + 1])
		{
			minVal = a[i];
		}
	}
}


int main()
{
	int a[5] = { 4, 16, 2, 5, 10 };

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;




	return 0;
}