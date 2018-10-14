/*
Chapter 4 Review
12. Suppose treacle is an array of 10 floats. Declare a pointer that points to the first element
	of treacle and use the pointer to display the first and last elements of the array.
*/
#include <iostream>

int main() {
	using namespace std;

	float treacle[10];

	for (int i=0; i<10; i++)
		treacle[i] = i*1.1;

	float * p_treacle = &treacle[0];

	cout << "treacle[0] = " << *p_treacle << endl;

	p_treacle += 9;

	cout << "treacle[9] = " << *p_treacle << endl;
	
	return 0;
}