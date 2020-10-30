// Name     : New.cpp

#include <iostream>
using namespace std;

class Animal {
private:
    string name;

public:
    Animal() {
        cout << "Animal created." << endl;
    }

    Animal(const Animal& other):
    name(other.name) {
        cout << "Animal created by copying." << endl;
    }

    ~Animal() {
        cout << "Destructor called" << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() const {
        cout << "My name is: " << name << endl;
    }
};

Animal *createAnimal() {
    Animal *a = new Animal;
    a->setName("Bob");
}

int main() {

    // Allocate memory explicitly
    // parenthesis optional if constructor with no parameter
    Animal *pCat1 = new Animal();
    // special synthax for pointers (*pCat1).setName() = pCat1->setName()
    pCat1->setName("Freddy");
    pCat1->speak();
    // dealocate memory
    delete pCat1;

    Animal *pCat2 = NULL;

    cout << sizeof(pCat1) << endl;

    return 0;
}
