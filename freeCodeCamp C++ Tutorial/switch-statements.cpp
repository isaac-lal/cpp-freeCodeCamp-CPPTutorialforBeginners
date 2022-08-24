// (2:02:20) Switch Statements

#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum) {
    string dayName;

    switch(dayNum) { // add values that checks if it fits a certain day
        case 0: // much easier to use the switch statement
            dayName = "Sunday";
            break;
        case 1: 
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default: // default is when the number isn't specified
            dayName = "Invalid Day Number"; 
    }

    return dayName;
}

int main() {
    cout << getDayOfWeek(3);

    return 0;
}