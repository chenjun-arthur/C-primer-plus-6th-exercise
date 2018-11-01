/*
Chapter 5 Programming Exercises
5. You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents
and report the total sales for the year.
*/
#include <iostream>

int main()
{
    using namespace std;
    char * Months[12] = {
        "Jan.", "Feb.", "Mar.", "Apr.", "May.", "Jun.",
        "Jul.", "Aug.", "Sep.", "Oct.", "Nov.", "Dec"
    };
	int sales[12] = { 0 };
    int sum = 0;

    for (int month = 0; month < 12; month++)
    {
        cout << "Input sale of month " << Months[month] << ": ";
        //month++;
        cin >> sales[month];
        sum += sales[month];
    }

    cout << "Total sales for the year: " << sum << endl;

	return 0;
}