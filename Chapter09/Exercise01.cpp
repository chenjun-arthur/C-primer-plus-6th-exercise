/*Chapter 9 Programming Exercises
1. The function would prompt the user to enter the name and handicap and store
them in the andy structure.This function could (but doesn’t need to) use the first
version internally.
Put together a multifile program based on this header. One file, named golf.cpp,
should provide suitable function definitions to match the prototypes in the header
file.A second file should contain main() and demonstrate all the features of the
prototyped functions. For example, a loop should solicit input for an array of golf
structures and terminate when the array is full or the user enters an empty string
for the golfer’s name.The main() function should use only the prototyped functions
to access the golf structures.*/
#include <iostream>
#include "golf.h"
int main()
{
	using std::cout;
	using std::endl;

	const int members = 5;
	golf golfMain[members];
	for (int i = 0; i < members; ++i)
	{
		int status = 0;
		cout << "Input Members #" << i + 1 << endl;

		status = setgolf(golfMain[i]);
		if (status == 0) break;
		handicap(golfMain[i], members - i);
		showgolf(golfMain[i]);
	}
	return 0;
}