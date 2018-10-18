/*
Chapter 4 Programming Exercises
7. William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:
	The name of the pizza company, which can consist of more than one word
	The diameter of the pizza
	The weight of the pizza

Devise a structure that can hold this information and write a program that uses a
structure variable of that type.The program should ask the user to enter each of the
preceding items of information, and then the program should display that information.
Use cin (or its methods) and cout.

8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.
*/
#include <iostream>
struct pizza
{
	char brand[20];
	double diameter;
	double weight;
};
int main()
{
    using namespace std;
    
    pizza * p = new pizza;

    cout << "Enter diameter: ";
    cin >> p->diameter;
	cin.get();

    cout << "Enter pizza brand: ";
    cin.get(p->brand, 20);

    cout << "Enter weight: ";
    cin >> p->weight;

    cout << "Brand name: " << p->brand << ", ";
    cout << "Diameter: " << p->diameter << ", ";
    cout << "Weight: " << (*p).weight << endl;
	delete p;
		
	cin.get();
    cin.get();
    return 0; 
}