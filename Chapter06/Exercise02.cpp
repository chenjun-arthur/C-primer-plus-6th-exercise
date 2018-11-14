/*
Chapter 6 Programming Exercises
2. Write a program that reads up to 10 donation values into an array of double. (Or, if
you prefer, use an array template object.) The program should terminate input on
non-numeric input. It should report the average of the numbers and also report
how many numbers in the array are larger than the average.
*/
#include <iostream>
const int Max = 10;
int main()
{
    using namespace std;
    // get data
    double donation[Max];
    cout << "Please enter the donation values.\n";
    cout << "You may enter up to " << Max 
         << " donation values <non-numeric input to terminate>.\n";
    cout << "donation #1: ";
    int i = 0;
    while (i < Max && cin >> donation[i]) {
        if (++i < Max)
            cout << "donation #" << i + 1 << ": ";
    }

    //calculate average
    double total = 0.0;
    for (int j = 0; j < i; j++)
    {
        total += donation[j];
    }
    double average = 0.0;
    //report results
    if (i == 0)
        cout << "No donation.\n";
    else {
        average = total / i;
        cout << average << " = average numbers of " << i << " donations.\n";
    }
    int count = 0;
    for (int j = 0; j < i; j++)
        if (donation[j] > average)
            count++;

    cout << count << " donation values larger than the average.\n";

	return 0;
}
