// (1:35:22) If Statements

#include <iostream>
using namespace std;

int main() {
    bool isCool = false;
    bool isNice = true;

    if(isCool && isNice) { // && means and, || means or
        cout << "You are nice and cool";
    } else if(isCool && !isNice) {
        cout << "You are cool, but mean";
    } else if(!isCool && isNice) {
        cout << "You are nice, but not cool";
    } else {
        cout << "You are not nice and cool";
    }

    return 0;
}