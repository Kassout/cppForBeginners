// Name     : Arithmetic.cpp

#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precedence
 */

// Take large numbers of seconds and convert it to hours, minutes, seconds
// Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100 iterations

void convertSecondsToHours(int number) {
    int hours;
    int minutes;
    int seconds;

    hours = number / 3600;
    number %= 3600;
    minutes = number / 60;
    number %=60;
    seconds = number;

    cout << hours << "h" << minutes << "min" << seconds << "s" << endl;
}

void loopEveryHundred() {
    int count = 0;
    for (int i = 0; i < 10000; i++) {
        if (i%100 == 0) {
            cout << "." << flush;
            count++;
        }
    }
    cout << endl << count << endl;

}


int main() {

    double value1 = (double)7/2;
    cout << value1 << endl;

    int value2 = (int)7.3;
    cout << value2 << endl;

    int value3 = 8;
    value3 += 1; // value3 = value3 + 1 or value3++;
    cout << value3 << endl;

    int value4 = 10;
    value4 /= 5; // value4 = value4 / 5;
    cout << value4 << endl;

    int value5 = 12 % 5;
    cout << value5 << endl;

    double equation = ((5/4)%2) + (2.3*6);
    cout << equation << endl;

    convertSecondsToHours(3662);
    loopEveryHundred();

    return 0;
}
