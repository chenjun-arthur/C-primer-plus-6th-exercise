/*
Chapter 6 Programming Exercises
6. Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter the number
of contributors and then solicit the user to enter the name and contribution of
each contributor.The information should be stored in a dynamically allocated array
of structures. Each structure should have two members: a character array (or else a
string object) to store the name and a double member to hold the amount of the
contribution.After reading all the data, the program should display the names and
amounts donated for all donors who contributed $10,000 or more.This list should
be headed by the label Grand Patrons.After that, the program should list the
remaining donors.That list should be headed Patrons. If there are no donors in one
of the categories, the program should print the word “none.”Aside from displaying
two categories, the program need do no sorting.
*/
#include <iostream>
#include <string>
using namespace std;
struct patron
{
    string Name;
    double Contribution;
};
int main()
{
    int NumTotal = 0;
    // ask the user to enter the number of contributors
    cout << "Enter the number of contributors: ";
    cin >> NumTotal;
	cin.get();

    // The information should be stored in a dynamically allocated array of structures.
	patron *contributor = new patron[NumTotal];

    int NumGrand = 0;
    int NumPatron = 0;
    for (int i = 0; i < NumTotal; ++i)
    {
        cout << "Contributor #" << i + 1 << ":\n";
        getline(cin, contributor[i].Name);

        cin >> contributor[i].Contribution;
        cin.get();
        if (contributor[i].Contribution >= 10000)
            NumGrand++;
        else 
            NumPatron++;
    }

    cout << "Grand Patrons:\n";
    if (NumGrand > 0)
    {
        for (int i = 0; i < NumTotal; ++i)
            if (contributor[i].Contribution >= 10000)
                cout << contributor[i].Name << "\t:\t" << contributor[i].Contribution << endl;
    }
    else
        cout << "none\n";

    cout << "Patrons:\n";
    if (NumPatron > 0)
    {
        for (int i = 0; i < NumTotal; ++i)
            if (contributor[i].Contribution < 10000)
                cout << contributor[i].Name << "\t:\t" << contributor[i].Contribution << endl;
    }
    else
        cout << "none\n";

    return 0;
}
