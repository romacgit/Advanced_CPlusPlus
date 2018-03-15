#pragma once

#include <iostream>
using namespace std;

namespace caveofprogramming{

class Complex
{
public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	const Complex &operator=(const Complex &other);
	~Complex();
	
	double getReal() const { return real; }
	double getImaginary() const { return imaginary; }



private:
	double real;
	double imaginary;
};

ostream &operator<<(ostream &out, const Complex &c);

}