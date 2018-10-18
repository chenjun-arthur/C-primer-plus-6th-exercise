/*
Chapter 4 Programming Exercises
3. Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:
	Enter your first name: Flip
	Enter your last name: Fleming
	Here’s the information in a single string: Fleming, Flip
*/
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char firstname[ArSize], lastname[ArSize];
    char comma[] = ", ";

    cout << "Enter your first name:";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;

    strcat(lastname, comma);
    strcat(lastname, firstname);
    cout << "Here's the information in a single string: " << lastname << endl;
    
	cin.get();
    cin.get();
    return 0; 
}