/*
Chapter 4 Review
8. Devise a structure declaration that describes a fish.The structure should include the
   kind, the weight in whole ounces, and the length in fractional inches.

15. Write a code fragment that dynamically allocates a structure of the type described
	in Question 8 and then reads a value for the kind member of the structure.
*/
#include <iostream>
#include <string>
struct fish
{
	char kind[20];
	int weight;
	double length;
};

int main() {
	using namespace std;

	fish *p = new fish;

	strncpy(p->kind, "bigfish", 20);
	p->weight = 123;
	p->length = 2.4;

	cout << "fish kind: " << p->kind << endl;
	cout << "fish weight: " << p->weight << endl;
	cout << "fish length: " << (*p).length << endl;

	delete p; 
	return 0;
}