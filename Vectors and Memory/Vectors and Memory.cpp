// Vectors and Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<double> numbers(0);
	int capacity = numbers.capacity();

	cout << "Capacity: " << capacity << endl;

	for (int i = 0; i < 10000; i++) {
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}

	cin.get();
    return 0;
}

