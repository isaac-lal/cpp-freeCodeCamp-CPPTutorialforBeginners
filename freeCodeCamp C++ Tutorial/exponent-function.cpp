// (2:38:32) Exponent Function

#include <iostream>
using namespace std;

int power(int baseNum, int powNum) {
    int result = 1;

    for(int i = 0; i < powNum; i++) { // whatever value powNum is how long the loop will continue
        result *= baseNum; 
    }

    return result;
}

int main() {
    cout << power(4, 2);

    return 0;
}