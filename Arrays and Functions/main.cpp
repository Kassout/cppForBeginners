// Name     : Arrays.cpp

#include <iostream>
using namespace std;

// we lose information about the size of the array
void show1(const int nElements, string texts[]) {

    // size of a pointer (same size as long, 4 for windows x64)
    cout << sizeof(texts) << endl;

    for (int i = 0; i < nElements; i++) {
        cout << texts[i] << endl;
    }
}

// identical to show1
void show2(const int nElements, string *texts) {

    // size of a pointer (same size as long, 4 for windows x64)
    cout << sizeof(texts) << endl;

    for (int i = 0; i < nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[3]) {

    cout << sizeof(texts) << endl;

    for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
        cout << texts[i] << endl;
    }
}

string *getArray() {
    // Don't return pointers to local variables
    string texts[] = {"one", "two", "three"};

    return texts;
}

// still not optimal because you need to know you have to delete memory
char *getMemory() {
    // Better because pointer won't be dealocated as we're using "new"
    char *pMem = new char[100];

    return pMem;
}

void freeMemory(char *pMem) {
    delete [] pMem;
}

int main() {

    string texts[] = {"apple", "orange", "banana"};

    cout << sizeof(texts) << endl;

    show1(3, texts);
    cout << "========================" << endl;
    show2(3, texts);
    cout << "========================" << endl;
    show3(texts);

    // common pattern
    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}
