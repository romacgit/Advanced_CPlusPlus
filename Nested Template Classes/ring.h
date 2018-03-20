#pragma once

#include <string>

using namespace std;

template<class T>
class ring
{

public:
	class iterator;
};

template<class T>
class ring<T>::iterator {
public:
	void print() {
		cout << "Hello from iterator" << endl;
	}
	// uncomment this to activate the bottom code
	// void print();
};

// this is also possible 
//void ring::iterator::print() {
//	cout << "Hello from iterator" << endl;
//}

