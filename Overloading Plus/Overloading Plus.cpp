// Overloading Plus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main()
{
	Complex c1(3,4);
	Complex c2(2, 3);
	Complex c3 = c1 + c2;
	Complex c4(4, 2);
	Complex c5 = c4 + 7;
	Complex c6(1, 7);

	cout << c1+c2+c3 << endl;
	cout << c5 << endl;
	cout << 3.2 + c6 << endl;
	cout << 7 + c1 + c2 + 8 + 9 + c6 << endl;

	cin.get();
    return 0;
}

