// Abstract Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	virtual void speak() = 0;
	virtual void run() = 0;
};

class Dog : public Animal {
public:
	virtual void speak() {
		cout << "Woof" << endl;
	}
};

class Labrador : public Dog {
public:
	virtual void run() {
		cout << "Labrador running" << endl;
	}
};

void test(Animal& a) {
	a.run();
}

int main()
{
	Labrador lab;
	lab.speak();
	lab.run();

	Animal* animals[5];
	animals[0] = &lab;

	animals[0]->speak();
	test(lab);

	cin.get();
    return 0;
}

