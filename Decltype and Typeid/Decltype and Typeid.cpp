// Decltype and Typeid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
	string value;

	decltype(value) name = "Bob";

	cout << typeid(value).name() << endl;
	cout << name << endl;

	cin.get();
    return 0;
}

