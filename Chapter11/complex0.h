#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class complex
{
private:
	double real;
	double imag;
public:
	complex(double r = 0, double i = 0);
	~complex();
	
	complex operator+(const complex &cp) const;
	complex operator-(const complex &cp) const;
	complex operator*(const complex &cp) const;
	complex operator~() const;

	friend complex operator*(double x, const complex &cp);
	friend std::ostream& operator<<(std::ostream& os, const complex &cp);
	friend std::istream& operator>>(std::istream& is, complex &cp);
};

#endif
