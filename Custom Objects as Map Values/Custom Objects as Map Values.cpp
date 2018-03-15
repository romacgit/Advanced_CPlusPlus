// Custom Objects as Map Values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Person {
private:
	string name;
	int age;
public:

	Person():name(""), age(0){}

	Person(string name, int age): name(name), age(age) {
	}

	Person(const Person &other) {
		cout << "Copyconstructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	void print() const {
		cout << name << ": " << age << endl;
	}
};

int main()
{
	map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Vicky", 30);
	people[2] = Person("Raj", 20);

	people.insert(make_pair(55, Person("Bob", 45)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->first << ": " << flush;
		it->second.print();
	}


	cin.get();
    return 0;
}

