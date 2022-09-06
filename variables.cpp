// (0:19:55) Variables

#include <iostream>
using namespace std;

int main() {

    // VARIABLES
    string characterName = "Isaac";
    int characterAge;
    characterAge = 18;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;

    characterName = "Mike"; // can change mid-program
    characterAge = 25;

    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    return 0;
}