#include "Person.h"
#include <sstream>
using namespace std;

// Constructor Initialization List
Person::Person(string name, int age): name(name), age(age){}

string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; Age: ";
    ss << age;

    return ss.str();
}