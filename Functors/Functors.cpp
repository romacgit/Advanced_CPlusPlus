// Functors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// can be a class as well
struct Test {
	virtual bool operator()(string &value) = 0;
	virtual ~Test(){}
};

struct MatchTest: Test {
	virtual bool operator()(string &value) {
		return value == "lion";
	}
};

void check(string text, Test &test) {
	if (test(text))
		cout << "Text matches!" << endl;
	else
		cout << "No match." << endl;
}

int main()
{
	MatchTest pred;

	string value = "lion";

	cout << pred(value) << endl;

	MatchTest m;
	check("liond", m);

	cin.get();
    return 0;
}

