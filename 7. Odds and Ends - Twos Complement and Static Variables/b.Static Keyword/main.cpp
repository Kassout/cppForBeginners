// Name     : Static.cpp

#include <iostream>
using namespace std;

// .h header file
class Test {
public:
    static int const MAX = 99;
private:
    // static link the variable to the class, not to an object of it
    int id;
    static int count;

public:
    Test() {
        id = count++;
    }

    int getId() {
        return id;
    }

    static void showInfo() {
        cout << count << endl;
    }
};

// .cpp source
int Test::count = 0;

// Define and output a public static constant
// Define and output a non-static field
// Output a static field with a static method
// Try incrementing static int field with postfix and prefix increment operators
// Try assigning object ID based on static cound incremented in constructor

int main() {

    cout << Test::MAX << endl;

    Test test1;
    cout << "Objects 1 ID: " << test1.getId() << endl;
    Test test2;
    cout << "Objects 2 ID: " << test2.getId() << endl;

    Test::showInfo();


    return 0;
}
