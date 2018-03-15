// Maps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, int> ages;
	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	pair<string, int> addToMap("Peter", 80);
	ages.insert(addToMap);
	ages.insert(pair<string, int>("Susanne", 25));
	ages.insert(make_pair("Tom", 50));

	cout << ages["Raj"] << endl;

	if (ages.find("Vicky") != ages.end()) {
		cout << "Found Vicky" << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}


	cin.get();
    return 0;
}

