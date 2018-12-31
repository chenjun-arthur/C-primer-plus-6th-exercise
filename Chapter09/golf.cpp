#include <iostream>
#include "golf.h"
#include <cstring>
using std::cout;
using std::endl;
using std::cin;

void setgolf(golf & g, const char * name, int hc) {
	strncpy(g.fullname, name, Len);
	g.handicap = hc;
}

int setgolf(golf & g) {

	cout << "Input fullname: " << endl;
	char name[Len];
	cin.getline(name, Len);
	cout << "Input handicap: " << endl;
	int handicap;
	cin >> handicap;
	cin.get();
	setgolf(g, name, handicap);

	if (strlen(g.fullname) > 0)
		return 1;
	else 
		return 0;
}

void handicap(golf & g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf & g) {
	cout << g.fullname << endl;
	cout << g.handicap << endl;
}