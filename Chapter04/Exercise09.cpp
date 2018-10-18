/*
Chapter 4 Programming Exercises
5. The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that declares such a structure
and creates a CandyBar variable called snack, initializing its members to "Mocha
Munch", 2.3, and 350, respectively.The initialization should be part of the declaration
for snack. Finally, the program should display the contents of the snack variable.

6. The CandyBar structure contains three members, as described in Programming
Exercise 5.Write a program that creates an array of three CandyBar structures, initializes
them to values of your choice, and then displays the contents of each structure.

9. Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.
*/
#include <iostream>
struct CandyBar
{
	char brand[20];
	double weight;
	int calories;
};
int main()
{
    using namespace std;
    
    CandyBar *psnack = new CandyBar [3];

    psnack[0] = {"Mocha Munch", 2.3, 350};
    psnack[1] = {"second", 6.7, 242};
    psnack[2] = {"third", 9.3, 123};
    
    for (int i =0; i<3; i++) {
    	cout << "No. " << i+1 << endl;
    	cout << "Brand name: " << psnack[i].brand << ", ";
        cout << "Weight: " << psnack[i].weight << ", ";
        cout << "Calories: " << psnack[i].calories << endl;
    }


    cin.get();
    return 0; 
}