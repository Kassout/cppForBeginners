// Name     : Other.cpp

#include <iostream>
using namespace std;

int main() {

    bool bValue = true;
    // 1 = true, 0 = false
    cout << bValue << endl;

    // char takes 1 byte (8bits) of computer memory
    char cValue = 'g';
    cout << cValue << endl;
    cout << (int)cValue << endl;
    cout << "Size of char: " << sizeof(char) << endl;

    char cValue2 = 55;
    cout << cValue2 << endl;

    char cValue3 = 7;
    cout << cValue3 << endl;

    // stock the actual ascii value of the character
    wchar_t wValue = 'i';
    cout << wValue << endl;
    cout << (char)wValue << endl;
    cout << "Size of char: " << sizeof(wchar_t) << endl;

    return 0;
}
