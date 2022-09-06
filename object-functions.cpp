// (3:34:41) Object Functions

#include <iostream>
using namespace std;

class Student { // template of what a student will be
    public:
        string name, major;
        double gpa;

        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if(gpa >= 3.0) { // if requirements change, all is needed is to update this
                return true;
            } else {
                return false; // false = 0, true = 1
            }
        }
};

int main() {
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}