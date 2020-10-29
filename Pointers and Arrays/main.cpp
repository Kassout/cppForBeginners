// Name     : Pointers.cpp

#include <iostream>
using namespace std;

// Loop through an array using a pointer, with array element reference syntax
// Loop through an array by incrementing a pointer
// Loop through an array, stopping by comparing two pointers

void loopWithReference(string list[], int listSize) {

    string *pList = list;
    for (int i = 0; i < listSize / sizeof(string); i++) {
        cout << pList[i] << " " << flush;
    }
}

void loopWithIncrementingPointer(string list[], int listSize) {

    string *pList = list;
    for (int i = 0; i < listSize / sizeof(string); i++, pList++) {
        cout << *pList << " " << flush;
    }
}

void loopWithComparingPointers(string list[], int listSize) {
    string *pElement = &list[0];
    string *pEnd = &list[(listSize / sizeof(string)) - 1];

    while(true) {
        cout << *pElement << " " << flush;

        if(pElement == pEnd) {
            break;
        }

        pElement++;
    }
}

int main() {

    string texts[] = {"one", "two", "three"};

    string *pTexts = texts;

    cout << sizeof(texts) / sizeof(string) << endl;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << pTexts[i] << " " << flush;
    }

    cout << endl;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
        cout << *pTexts << " " << flush;
    }

    cout << endl;

    string *pElement = &texts[0];
    string *pEnd = &texts[2];

    while(true) {
        cout << *pElement << " " << flush;

        if(pElement == pEnd) {
            break;
        }

        pElement++;
    }

    cout << endl << "===========================" << endl;

    string list[] = {"cat", "dog", "fish", "squirrel", "hyena", "lizard", "lion", "bear"};
    loopWithReference(list, sizeof(list));
    cout << endl;
    loopWithIncrementingPointer(list, sizeof(list));
    cout << endl;
    loopWithComparingPointers(list, sizeof(list));

    return 0;
}
