/*
Chapter 4 Review
8. Devise a structure declaration that describes a fish.The structure should include the
   kind, the weight in whole ounces, and the length in fractional inches.
9. Declare a variable of the type defined in Question 8 and initialize it.
*/
#include <iostream>
struct fish
{
	char kind[20];
	int weight;
	double length;
};

int main() {
	using namespace std;

	fish a1 =
	{
		"bigfish",
		45,
		89.3
	};  // Notice '" "', ',' and ';'

	cout << "fish kind: " << a1.kind << endl;
	cout << "fish weight: " << a1.weight << endl;
	cout << "fish length: " << a1.length << endl;

	return 0;
}
