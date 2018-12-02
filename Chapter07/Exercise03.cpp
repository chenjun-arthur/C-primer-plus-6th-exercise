/*
Chapter 7 Programming Exercises
3. Here is a structure declaration:
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};
a. Write a function that passes a box structure by value and that displays the
value of each member.
b. Write a function that passes the address of a box structure and that sets the
volume member to the product of the other three dimensions.
c. Write a simple program that uses these two functions.
*/
#include <iostream>
using namespace std;
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};

void showBox(box );
void calculateVolume(box * );

int main()
{
	box boxC = {"Castel C", 1.5, 2.5, 4.4};
	// boxC.maker = "Castel C";
	// boxC.height = 1.5;
	// boxC.width = 2.5;
	// boxC.length = 4.4;
	calculateVolume(&boxC);
	showBox(boxC);
    
	return 0;
}

void calculateVolume(box * boxV)
{
	boxV->volume = (boxV->height) * (boxV->width) * (boxV->length);
}

void showBox(box boxShow)
{
	cout << "Maker: " << boxShow.maker << endl;
	cout << "height = " << boxShow.height << endl;
	cout << "width = " << boxShow.width << endl;
	cout << "length = " << boxShow.length << endl;
	cout << "volume = " << boxShow.volume << endl;
}