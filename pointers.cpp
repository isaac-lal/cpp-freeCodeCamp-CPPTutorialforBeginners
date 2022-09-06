// (2:59:11) Pointers

#include <iostream>
using namespace std;

int main() {
    int age = 19; // memory (RAM = Random Access Memory), all computers use RAM
    int *pAge = &age; // lowercase p = pointer, * stores value of &age pointer
    double gpa = 2.7; // variables are stored values inside computer memory
    double *pGpa = &gpa; // USE SAME DATA TYPE OF POINTER WHERE VALUE IS STORED
    string name = "Mike";
    string *pName = &name;

    cout << "Age: " << &age << endl;
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    cout << *pAge; // a * de-references the pointer, without * it displays the address
    // * = 0x16daef4c8, no * = value (19)

    // * de-references pointers, & references to memory address
    //cout << &age; // & means to print out the memory address of where the variable is stored
    // 0x16daef4c8 is the memory address of age: pointers
    // pointers are another type of data in C++

    return 0;
}