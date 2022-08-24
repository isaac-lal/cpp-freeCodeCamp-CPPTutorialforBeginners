// (0:39:15) Working With Strings

#include <iostream>
using namespace std;

int main() {
    string phrase = "College is cool";
                  // 0123456789->

    cout << "Hunter College\n"; // \n = new line
    cout << "Hello" << endl;

    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl; // prints the first string (starts with 0)
    cout << phrase[2] << endl; // print third char
    
    phrase[8] = 'a';
    cout << phrase[8] << endl; // changes i to a

    cout << phrase.find("cool", 0) << endl; // passing parameters in the parantheses
    cout << phrase.substr(8, 3) << endl; // printing out specific values (can also store in a variable)

    return 0;
}