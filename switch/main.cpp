// Name     : switch.cpp

#include <iostream>
using namespace std;

int main() {

    int value = 4;

    switch (value){
        case 4:
            cout << "Value is 4." << endl;
            break;
        // case are not if condition, if you don't put a break at the end,
        // it will execute everything until he encounter one
        case 5:
            cout << "Value is 5." << endl;
            break;
        case 6:
            cout << "Value is 6." << endl;
            break;
        default:
            cout << "Unrecognized value." << endl;
    }

    return 0;
}
