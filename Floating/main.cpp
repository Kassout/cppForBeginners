// Name     : Floating.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float fValue = 123.456789;

    cout << "Sizeof float: " << sizeof(fValue) << endl;
    cout << fixed << fValue << endl;
    cout << scientific << fValue << endl;
    cout << setprecision(20) << fixed << fValue << endl;

    double dValue = 123.456789;
    cout << "Sizeof double: " << sizeof(dValue) << endl;
    cout << setprecision(20) << fixed << dValue << endl;

    long double lValue = 123.456789876543210;
    cout << "Sizeof long double: " << sizeof(lValue) << endl;
    cout << setprecision(20) << fixed << lValue << endl;

    return 0;
}
