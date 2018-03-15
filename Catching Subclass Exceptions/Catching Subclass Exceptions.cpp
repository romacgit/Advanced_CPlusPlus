// Catching Subclass Exceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected) throw bad_alloc();

	if (error2Detected) throw exception();
}


int main()
{
	try {
		goesWrong();
	}
	catch (bad_alloc &e) {		// bad_alloc is a subclass of exception class -> therefore catch subclasses first!!!
		cout << "Catching bad_alloc: " << e.what() << endl;
	}
	catch (exception &e) {
		cout << "Catching exception: " << e.what() << endl;
	}
	cin.get();

    return 0;
}

