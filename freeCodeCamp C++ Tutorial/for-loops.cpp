// (2:29:18) For Loops

#include <iostream>
using namespace std;

int main() {
    /* mimicing while loop  to the for loop
    int index = 1; // initializing a variable
    
    while(index <= 5) {
        cout << index << endl;
        index++;
    }
    */

    for(int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    int nums[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        cout << nums[i] << endl;
    } // can use the for loop to go through all elements in an array
      // MORE USED THAN A WHILE LOOP!!!!

    return 0;
}