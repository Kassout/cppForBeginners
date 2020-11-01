// Name     : Char.cpp

#include <iostream>
using namespace std;

// Create a char string and output it
// Output all the chars with a for loop
// Output all the chars with a while(true) loop

void charString() {
    char text[] = "Bonjour!";

    cout << text << endl;
}

void forLoopChar() {
    char text[] = "Bonjour";

    for (int i = 0; i < sizeof(text); i++) {
        cout << text[i] << flush;
    }
}

void whileLoopChar() {
    char text[] = "Bonjour";

    int k = 0;

    while(true) {
        if (text[k] == 0) {
            break;
        }

        cout << text[k] << flush;

        k++;
    }
}

int main() {

    char text[] = {'h', 'e', 'l', 'l', 'o'};
    char text2[] = "hello";

    cout << text2 << endl;

    for (int i = 0; i < sizeof(text2); i++) {
        // (int)text2[i] ascii value
        cout << i << ": " << (int)text2[i] << endl;
    }

    int k = 0;

    while (true) {

        if(text2[k] == 0) {
            break;
        }

        cout << text2[k] << flush;

        k++;
    }

    cout << "==============================" << endl;
    charString();
    forLoopChar();
    cout << endl;
    whileLoopChar();

    return 0;
}
