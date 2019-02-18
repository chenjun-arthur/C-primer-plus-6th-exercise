#include <iostream>
#include "complex0.h"
using std::cout;

complex::complex(double r, double i) {
	real = r;
	imag = i;
}

complex::~complex() {}

complex complex::operator+(const complex &cp) const {
	return complex(real + cp.real, imag + cp.imag);
}

complex complex::operator-(const complex &cp) const {
	return complex(real - cp.real, imag - cp.imag);
}

complex complex::operator*(const complex &cp) const {
	return complex(real * cp.real - imag * cp.imag, 
		           real * cp.imag + imag * cp.real);
}

complex complex::operator~() const {
	return complex(real, -imag);
}

complex operator*(double x, const complex &cp) {
	return complex(x * cp.real, x * cp.imag);
}

std::ostream& operator<<(std::ostream& os, const complex &cp) {
	os << '(' << cp.real << ", " << cp.imag << "i)";
	return os;
}

std::istream& operator>>(std::istream& is, complex &cp) {
	cout << "real: ";
	if (!(is >> cp.real)) return is;
	cout << "imaginary: ";
	is >> cp.imag;
	return is;
}
