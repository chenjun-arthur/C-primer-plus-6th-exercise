/*
Chapter 4 Review
5. Write a statement that displays the value of the second element in the float array
   ideas.
*/
#include <iostream>
#include <array>
int main() {
	using namespace std;

	array<float, 5> ideas = {1.1, 3.5};
	float a2 = ideas[1];

	cout << "a2 = " << a2 << endl;

	return 0;
}