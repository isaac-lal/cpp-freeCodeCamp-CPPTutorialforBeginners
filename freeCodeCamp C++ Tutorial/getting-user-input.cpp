// (0:59:41) Getting User Input

#include <iostream>
using namespace std;

int main() {
    int age; // could also use a doubl
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    /* USED TO GET TEXT FROM A STRING
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // getting a string of text
    cout << "Hello " << name << endl;
    */
   
    return 0;
}