/*
Chapter 7 Programming Exercises
6. Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.
Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.
Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the
array, show the array,
*/
#include <iostream>
using namespace std;

int Fill_array(double arr[], int limit)
{
	cout << "Enter double numbers to fill array \n";
	double temp = 0;
	int i = 0;
	for (i = 0; i < limit; ++i)
	{
		cin >> temp;

		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input, input process terminated. \n";
			break;
		}
		else if (temp < 0)
			break;

		arr[i] = temp;
	}
	return i;
}

void Show_array(double arr[], int size)
{
	cout << "Array = /";
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << "/" << endl;
}

void Reverse_array(double arr[], int size)
{
	double temp = 0;
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main()
{
	const int limit = 10;
	double arr[limit] = {0};
	int size = 0;

	size = Fill_array(arr, limit);
	Show_array(arr, size);

	Reverse_array(arr, size);
	Show_array(arr, size);

	Reverse_array(arr + 1, size - 2);
	Show_array(arr, size);
}