// A Complex Number Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main()
{
	Complex c1(2,3);
	Complex c2(c1);
	c1 = c2;

	Complex c3 = c2;

	cout << c2 << c3 << endl;

	cin.get();
    return 0;
}

