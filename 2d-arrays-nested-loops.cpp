// (2:45:21) 2d Arrays & Nested Loops

#include <iostream>
using namespace std;

int main() {
    int numberGrid[3][2] = {{1, 2}, {3, 4}, {5, 6}}; 
    // two array brackets = 2d 
    // row first [], col second []

    cout << numberGrid[0][1] << endl;
    cout << numberGrid[2][0] << endl;

    for(int i = 0; i < 3; i++) { // i < 3 because 3 rows
        for(int j = 0; j < 2; j++) { // i for row, j for col
            cout << numberGrid[i][j];
        } 
        cout << endl; // needed or else it would be infinite loop
    }

    return 0;
}