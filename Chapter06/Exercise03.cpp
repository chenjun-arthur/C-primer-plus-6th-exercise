/*
Chapter 6 Programming Exercises
3. Write a precursor to a menu-driven program.The program should display a menu
offering four choices, each labeled with a letter. If the user responds with a letter
other than one of the four valid choices, the program should prompt the user to
enter a valid response until the user complies.Then the program should use a
switch to select a simple action based on the user’s selection.A program run could
look something like this:
Please enter one of the following choices:
c) carnivore p) pianist
t) tree g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.
*/
#include <iostream>
int main()
{
	using namespace std;
	char ch = 0;
	while (cin >> ch)
	{
		switch(ch)
		{
			case 'c': cout << "choose c\n"; break;
			case 'p': cout << "choose p\n"; break;
			case 't': cout << "A maple is tree.\n"; break;
			case 'g': cout << "choose g\n"; break;
			default:
				cout << "Pleease enter a c, p, t, or g: ";
				ch = 0;
		}
		if (ch) break;
	}
	return 0;
}