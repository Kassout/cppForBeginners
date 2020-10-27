// Name     : Prototypes.cpp

// # => pre-process directive

// double bracket for standard location
#include <iostream>

// double quote for local project files
// get this file and paste it here
#include "utils.h"

using namespace std;

/*
* // prototype
* void doSomething();
*/

int main() {

    doSomething();
    doSomething();

    return 0;
}

// don't work to put it below main (except with prototype)
void doSomething() {
    cout << "Hello" << endl;
}

