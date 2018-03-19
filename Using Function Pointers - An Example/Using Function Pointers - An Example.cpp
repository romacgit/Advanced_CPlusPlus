// Using Function Pointers - An Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test) {
	return test == "two";
	//return test.size() == 3;
}

int countStrings(vector<string> &texts, bool(*match)(string test)) {
	int tally = 0;

	for (int i = 0; i < texts.size(); i++) {
		if (match(texts[i])) {
			tally++;
		}
	}
	return tally;
}

int main()
{
	vector<string> tests;
	tests.push_back("one");
	tests.push_back("two");
	tests.push_back("three");
	tests.push_back("two");
	tests.push_back("four");
	tests.push_back("two");
	tests.push_back("three");

	cout << match("one") << endl;

	count_if(tests.begin(), tests.end(), match);

	cout << countStrings(tests, match) << endl;

	cin.get();
    return 0;
}

