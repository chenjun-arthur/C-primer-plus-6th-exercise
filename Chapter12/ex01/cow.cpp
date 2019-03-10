#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow() {
	name[0] = '\0';
	hobby = NULL;
	weight = 0.0;
}

Cow::~Cow() {
	name[0] = '\0';
	delete [] hobby;
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt) {
	strncpy(name, nm, 20);
	hobby = new char[strlen(ho) + 1];
	strncpy(hobby, ho, strlen(ho));
	weight = wt;
}

Cow::Cow(const Cow& c) {
	strncpy(name, c.name, 20);
	hobby = new char[strlen(c.hobby) + 1];
	strncpy(hobby, c.hobby, strlen(c.hobby));
	weight = c.weight;
}

Cow& Cow::operator=(const Cow& c) {
	delete [] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strncpy(hobby, c.hobby, strlen(c.hobby));
	weight = c.weight;
	strncpy(name, c.name, 20);
	return *this;
}

void Cow::ShowCow() const {
	using std::cout;

	cout << "Name: " << name << '\n';
	if (hobby != NULL)
	{
		 cout << "Hobby: " << hobby << '\n';
	}
		 cout << "Weight: " << weight << '\n';
}