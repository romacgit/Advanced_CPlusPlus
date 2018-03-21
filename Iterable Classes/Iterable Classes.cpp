// Iterable Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ring.h"

using namespace std;

int main()
{
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");

	// C++ 98 iteration
	for (ring<string>::iterator it=textring.begin(); it!=textring.end(); it++)
		cout << *it << endl;

	cout << endl;

	// C++ 11 iteration
	for (auto value : textring)
		cout << value << endl;

	cin.get();
    return 0;
}

