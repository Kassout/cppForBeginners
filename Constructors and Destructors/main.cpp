// Name     : Constructors.cpp

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {

    cout << "Starting program ..." << endl;

    {
        Cat bob;
        bob.speak();
    }
    // Delete bob after the end bracket

    cout << "Ending program ..." << endl;

    return 0;
}
