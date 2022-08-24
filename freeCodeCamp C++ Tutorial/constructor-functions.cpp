// (3:25:40) Constructor Functions

#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        
        Book() { // can allow no parameters to pass basic values
            title = "no title";
            author = "no author";
            pages = 0;
        }
        
        Book(string aTitle, string aAuthor, int aPages) { 
            // a constructor function, passing values into the function and making name definition easier
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main() {
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkein", 700);
    Book book3;

    cout << book1.title << endl;
    cout << book3.title << endl; // no author

    return 0;
}