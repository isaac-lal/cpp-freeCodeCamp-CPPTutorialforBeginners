// (2:10:47) While Loops

#include <iostream>
using namespace std;

int main() {
    int index = 1; // if it's 6, not going to execute

    while(index <= 5) { // while the condition is true, it will continue to execute the code
        cout << index << endl;
        index++; // adds one to the index
    }
    /* The reverse: do loop
    do { // not too necessary though
        cout << index << endl;
        index++; // adds one to the index
    } while(index <= 5);
    */ 

    // WATCH OUT FOR THE INFINITE LOOP!!!!!
    // Sometimes while loops aren't necessary
    return 0;
}