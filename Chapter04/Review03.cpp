/*
Chapter 4 Review
3. Declare an array of five ints and initialize it to the first five odd positive integers.
*/
#include <iostream>
#include <array>
int main() {
	using namespace std;

	array<int, 5> a1 = {1, 3, 5, 7, 9};
	int a2[5] = {1, 3, 5, 7, 9};

	cout << "a1 = ";
	for (int i=0; i<5; i++)
		cout << a1[i] << " ";
	cout << endl;

	cout << "a2 = ";
	for (int i=0; i<5; i++)
		cout << a2[i] << " ";
	cout << endl;

	return 0;
}