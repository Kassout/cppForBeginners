// Name     : Input.cpp

#include <iostream>
using namespace std;

int main() {

    // << is an insertion operator
    cout << "Enter your name: " << flush;
    string input;
    // >> is the extraction operator
    cin >> input;
    cout << "You entered: " << input << endl;

    cout << "Enter a number: " << flush;
    int value;
    cin >> value;
    cout << "You entered: " << value << endl;

    return 0;
}
