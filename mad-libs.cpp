// (1:09:28) Building a Mad Libs

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string color, pluralNoun, celebrity;

    cout << "Please enter a color: " << endl;
    getline(cin, color);
    cout << "Please enter a plural noun: " << endl;
    getline(cin, pluralNoun);
    cout << "Please enter a celebrity name: " << endl;
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue " << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}