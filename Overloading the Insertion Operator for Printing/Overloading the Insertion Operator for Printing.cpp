// Overloading the Insertion Operator for Printing.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Test {
private:
	string name;
	int id;

public:

	Test() {
		id = 0;
		name = "";
	}

	Test(int id, string name) : id(id), name(name) {

	}

	~Test() {
		//cout << "Object destroyed" << endl;
	}

	void print() {
		cout << id << ": " << name << endl;
	}

	const Test &operator=(const Test &other) {

		cout << "Assignment running" << endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test &other) {
		cout << "Copy Constructor running" << endl;
		*this = other;
	}

	friend ostream& operator<<(ostream &out, const Test &test) {
		out << test.id << ": " << test.name;
		return out;
	}
};

int main()
{
	Test test1(10, "Mike");

	cout << test1 << endl;
	cin.get();
    return 0;
}

