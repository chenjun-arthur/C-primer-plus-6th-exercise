/*
Chapter 4 Review
1. How would you declare each of the following?
	a. actors is an array of 30 char.
	b. betsie is an array of 100 short.
	c. chuck is an array of 13 float.
	d. dipsea is an array of 64 long double.
*/
#include <iostream>
int main()
{
	using namespace std;
	char actors[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];

	cout << "actors is an array of " << sizeof(actors)/sizeof(actors[0]) << " char.\n";
	cout << "betsie is an array of " << sizeof(betsie)/sizeof(betsie[0]) << " short.\n";
	cout << "chuck is an array of " << sizeof(chuck)/sizeof(chuck[0]) << " float.\n";
	cout << "dipsea is an array of " << sizeof(dipsea)/sizeof(dipsea[0]) << " long double.\n";

	return 0;
}


