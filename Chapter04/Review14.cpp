/*
Chapter 4 Review
14. Is the following valid code? If so, what does it print?
	cout << (int *) “Home of the jolly bytes”;
*/
#include <iostream>
#include <vector>
int main() {
	using namespace std;

	cout << (int *) "Home of the jolly bytes";

	return 0;
}