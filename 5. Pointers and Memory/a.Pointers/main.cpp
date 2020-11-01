// Name     : Pointers.cpp

#include <iostream>
using namespace std;

// change the copy of value
void manipulate(double *pValue) {
    cout << "2. Value of int in manipulate: " << *pValue << endl;
    *pValue = 10.0;
    cout << "3. Value of int in manipulate: " << *pValue << endl;
}

int main() {

    int nValue = 8;

    // int pointer (pointer to an int)
    // & adress of
    // int* is the memory adress
    int *pnValue = &nValue;

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int address: " << pnValue << endl;
    // *pnValue to dereferencing the pointer and get the value
    cout << "Int value via pointer: " << *pnValue << endl;

    cout << "========================" << endl;

    double dValue = 123.4;
    cout << "1. dValue: " << dValue << endl;
    manipulate(&dValue);
    cout << "4. dValue: " << dValue << endl;

    return 0;
}
