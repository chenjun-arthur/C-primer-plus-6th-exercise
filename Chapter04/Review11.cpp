/*
Chapter 4 Review
11. Suppose ted is a double variable. Declare a pointer that points to ted and use the
	pointer to display ted’s value.
*/
#include <iostream>

int main() {
	using namespace std;

	double ted = 1.23;
	double * p_ted;

	p_ted = &ted;

	cout << "ted = " << *p_ted << endl;
	
	return 0;
}