/*
Chapter 8 Programming Exercises
2. The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that uses a function that takes
as arguments a reference to CandyBar, a pointer-to-char, a double, and an int and
uses the last three values to set the corresponding members of the structure.The last
three arguments should have default values of “Millennium Munch,” 2.85, and 350.
Also the program should use a function that takes a reference to a CandyBar as an
argument and displays the contents of the structure. Use const where appropriate.
*/
#include <iostream>
#include <cstring>
struct CandyBar
{
	char brandName[40];
	double weight;
	int calory;
};

void setCandyBar(CandyBar & candy, const char * name = "Millennium Munch", 
							  const double weightC = 2.85,
							  const int cal = 350);

void displayCandyBar(const CandyBar & candy);

int main()
{
	CandyBar one;
    setCandyBar(one);
    displayCandyBar(one);
	return 0;
}

void setCandyBar(CandyBar & candy, const char * name, const double weightC, const int cal)
{
	strncpy(candy.brandName, name, 40);
	candy.weight = weightC;
	candy.calory = cal;
}

void displayCandyBar(const CandyBar & candy)
{
	using std::cout;
	cout << "Brand Name: " << candy.brandName << '\n';
	cout << "Weight: " << candy.weight << "\t";
	cout << "Calories: " << candy.calory << '\n';
}