// (1:20:03) Functions

#include <iostream>
using namespace std;

// FUNCTION STUB (if after main): void sayHi(string name, int age);

// Functions return types
void sayHi(string name, int age) { // no return value, and able to be given parameters
    cout << "Hello " << name << ". You are " << age << endl;
} // FUNCTION SHOULD ALWAYS BE BEFORE MAIN FUNCTION

int main() {
    cout << "Top" << endl;
    sayHi("Isaac", 18); // executes code in the function in main
                        // parameters: specify name in call function, define variable in function parameters
    sayHi("Tom", 26);
    sayHi("Jeff", 21); // functions can reuse and be called as many times
    cout << "Bottom" << endl;

    return 0;
}