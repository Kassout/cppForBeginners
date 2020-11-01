// Name     : References.cpp

#include <iostream>
using namespace std;

// Reference variable as parameter: reference to an existing variable
void changeSomething(double &value) {
    value = 123.4;
}

int main() {

    int value1 = 0;
    // reference for value1, just another name for the same variable
    int &value2 = value1;
    value2 = 10;

    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;

    double value = 4.321;
    changeSomething(value);
    cout << value << endl;

    return 0;
}
