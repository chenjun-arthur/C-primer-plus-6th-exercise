/*
Chapter 8 Programming Exercises
6. Write a template function maxn() that takes as its arguments an array of items of
type T and an integer representing the number of elements in the array and that
returns the largest item in the array.Test it in a program that uses the function template
with an array of six int value and an array of four double values.The program
should also include a specialization that takes an array of pointers-to-char as
an argument and the number of pointers as a second argument and that returns the
address of the longest string. If multiple strings are tied for having the longest
length, the function should return the address of the first one tied for longest.Test
the specialization with an array of five string pointers.
*/
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T input[], int length);
template <> const char * maxn(const char * input[], int length);

int main()
{
    int intArr[6] = {1, 4, 2, 5, 3, 6};
    double dblArr[4] = {2.2, 3.3, 4.4, 1.1};
    const char * ptChar[5] = { "abc", "abcdeef", "asdkf", "adslkh7a", "ads"};

    cout << maxn(intArr, 6) << endl;
    cout << maxn(dblArr, 4) << endl;
    cout << maxn(ptChar, 5) << endl;

	return 0;
}

template <typename T>
T maxn(T input[], int length)
{
	T maxT = input[0];
	for (int i = 1; i < length; ++i)
		if (maxT < input[i])
			maxT = input[i];

	return maxT;
}

template <> const char * maxn(const char * input[], int length)
{
	const char * longest = input[0];
	for (int i = 1; i < length; ++i)
	{
		if (strlen(input[i]) > strlen(longest))
		{
			longest = input[i];
		}
	}
	return longest;
}