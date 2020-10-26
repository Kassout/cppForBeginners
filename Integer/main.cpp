// Name     : Integer.cpp

#include <iostream>
#include <climits>

using namespace std;

int main() {

    int value = 54656;
    cout << value << endl;

    cout << "Max int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;

    // same size as int for windows OS (4 bytes), (8 bytes for Linux)
    long int lValue = 2345325345345;
    cout << lValue << endl;

    long long int llValue = 2345325345345;
    cout << llValue << endl;

    short int sValue = 23434;
    cout << sValue << endl;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;

    // Can't be negative value with unsigned int
    unsigned int uValue = -2342343;
    cout << uValue << endl;

    return 0;
}
