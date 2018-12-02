/*
Chapter 7 Programming Exercises
5. Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.
*/
#include <iostream>
unsigned long long factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else if (n == 0)
		return 1;
}
int main()
{
	using namespace std;
	int n = -1;
	cout << "Enter integer (n < 0 to stop) \n";
	while (cin >> n && n >= 0)
	{
		cout << n <<"! = " << factorial(n) << endl;
	}
	cout << "n < 0. Terminate. " << endl;
}