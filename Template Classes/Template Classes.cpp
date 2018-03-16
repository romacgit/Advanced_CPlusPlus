// Template Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<class T>
class Test {
private: 
	T obj;

public:
	Test(T obj) {
		this->obj = obj;
	}

	void print() {
		cout << obj << endl;
	}
};


int main()
{
	Test<string> test1("Hallo");
	test1.print();

	cin.get();
    return 0;
}

