/*
Chapter 6 Programming Exercises
9. Do Programming Exercise 6 but modify it to get information from a file.The first
item in the file should be the number of contributors, and the rest of the file should
consist of pairs of lines, with the first line of each pair being a contributor’s name
and the second line being a contribution.That is, the file should look like this:
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
*/
#include <iostream>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
#include <string>
using namespace std;
const int SIZE = 60;
struct patron
{
    string Name;
    double Contribution;
};
int main()
{
    char filename[SIZE];
    ifstream inFile;        // object for handling file input

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // associate inFile with a file
    if (!inFile.is_open())  // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    int NumTotal = 0;
    inFile >> NumTotal;
    inFile.get();

    patron *contributor = new patron[NumTotal];

    int NumGrand = 0;
    int NumPatron = 0;
    for (int i = 0; i < NumTotal; ++i)
    {
        // cout << "Contributor #" << i + 1 << ":\n";
        getline(inFile, contributor[i].Name);

        inFile >> contributor[i].Contribution;
        inFile.get();
        if (contributor[i].Contribution >= 10000)
            NumGrand++;
        else 
            NumPatron++;
    }

    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    inFile.close();         // finished with the file

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
    // cin.get();
    return 0;
}


