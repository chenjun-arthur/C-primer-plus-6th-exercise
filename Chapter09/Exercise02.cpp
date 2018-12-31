/*Chapter 9 Programming Exercises
2. Redo Listing 9.9, replacing the character array with a string object.The program
should no longer have to check whether the input string fits, and it can compare
the input string to "" to check for an empty line.*/
// Listing 9.9 static.cpp -- using a static local variable
#include <iostream>
#include <string>
// constants
// const int ArSize = 10;

// function prototype
void strcount(const std::string str);

int main()
{
    using namespace std;
    // char input[ArSize];
    string input;
    char next;

    cout << "Enter a line:\n";
    // cin.get(input, ArSize);
    getline(cin, input);
    while (input != "")
    {
        // cin.get(next);
        // while (next != '\n')    // string didn't fit!
        //     cin.get(next);      // dispose of remainder
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        // cin.get(input, ArSize);
        getline(cin, input);
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str <<"\" contains ";
    // while (*str++)               // go to end of string
    //     count++;
    count = str.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
