/*
Chapter 6 Programming Exercises
4. When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.Write a program
that can list members by real name, by job title, by secret name, or by a member’s
preference. Base the program on the following structure:
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
In the program, create a small array of such structures and initialize it to suitable
values. Have the program run a loop that lets the user select from different alternatives:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Note that “display by preference” does not mean display the preference member; it
means display the member corresponding to the preference number. For instance, if
preference is 1, choice d would display the programmer’s job title.A sample run
may look something like the following:
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
*/
#include <iostream>
using namespace std;
void showmenu(); // function prototype
const int MaxMembers = 5;
const int strsize = 20;
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize]; // job title
char bopname[strsize]; // secret BOP name
int preference; // 0 = fullname, 1 = title, 2 = bopname
};
int main()
{


    bop member[MaxMembers] = {
    	{"Wimp Macho", "Junior ProgrammerW", "MIPSw", 0},
    	{"Raki Rhodes", "Junior Programmer", "MIPSr", 1},
    	{"Celia Laiter", "Junior ProgrammerC", "MIPS", 2},
    	{"Hoppy Hipman", "Analyst Trainee", "MIPSh", 1},
    	{"Pat Hand", "Junior ProgrammerP", "LOOPY", 2}
	};

    showmenu();
    char choice;
    cin >> choice;

    int option = 0;

    while (choice != 'q')
    {
    	for (int i = 0; i < MaxMembers; ++i)
    	{
    		switch(choice)
    		{
    			case 'a': option = 0; break;
    			case 'b': option = 1; break;
    			case 'c': option = 2; break;
    			case 'd': option = member[i].preference; break;
    		}
    		switch(option)
    		{
    			case 0: cout << member[i].fullname << endl; break;
    			case 1: cout << member[i].title << endl; break;
    			case 2: cout << member[i].bopname << endl; break;
    		}
    	}
    	cout << "Next choice: ";
    	cin >> choice;
    }
    
    cout << "Bye!\n";
	return 0;
}

void showmenu()
{
	cout << "Benevolent Order of Programmers Report\n"
		"a. display by name \t b. display by title\n"
		"c. display by bopname \t d. display by preference\n"
		"q. quit\n"
		"Enter your choice: ";
}
