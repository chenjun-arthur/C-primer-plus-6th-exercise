/*
Chapter 8 Programming Exercises
1. Write a function that normally takes one argument, the address of a string, and
prints that string once. However, if a second, type int, argument is provided and is
nonzero, the function should print the string a number of times equal to the number
of times that function has been called at that point. (Note that the number of
times the string is printed is not equal to the value of the second argument; it is
equal to the number of times the function has been called.) Yes, this is a silly function,
but it makes you use some of the techniques discussed in this chapter. Use the
function in a simple program that demonstrates how the function works.
*/
#include <iostream>

unsigned int times = 0;

void display(const char * str, int n = 0);

int main()
{
    display("abcdef");
    display("abcdef", 0);
    display("abcdef", 1);
	return 0;
}

void display(const char * str, int n)
{
	using namespace std;
	times++;
	if (n)
	{
		for (int i = 0; i < times; ++i)
		{
			cout << str << endl;
		}
	}
	else
		cout << str << endl;
}
