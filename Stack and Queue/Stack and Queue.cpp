// Stack and Queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

class Test {
private:
	string name;

public:
	Test(string name) :name(name) {

	}

	~Test() {
		//cout << "Object destroyed" << endl;
	}

	void print() {
		cout << name << endl;
	}
};


int main()
{
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("Raj"));
	testStack.push(Test("Sue"));

	// This is invalid code! Object is destroyed.
	/*Test &test1 = testStack.top();
	testStack.pop();
	test1.print();*/	//Reference refers to destroyed objects

	cout << endl;

	Test test2 = testStack.top();
	testStack.pop();
	test2.print();

	cout << endl;

	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	cout << endl;

	// FIFO
	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("Raj"));
	testQueue.push(Test("Sue"));

	while (testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	cout << endl;




	cin.get();
    return 0;
}

