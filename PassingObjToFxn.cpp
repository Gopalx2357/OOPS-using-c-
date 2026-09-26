//passing object to funtion
#include<iostream>
using namespace std;

class Book {
    public:
    string title;
    string author;
    int pages;
    int price;
};

void printBookDetails(Book b) {
    cout << "Title: " << b.title << " " << "Author: " << b.author << " " << "Pages: " << b.pages << " " << "Price: " << b.price << endl;
}

int main() {
    Book b1;
    b1.title = "C++ Programming";
    b1.author = "Bjarne Stroustrup";
    b1.pages = 500;
    b1.price = 1500;

    Book b2;
    b2.title = "Python Programming";
    b2.author = "Guido van Rossum";
    b2.pages = 400;
    b2.price = 1200;

    printBookDetails(b1);
    printBookDetails(b2);

    return 0;
}