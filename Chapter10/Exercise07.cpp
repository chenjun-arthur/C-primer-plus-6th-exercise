/*Chapter 10 Programming Exercises
7. A Betelgeusean plorg has these properties:
Data
A plorg has a name with no more than 19 letters.
A plorg has a contentment index (CI), which is an integer.
Operations
A new plorg starts out with a name and a CI of 50.
A plorg’s CI can change.
A plorg can report its name and CI.
The default plorg has the name "Plorga".
Write a Plorg class declaration (including data members and member function prototypes)
that represents a plorg.Write the function definitions for the member functions.
Write a short program that demonstrates all the features of the Plorg class.
*/
#include <cstring>
#include <iostream>

class Plorg
{
private:
	char name[20];
    int CI;

public:
	Plorg(const char* newName = "Plorga", int newCI = 50);
	~Plorg() {};
	void show();
	void setCI(int newCI);
};

Plorg::Plorg(const char* newName, int newCI) {
	strncpy(name, newName, 19);
	CI = newCI;
}

void Plorg::show() {
	using std::cout;
	cout << name << ", CI =" << CI << "\n";
}

void Plorg::setCI(int newCI) {
	CI = newCI;
}

int main() {
	Plorg plorg;
	plorg.show();
	plorg.setCI(35);
	plorg.show();
	Plorg p2 = Plorg("Betelgeusean plorg", 35);
	p2.show();
}