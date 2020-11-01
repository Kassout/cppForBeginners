// Name     : String Streams.cpp

#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string name = "Bob";
    int age = 32;

    // send data to or get data from
    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    string info = ss.str();

    cout << info << endl;

    return 0;
}
