// Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for (int i = 0; i < strings.size(); i++)
		cout << strings[i] << endl;

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
		cout << *it << endl;

	vector<string>::iterator it = strings.begin();
	it += 2;

	cout << *it << endl;


	cout << strings.size() << endl;
	cin.get();

	return 0;
}

