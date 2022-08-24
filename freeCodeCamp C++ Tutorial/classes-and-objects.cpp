// (3:13:26) Classes & Objects

#include <iostream>
using namespace std;

class Game {
    public: // this class is a general use definition for the program
        string title, publisher; // defining general variables
        int version;
};

int main() {
    // all entities can't be represented by data types
    // no iPhone, book, person, etc. data type
    // CLASSES specify a data type, and make it better
    // blueprint of a datatype (in this case: book)

    Game game1;
    game1.title = "Destiny";
    game1.publisher = "Bungie";
    game1.version = 3;

    cout << game1.title << endl;
    cout << game1.publisher << endl;
    cout << game1.version << endl;

    Game game2;
    game2.title = "Destiny 2";
    game2.publisher = "Bungie & Sony";
    game2.version = 5;

    cout << game2.title << endl;
    cout << game2.publisher << endl;
    cout << game2.version << endl;

    return 0;
}