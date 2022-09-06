// (3:54:04) Inheritance

#include <iostream>
using namespace std;

class Chef { // superclass
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }

        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }

        void makeSpecialDish() {
            cout << "The chef makes ribs" << endl;
        }
};

class ItalianChef:public Chef { //subclass (inheriting from another class)
    public:
        void makePasta() {
            cout << "The chef makes pasta" << endl;
        }

        void makeSpecialDish() {
            cout << "The chef makes chicken parm" << endl;
        }
};

int main() {
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();
    
    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta(); // normal chef can't make pasta
    italianChef.makeSpecialDish();

    return 0;
}