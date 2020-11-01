// Name     : Allocating Memory.cpp

#include <iostream>
using namespace std;

class Animal {
private:
    string name;

public:
    Animal() {
        cout << "Animal created." << endl;
    }

    Animal(const Animal& other) :
    name(other.name) {
        cout << "Animal created by copying." << endl;
    }

    ~Animal() {
        cout << "Destructor called." << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() const {
        cout << "My name is: " << name << endl;
    }
};

class Person {
private:
    string name;

public:
    Person() {
        cout << "Person created." << endl;
    }

    Person(const Person& other) :
            name(other.name) {
        cout << "Person created by copying." << endl;
    }

    ~Person() {
        cout << "Destructor called." << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() const {
        cout << "My name is: " << name << endl;
    }
};

int main() {

    int *pInt = new int;

    *pInt = 8;
    cout << *pInt << endl;

    delete pInt;

    Animal *pAnimal = new Animal[10];

    pAnimal[5].setName("George");
    pAnimal[5].speak();

    // delete all allowed memory
    delete [] pAnimal;

    char *pMem = new char[1000];
    delete [] pMem;

    cout << "====================" << endl;

    char c = 'a';
    c++;
    string name(1,c);
    cout << name << endl;

    return 0;
}
