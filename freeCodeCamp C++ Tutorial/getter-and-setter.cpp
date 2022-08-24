// (3:41:43) Getters & Setters

#include <iostream>
using namespace std;

class Movie {
    public: 
        string title, director;

        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating) { // control access to elements and what people can rate
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating() {
            return rating;
        }

    private: // any attributes and variables will be private only to the class, not the program
        string rating; // set it private so other can't access and change the parameter value
};

int main() {
    Movie inception("Inception", "Christopher Nolan", "PG-13");

    inception.setRating("PG-13");
    cout << inception.getRating() << endl; // G, PG, PG-13, R, NR

    return 0;
}