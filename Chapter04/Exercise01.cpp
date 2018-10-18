/*
Chapter 4 Programming Exercises
1. Write a C++ program that requests and displays information as shown in the following
example of output:
	What is your first name? Betty Sue
	What is your last name? Yewe
	What letter grade do you deserve? B
	What is your age? 22
	Name: Yewe, Betty Sue
	Grade: C
	Age: 22
*/
#include <iostream>
int main()
{
	using namespace std;
	char first_name[20], last_name[20];

	cout << "What is your first name? ";
	cin.getline(first_name, 20);

	cout << "What is your last name? ";
	cin.getline(last_name, 20);

	char grade;

	cout << "What letter grade do you deserve? ";
	cin >> grade;
	grade += 1;

	int age;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}