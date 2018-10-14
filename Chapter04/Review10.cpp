/*
Chapter 4 Review
10. Use enum to define a type called Response with the possible values Yes, No, and
    Maybe. Yes should be 1, No should be 0, and Maybe should be 2.
*/
#include <iostream>
enum Response {No = 0, Yes = 1, Maybe = 2};

int main() {
	using namespace std;

	int i;
	i = No;
	cout << "No = " << i << endl;
	
	i = Yes;
	cout << "Yes = " << i << endl;

	i = Maybe;
	cout << "Maybe = " << i << endl;

	return 0;
}