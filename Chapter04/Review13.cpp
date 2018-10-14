/*
Chapter 4 Review
13. Write a code fragment that asks the user to enter a positive integer and then creates
	a dynamic array of that many ints. Do this by using new, then again using a
	vector object.
*/
#include <iostream>
#include <vector>
int main() {
	using namespace std;

	int a; 
	cout << "Enter a positive integer: " << endl;
	cin >> a;

	int * array1 = new int [a];
	
	array1[a-1] = 123;

	cout << array1[a - 1] << endl;
	
	delete [] array1;

	vector<int> v(a);  // Notice '()' to declare
	v[a-1] = 321;

	cout << v[a-1] << endl;

	return 0;
}