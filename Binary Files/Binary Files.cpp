// Binary Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop)

int main()
{
	Person someone = { "Frodo", 220, 0.8 };

	string fileName = "test.bin";

	/////////// Write binary file ////////////
	fstream myFile;

	myFile.open(fileName, ios::binary|ios::out);

	if (myFile.is_open()) {
		myFile.write(reinterpret_cast<char*>(&someone), sizeof(Person));
		myFile.close();
	}
	else {
		cout << "Could not create file " + fileName << endl;
	}

	/////////// Read binary file ////////////
	Person someoneElse = {};

	myFile.open(fileName, ios::binary | ios::in);

	if (myFile.is_open()) {
		myFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));
		myFile.close();
	}
	else {
		cout << "Could not read file " + fileName << endl;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
	cin.get();
    return 0;
}

