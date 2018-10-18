/*
Chapter 4 Programming Exercises
10. Write a program that requests the user to enter three times for the 40-yd dash (or
40-meter, if you prefer) and then displays the times and the average. Use an array
object to hold the data. (Use a built-in array if array is not available.)
*/
#include <iostream>
#include <array>
int main()
{
    using namespace std;
    
    array<double, 3> yd40;
    double sum = 0;

    cout << "Input 40-yd dash 3 times: ";
    for (int i = 0; i<3; i++) 
    {
        cin >> yd40[i];
        sum += yd40[i];
    }

    cout << " 3 times average = " << sum/3 << endl;

	cin.get();
    cin.get();
    return 0; 
}