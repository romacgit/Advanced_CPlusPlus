// Reading Text Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string inFileName = "test.txt";
	fstream readFile;

	readFile.open(inFileName, ios::in);

	if (readFile) {
		string line;
		while (!readFile.eof()) {
			getline(readFile, line);
			cout << line << endl;
		}
		readFile.close();
	}
	else
		cout << "Can not open file: " << inFileName << endl;

	cin.get();
	return 0;
}

