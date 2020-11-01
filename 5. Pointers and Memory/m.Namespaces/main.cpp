// Name     : Namespaces.cpp

#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;
using namespace jwp;

int main() {

    Cat cat;
    cat.speak();

    jwp::Cat cat2;
    cat2.speak();

    // call the namespace without using globally
    cats::Cat cat3;
    cat3.speak();

    cout << cats::CATNAME << endl;
    cout << jwp::CATNAME << endl;

    cout << CATNAME << endl;

    return 0;
}
