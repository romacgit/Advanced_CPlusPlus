// Nested Template Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include "ring.h"

using namespace std;

int main()
{
	ring<string>::iterator it;

	it.print();

	//cout << *it << endl;

	/*textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");

	for (int i = 0; i < textring.size(); i++)
		cout << textring.get(i) << endl;
*/
	cin.get();
    return 0;
}

