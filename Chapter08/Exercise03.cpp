/*
Chapter 8 Programming Exercises
3. Write a function that takes a reference to a string object as its parameter and that
converts the contents of the string to uppercase. Use the toupper() function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input.A sample run might look like this:
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void upperStr(string & str);
int main()
{

	string temp = "";
	cout << "Enter a string (q to quit): ";
	while (getline(cin, temp) && temp != "q")
	{
    	upperStr(temp);
    	cout << temp <<endl;
    	cout << "Next string (q to quit):";
	}
	cout << "Bye.\n";

	return 0;
}

void upperStr(string & str)
{
	for (int i = 0; i < str.length(); ++i)
	{
		str[i] = toupper(str[i]);
	}
}
