/*
Chapter 8 Programming Exercises
5. Write a template function max5() that takes as its argument an array of five items
of type T and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.
*/
#include <iostream>
template <typename T>
T max5(T input[]);

int main()
{
    int intArr[5] = {1, 2, 3, 4, 5};
    double dblArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << max5(intArr) << max5(dblArr) << "\n";
	return 0;
}

template <typename T>
T max5(T input[])
{
	T temp = input[0];
	for (int i = 1; i < 5; ++i)
	{
		if (temp < input[i])
		{
			temp = input[i];
		}
	}
	return temp;
}