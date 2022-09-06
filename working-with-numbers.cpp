// (0:49:00) Working With Numbers

#include <iostream>
#include <cmath> // using more math functions
using namespace std;

int main() {
    cout << 5 + 7 << endl; // add
    cout << 5 - 7 << endl; // subtract
    cout << 3 * 3 << endl; // multiply
    cout << 9 / 3 << endl; // divide
    cout << 10 % 3 << endl; // remainder (modulo)

    cout << (4 + 5) * 10 << endl; // multiplication first if no parantheses

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    wnum += 80;
    wnum -= 80;

    cout << wnum << endl;

    cout << 5.5 + 9 << endl; // returns decimal number IF there is a decimal

    // CMATH
    cout << pow(2, 5) << endl; // 2 raised to the 5th power
    cout << sqrt(36) << endl; // squareroot of 36
    cout << round(4.3) << endl; // rounds number
    cout << ceil(4.1) << endl; // rounds UP to nearest whole number
    cout << floor(4.8) << endl; // rounds DOWN to nearest whole number
    cout << fmax(3, 10) << endl; // returns the bigger number
    cout << fmin(3, 10) << endl; // returns the smallest number

    return 0;
}