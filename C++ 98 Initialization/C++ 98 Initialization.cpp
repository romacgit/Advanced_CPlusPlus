// C++ 98 Initialization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	class C {
	public:
		string text;
		int id;
	};

	C c1 = { "Hello", 7 };
	cout << c1.text << endl;

	struct S {
	public:
		string text;
		int id;
	};

	S s1 = { "Hello", 7 };
	cout << c1.text << endl;

	struct R {
	public:
		string text;
		int id;
	} r1 = { "Hello", 7 }, r2 = {"Hi", 8};

	cout << r1.text << endl;
	cout << r2.text << endl;

	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	cin.get();
    return 0;
}

