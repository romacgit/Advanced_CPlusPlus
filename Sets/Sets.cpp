// Sets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	set<int> numbers;

	numbers.insert(1);
	numbers.insert(2);
	numbers.insert(3);
	numbers.insert(3);
	numbers.insert(30);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
		cout << *it << endl;

	cout << endl;

	set<int>::iterator itFind = numbers.find(30);

	if (itFind != numbers.end())
		cout << "Found: " << *itFind << endl;

	cout << endl;

	if (numbers.count(30))
		cout << "Number found: " << endl;

	cin.get();
	return 0;
}

