/*
Chapter 5 Programming Exercises
5. You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents
and report the total sales for the year.

6. Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.
*/
#include <iostream>
const int Years = 3;
const int Months = 12;
int main()
{
    using namespace std;
    char * months[Months] = {
        "Jan.", "Feb.", "Mar.", "Apr.", "May.", "Jun.",
        "Jul.", "Aug.", "Sep.", "Oct.", "Nov.", "Dec"
    };
	int sales[Years][Months] = { 0 };
    int sum = 0;
    int total = 0;

    for (int year = 0; year < Years; year++) {
        cout << "Year: " << year + 1 << endl;
        for (int month = 0; month < Months; month++)
        {
            cout << "Input sale of month " << months[month] << ": ";
            cin >> sales[year][month];
            sum += sales[year][month];
        }
        cout << "Total sales for the year" << (year + 1) << ": " << sum << endl;
        total += sum;
        sum = 0;
    }

    cout << "Total sales for all: " << total << endl;

	return 0;
}