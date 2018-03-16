// Template Functions and Type Inference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void print(T n) {
	cout << "Template version: " << n << endl;
}

void print(int value) {
	cout << "Non-template version: " << value << endl;
}

template<typename T>
void show() {
	cout << T() << endl;
}

int main()
{
	print<string>("Hello");
	print<int>(5);

	print("Hi there");

	print<>(6);
	print(6);

	// not possible without specific type
	show<double>();

	cin.get();
	return 0;
}

