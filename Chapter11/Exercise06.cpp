/*Chapter 11 Programming Exercises
6. Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it overloads all six
relational operators.The operators should compare the pounds members and return
a type bool value.Write a program that declares an array of six Stonewt objects and
initializes the first three objects in the array declaration.Then it should use a loop
to read in values used to set the remaining three array elements.Then it should
report the smallest element, the largest element, and how many elements are greater
or equal to 11 stone. (The simplest approach is to create a Stonewt object initialized
to 11 stone and to compare the other objects with that object.)
*/
// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
#include "ex06stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt stonewts[6] = {275, 285.7, Stonewt(21, 8)};
    const Stonewt stone11(11, 0);

    for (int i = 3; i < 6; ++i)
    {
        cout << "Enter the " << i + 1 << "th element in pounds:";
        double temp;
        cin >> temp;
        stonewts[i] = temp;
    }

    Stonewt min;
    Stonewt max;
    int count;

    for (int i = 0; i < 6; ++i)
    {
        if (stonewts[i] >= stone11)
        {
            count++;
        }

        if (i == 0) {
            min = stonewts[0];
            max = stonewts[0];
        } else {
            min = min < stonewts[i] ? min : stonewts[i];
            max = max > stonewts[i] ? max : stonewts[i];
        }
    }

    cout << "Max Stonewt = ";
    max.show_stn();
    cout << "Min Stonewt = ";
    min.show_stn();
    cout << "Heavier than 11 stones: " << count << "\n";

    // std::cin.get();
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}
