/*Chapter 10 Programming Exercises
6. Here’s a class declaration:
class Move
{
private:
double x;
double y;
public:
Move(double a = 0, double b = 0); // sets x, y to a, b
showmove() const; // shows current x, y values
Move add(const Move & m) const;
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
reset(double a = 0, double b = 0); // resets x,y to a, b
};
Create member function definitions and a program that exercises the class.
*/
#include <iostream>

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0); // sets x, y to a, b
	void showmove() const; // shows current x, y values
	Move add(const Move & m) const;
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0); // resets x,y to a, b
};

//constructor
Move::Move(double a, double b) {
	x = a;
	y = b;
}

void Move::showmove() const {
	using std::cout;
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";
}

Move Move::add(const Move &m) const {
	return Move(x + m.x, y + m.y);
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}

int main()
{
	Move m;
	Move n = Move(1.1, 2.2);
	m.showmove();
	m = m.add(n);
	m.showmove();
	n.reset(3.3, 4.4);
	n.showmove();

	return 0;
}



