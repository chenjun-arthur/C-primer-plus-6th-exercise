/*
Chapter 4 Review
3. Declare an array of five ints and initialize it to the first five odd positive integers.
4. Write a statement that assigns the sum of the first and last elements of the array in
   Question 3 to the variable even.
*/
#include <iostream>
#include <array>
int main() {
	using namespace std;

	array<int, 5> a1 = {1, 3, 5, 7, 9};
	int a2 = a1[0] + a1[4];

	cout << "a2 = " << a2 << endl;

	return 0;
}