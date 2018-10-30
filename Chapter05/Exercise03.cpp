/*
Chapter 5 Programming Exercises
3. Write a program that asks the user to type in numbers.After each entry, the program
should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.
*/
#include <iostream>

int main()
{
    using namespace std;
    double n, sum = 0;

    do
    {
        cin >> n;
        if (n != 0)
        {
            sum += n;
            cout << "sum = " << sum << endl;
        }
        else
            break;
    } while (n != 0);

}