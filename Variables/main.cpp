// Name     : Variables.cpp

#include <iostream>
using namespace std;

int main() {

    // camel case
    int number_cats = 5;

    // upper case style
    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = number_cats + numberDogs;

    cout << "Number of cats: " << numberCats << endl;
    cout << "Number of dogs: " << numberDogs << endl;

    cout << "Total number of animals: " << numberAnimals << endl;

    cout << "New dog acquired!" << endl;

    numberDogs += 1;

    cout << "New number of dogs: " << numberDogs << endl;

    return 0;
}
