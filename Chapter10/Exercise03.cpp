/*Chapter 10 Programming Exercises
3. Do Programming Exercise 1 from Chapter 9 but replace the code shown there with
an appropriate golf class declaration. Replace setgolf(golf &, const char*,int) 
with a constructor with the appropriate argument for providing initial values.
Retain the interactive version of setgolf() but implement it by using the constructor.
(For example, for the code for setgolf(), obtain the data, pass the data to
the constructor to create a temporary object, and assign the temporary object to the
invoking object, which is *this.)
*/
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;

class Golf
{
private:
	static const int LEN = 40;
    char fullname[LEN];
    int handicap;	
public:
	Golf(const char * name = "", int hc = 0);
	int setgolf();
	void handicapFun(int hc);
	void showgolf() const;
};

Golf::Golf(const char * name, int hc) {
	strncpy(fullname, name, LEN);
	handicap = hc;
}

int Golf::setgolf() {
	cout << "Input fullname: " << endl;
	char name[LEN];
	cin.getline(name, LEN);
	if (strlen(fullname) == 0)
		return 0;

	cout << "Input handicap: " << endl;
	int handicap;
	cin >> handicap;
	cin.get();
	*this = Golf(name, handicap);

	return 1;
}

void Golf::handicapFun(int hc) {
	handicap = hc;
}

void Golf::showgolf() const {
	cout << fullname << endl;
	cout << handicap << endl;
}

int main()
{
	const int members = 5;
	Golf golfMain[members];
	for (int i = 0; i < members; ++i)
	{
		int status = 0;
		cout << "Input Members #" << i + 1 << endl;

		status = golfMain[i].setgolf();
		if (status == 0) break;
		golfMain[i].handicapFun(members - i);
		golfMain[i].showgolf();
	}
	cout << "Bye." << endl;
	return 0;
}