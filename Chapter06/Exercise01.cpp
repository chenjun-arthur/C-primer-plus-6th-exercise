/*
Chapter 6 Programming Exercises
1. Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase, and vice
versa. (Don’t forget the cctype family.)
*/
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    cout << "Enter text to exchange upper/lowercase case, and type @ to terminate input.\n";
	char ch;

	while (cin.get(ch) && ch != '@')
	{
		if (isalpha(ch))
            ch = islower(ch)? toupper(ch):tolower(ch);
		else if (isdigit(ch))
			continue;
		
		cout << ch;
	}
    
	return 0;
}
