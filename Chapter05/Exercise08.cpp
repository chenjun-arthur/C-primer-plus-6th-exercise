/*
Chapter 5 Programming Exercises
Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
*/
#include <iostream>
#include <cstring>
const int ArSize = 20;
int main()
{
    using namespace std;
    char word[ArSize];
    int count = 0;

    cin >> word;
    while (strcmp(word, "done")) {
    	count++;
    	cin >> word;
    }
    cout << "You entered a total of " << count << " words.\n";

	return 0;
}
