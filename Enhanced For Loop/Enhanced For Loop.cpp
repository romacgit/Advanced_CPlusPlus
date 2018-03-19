// Enhanced For Loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	auto texts = { "one", "two", "three" };

	for (auto text : texts) {
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(7);
	numbers.push_back(8);
	numbers.push_back(10);
	numbers.push_back(11);

	for (auto number : numbers)
		cout << number << endl;

	string hello = "Hello";

	for (auto c : hello) {
		cout << c << endl;
	}


	cin.get();
    return 0;
}

