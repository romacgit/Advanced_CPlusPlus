#include <iostream>
#include <string>
#include <exception>

using namespace std;

class MyException : public exception {
public: 
	virtual const char* what() const throw() {
		return "Something bad happended.";
	}
};


class Test {
public:
	void goesWrong() {
		throw MyException();
	}
};


int main() {
	Test test;

	try {
		test.goesWrong();
	}
	catch (MyException &e) {
		cout << "Caught Exception: " << e.what() << endl;
		cin.get();
	}
	return 0;
}