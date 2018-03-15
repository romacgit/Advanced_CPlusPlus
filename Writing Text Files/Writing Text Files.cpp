// Writing Text Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	string outputFileName = "text.txt";
	// ofstream outFile;
	fstream outFile;

	// outFile.open(outputFileName);
	outFile.open(outputFileName, ios::out);

	if (outFile.is_open()) {
		outFile << "Hello World" << endl;
		outFile << 123 << endl;
		outFile.close();
	}
	else
		cout << "Could not create file: " << outputFileName << endl;


    return 0;
}

