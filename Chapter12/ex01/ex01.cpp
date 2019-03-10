#include "cow.h"
#include <iostream>
using std::cout;

void callme1(Cow &c);
void callme2(Cow c);

int main() {
	Cow cow0;
	Cow cow1("cow1", "hobby1", 1.1);
	Cow cow3;
	cow3 = cow1;
	cout << "cow0\n";
	cow0.ShowCow();
	cout << "cow1\n";
	cow1.ShowCow();
	cout << "cow3\n";
	cow3.ShowCow();
	callme1(cow1);
	callme2(cow3);
	cow3.ShowCow();
	Cow cow4 = cow3;
	cow4.ShowCow();
	return 0;
}

void callme1(Cow & c) {
	cout << "callme1: \n";
	c.ShowCow();
}

void callme2(Cow c) {
	cout << "callme2:\n";
	c.ShowCow();
}