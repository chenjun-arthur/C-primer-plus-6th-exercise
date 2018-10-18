/*
Chapter 4 Programming Exercises
4. Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string consisting of the
user’s last name followed by a comma, a space, and first name. Use string objects
and methods from the string header file.A sample run could look like this:
	Enter your first name: Flip
	Enter your last name: Fleming
	Here’s the information in a single string: Fleming, Flip
*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    
    string firstname, lastname;
    
    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;

    lastname = lastname + ", " + firstname;
    cout << "Here's the information in a single string: " << lastname << endl;
    
	cin.get();
    cin.get();
    return 0; 
}