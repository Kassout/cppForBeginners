// Name		: Postfix.cpp

#include <iostream>
using namespace std;

int main() {

	int value = 8;

	// postfix
	cout << value++ << endl;
	cout << value << endl;

	// prefix
	int number = ++value;
	cout << "Number is: " << number << endl;
	cout << "Value is now: " << value << endl;

	return 0; 
}