// (2:18:53) Building a Guessing Game

#include <iostream>
using namespace std;

int main() {
    int secretNum = 7, guess, guessCount = 0, guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses) {
        if(guessCount < guessLimit) {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    } // can be done in multiple ways to get the same result

    if(outOfGuesses) {
        cout << "You lost! Try again";
    } else {
        cout << "You win!";
    }

    return 0;
}