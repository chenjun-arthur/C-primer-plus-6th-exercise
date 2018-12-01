/*
Chapter 7 Programming Exercises
1. Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate
the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic mean = 2.0 × x × y / (x + y)
*/
#include <iostream>
double harmonicMean(int, int);
int main()
{
	using namespace std;
	int x = 0, y = 0;
	double result = 0.0;
	cout << "Enter pairs of numbers ( stop if input 0): \n";
	cin >> x >> y;
	while (x && y) {
		result = harmonicMean(x, y);
		cout << "harmonic mean = " << result << endl;
		cout << "Enter pairs of numbers ( stop if input 0): \n";
		cin >> x >> y;
	}
	cout << "one of the pair is 0.  Stop.\n";
	return 0;
}
double harmonicMean(int x, int y)
{
	return 2.0 * x * y / (x + y);
}