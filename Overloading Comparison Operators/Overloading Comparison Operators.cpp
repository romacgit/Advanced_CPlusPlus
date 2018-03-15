// Overloading Comparison Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main()
{
	Complex c1(3, 2);
	Complex c2(3, 1);

	if (c1 == c2) {
		cout << "Equal" << endl;
	}
	else
		cout << "not Equal" << endl;

	if (c1 != c2) {
		cout << "not Equal" << endl;
	}
	else
		cout << "Equal" << endl;

	cin.get();
    return 0;
}

