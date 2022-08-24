// (1:13:45) Arrays

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int luckyNums[20] = {4, 8, 15, 16, 23, 42}; // you can add more elements further into the program
        
    cout << luckyNums[1] << endl;
    luckyNums[3] = 19;

    cout << luckyNums[3];
    luckyNums[10] = 100;
    cout << luckyNums[10];

    return 0;
}