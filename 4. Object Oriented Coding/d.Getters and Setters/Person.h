#ifndef GETTERS_AND_SETTERS_PERSON_H
#define GETTERS_AND_SETTERS_PERSON_H

#include <iostream>

using namespace std;

class Person {
private:
    string name;

public:
    Person();
    string toString();
    void setName(string Name);
    string getName();
};


#endif //GETTERS_AND_SETTERS_PERSON_H
