// Template Functions 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void print(T n) {
	cout << n << endl;
}

int main()
{
	print<string>("Hello");
	print<int>(5);

	print("Hi there");

	cin.get();
    return 0;
}

