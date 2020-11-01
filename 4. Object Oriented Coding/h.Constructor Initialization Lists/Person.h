#ifndef CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H
#define CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor Initialization List
    Person(): age(0), name("unnamed"){};
    Person(string name, int age);

    string toString();
};


#endif //CONSTRUCTOR_INITIALIZATION_LISTS_PERSON_H
