// Ring Buffer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ring.h"
#include <iostream>

int main()
{
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");

	for (int i = 0; i < textring.size(); i++)
	cout << textring.get(i) << endl;
	
	cin.get();
	return 0;
}

