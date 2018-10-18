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
    
    pizza pizzauser;

    cout << "Enter pizza brand: ";
    cin.get(pizzauser.brand, 20);

    cout << "Enter diameter: ";
    cin >> pizzauser.diameter;

    cout << "Enter weight: ";
    cin >> pizzauser.weight;

    cout << "Brand name: " << pizzauser.brand << ", ";
    cout << "Diameter: " << pizzauser.diameter << ", ";
    cout << "Weight: " << pizzauser.weight << endl;

	cin.get();
    cin.get();
    return 0; 
}