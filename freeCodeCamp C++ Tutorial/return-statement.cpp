// (1:29:47) Return Statement

#include <iostream>
using namespace std;

double cube(double num) {
    double result = num * num * num;

    return result; // return breaks out of the function as well
}

int main() {
    double answer = cube(5.0);
    cout << answer << endl;

    cout << cube(5.0); 

    return 0;
}