// iostream = input-output stream
#include <iostream>

// std = standard
using namespace std;

int main() {

    // flush don't make a carriage return just like endl
    cout << "Starting program..." << flush;

    // cout to output text in the console
    cout << "This is some text." << endl;
    // endl flush the buffer
    /*
     * flush the buffer mean prints everything that is awaiting to be printed.
     */

    cout << "Banana. " << "Apple. " << "Orange." << endl;

    cout << "This is some more text." << endl;

    return 0;
}