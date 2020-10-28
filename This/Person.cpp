#include "Person.h"
#include <sstream>

Person::Person() {
    age = 0;
    name = "";
}

Person::Person(string name, int age) {
    // this contain the memory location of every object you created
    this->name = name;
    this->age = age;

    // begin with 0x which is indicating that is numbered in hexadecimal format
    cout << "Memory location of object: " << this << endl;
}

string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; Age: ";
    ss << age;

    return ss.str();
}