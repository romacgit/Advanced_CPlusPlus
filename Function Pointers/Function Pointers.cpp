// Function Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void test(int value) {
	cout << "Hello: " << value << endl;
}



int main()
{
	test(7);

	void (*pTest)(int) = test;

	pTest(8);

	cin.get();
    return 0;
}

