#include <iostream>
#include <string>

using namespace std;

class CanGoWrong {
public: 
	CanGoWrong() {
		char *pMemory = new char[0];		// already shown that array is to large
		delete[] pMemory;
	}
};

int main() {
	try {
	CanGoWrong wrong;
	}
	catch (bad_alloc &e) {
		cout << "Caught Exception: " << e.what() << endl;
		cin.get();
	}

	cout << "Still running" << endl;
	cin.get();


	return 0;
}