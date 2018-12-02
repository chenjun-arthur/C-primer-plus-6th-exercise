/*
Chapter 7 Programming Exercises
7. Redo Listing 7.7, modifying the three array-handling functions to each use two
pointer parameters to represent a range.The fill_array() function, instead of
returning the actual number of items read, should return a pointer to the location
after the last location filled; the other functions can use this pointer as the second
argument to identify the end of the data.
*/
// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

// function prototypes
double * fill_array(double ar[], int limit);
void show_array(const double ar[], double * end);  // don't change data
void revalue(double r, double ar[], double * end);

int main()
{
    using namespace std;
    double properties[Max];

    double * end = fill_array(properties, Max);
    show_array(properties, end);
    if (end != properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

double * fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    double * ptr = &ar[0];
    for (int i = 0; i < limit; i++, ptr++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        ar[i] = temp;
    }
    return ptr;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], double * end)
{
    using namespace std;
    for (const double * ptr = ar; ptr != end; ptr++)
    {
        cout << "Property #" << ptr << ": $";
        cout << *ptr << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], double * end)
{
    for (double * ptr = ar; ptr != end; ptr++)
        *ptr *= r;
}
