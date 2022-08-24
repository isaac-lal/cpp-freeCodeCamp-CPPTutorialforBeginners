// (1:55:58) Building a Better Calculator

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Please enter first number: " << endl;
    cin >> num1;
    cout << "Please enter the operator: " << endl;
    cin >> op;
    cout << "Please enter second number: " << endl;
    cin >> num2;

    int result;
    
    if(op == '+') {
        result = num1 + num2;
    } else if(op == '-') {
        result = num1 - num2;
    } else if(op == '/') {
        result = num1 / num2;
    } else if(op == '*') {
        result = num1 * num2;
    } else {
        cout << "Invalid Operator" << endl;
    }

    cout << result;

    return 0;
}