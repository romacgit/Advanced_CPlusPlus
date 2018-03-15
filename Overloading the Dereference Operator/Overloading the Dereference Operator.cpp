// Overloading the Dereference Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main()
{
	Complex c1(2, 4);

	cout << *c1 + *Complex(4,3) << endl;

	cin.get();
    return 0;
}

