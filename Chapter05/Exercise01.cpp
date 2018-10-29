/*
Chapter 5 Programming Exercises
1. Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.
*/
#include <iostream>
int main()
{
	using namespace std;
	int start, end;

	cout << "Input 2 integers, the smaller integer first: ";
	cin >> start;
	cin >> end;

	int sum = 0;
	for (int i = start; i <= end; ++i)
	{
		sum += i;
	}

	cout << sum << endl;

	return 0;
}
