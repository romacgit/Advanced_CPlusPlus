// Object Slicing and Polymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Parent {
private:
	int one;

public:
	Parent(): one(0) {

	}

	Parent(const Parent &other) {
		one = other.one;
		cout << "copy parent: " << one << endl;
	}

	virtual void print() {
		cout << "parent: " << one << endl;
	}

	virtual ~Parent() {

	}


};

class Child : public Parent {
private:
	int two;

public:
	Child(): two(1){}

	void print() {
		cout << "child: " << two << endl;
	}
};


int main()
{
	Child c1;
	Parent &p = c1;

	p.print();		// prints child

	Parent p2 = Child();
	p2.print();		// prints Parent

	cin.get();
    return 0;
}

