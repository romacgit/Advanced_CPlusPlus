// Overloading the Assignment Operator.cpp : Defines the entry point for the console application.
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

};


int main()
{
	Test test1(10, "Mike");
	cout << "Print test1 " << flush;
	test1.print();

	Test test2(20, "Bob");
	cout << "Print test2 " << flush;
	test2.print();

	test2 = test1;
	test2.print();

	Test test3;
	//test3 = test2 = test1;

	test3.operator=(test2);
	cout << "Print test3 " << flush;
	test3.print();

	cout << endl;
	// Copy initialization
	Test test4 = test1;
	test4.print();

	cin.get();

    return 0;
}

