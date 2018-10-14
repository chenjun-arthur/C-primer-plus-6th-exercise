/*
Chapter 4 Review
17. Declare a vector object of 10 string objects and an array object of 10 string
	objects. Show the necessary header files and don’t use using. Do use a const for
	the number of strings.
*/
#include <iostream>
#include <vector>
#include <array>
#include <string>
int main()
{
	std::array<std::string, 10> a;
	std::vector<std::string> v(10);

	a[9] = "array9";
	v[9] = "vector9";

	std::cout << a[9] << "\n";
	std::cout << v[9] << "\n";

    return 0; 
}