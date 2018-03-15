// Parsing Text Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string fileName = "stats.txt";
	fstream input;

	input.open(fileName, ios::in);

	if (!input.is_open()) {
		return 1;
	}
	else {
		string line;
		while (input) {
			getline(input, line, ':');

			int population;
			input >> population;
			input >> ws;		// don't know this

			if (!input) break;

			cout << line << " -- " << population << endl;
		}
		input.close();
	}

	cin.get();
    return 0;
}

