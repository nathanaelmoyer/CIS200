//selection sort
//Nathanael Moyer
//4-17-18

#include <iostream>
#include <cstdlib>


using namespace std;

void selectionSort(int a[], int length)
{
	int temp = 0;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])	//if current value is greater than next, swap
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

			cout << "Current list: ";
			for (int i = 0; i < 5; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl << endl;
		}
		
	}
}


int main()
{
	int a[5] = { 4, 16, 2, 5, 10 };

	cout << "Initial list: ";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << endl;

	int length = 5;

	selectionSort(a, length);

	cout << "New list: ";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl << endl;

	return 0;
}