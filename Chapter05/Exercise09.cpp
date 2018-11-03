/*
Chapter 5 Programming Exercises
8. Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.

9. Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.
*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word;
    int count = 0;

    cin >> word;
    while (word != "done") {
    	count++;
    	cin >> word;
    }
    cout << "You entered a total of " << count << " words.\n";

	return 0;
}
