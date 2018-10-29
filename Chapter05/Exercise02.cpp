/*
Chapter 5 Programming Exercises
2. Redo Listing 5.4 using a type array object instead of a built-in array and type
long double instead of long long. Find the value of 100!

// Listing 5.4 formore.cpp -- more looping with for
#include <iostream>
const int ArSize = 16;      // example of external declaration
int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
	// std::cin.get();
    return 0;
}
*/
#include <iostream>
#include <array>
const int ArSize = 16;  
int main()
{
	using namespace std;

	array<long long, ArSize> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;
	// std::cin.get();
    return 0;
}