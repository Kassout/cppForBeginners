#ifndef THIS_PERSON_H
#define THIS_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person();
    Person(string name, int age);

    string toString();
};


#endif //THIS_PERSON_H
