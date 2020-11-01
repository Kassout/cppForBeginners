#ifndef CONSTRUCTOR_PARAMETERS_AND_OVERLOADING_PERSON_H
#define CONSTRUCTOR_PARAMETERS_AND_OVERLOADING_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    // direct implementation
    Person(string newName) {name = newName; age = 0;};
    Person(string newName, int newAge);
    string toString();
};


#endif //CONSTRUCTOR_PARAMETERS_AND_OVERLOADING_PERSON_H
