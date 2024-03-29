// Name     : This.cpp

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

    Person person1;
    Person person2("Bob", 42);
    Person person3("Sue", 25);

    // & to get access to memory address of a variable
    cout << person2.toString() << "; memory location: " << &person2 << endl;
    cout << person3.toString() << "; memory location: " << &person3 << endl;

    return 0;
}
