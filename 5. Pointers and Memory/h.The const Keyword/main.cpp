// Name     : Const.cpp

#include <iostream>
using namespace std;

class Animal {
private:
    string name;

public:
    void setName(string name) { this->name = name; };
    void speak() const { cout << "My name is: " << name << endl; };
};

int main() {

    const double PI = 3.141592;
    cout << PI << endl;

    Animal animal;
    animal.setName("Freddy");
    animal.speak();

    int value = 8;

/*
    // the int is Constant.
    const int *pValue = &value;
    // the pointer is Constant.
    int * const pValue = &value;
    // Int and Pointer is Constant.
    const int * const pValue = &value;
*/

    int *pValue = &value;

    cout << *pValue << endl;

    int number = 11;
    pValue = &number; // Error with this: int * const pValue = &value;
    *pValue = 12; // Error with this: const int *pValue = &value;

    cout << *pValue << endl;

    return 0;
}
