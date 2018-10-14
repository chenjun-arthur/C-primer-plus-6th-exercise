/*
Chapter 4 Review
16. Listing 4.6 illustrates a problem created by following numeric input with line-oriented
	string input. How would replacing this:
	cin.getline(address,80);
	with this:
	cin >> address;
	affect the working of this program?
*/
// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "What is its street address?\n";
    char address[80];
    //cin.getline(address, 80);
    cin >> address;  // Only first world is saved
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    // cin.get();
    return 0; 
}