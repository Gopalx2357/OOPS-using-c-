//pass by value and reference
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
/*void Change(Book b){
    b.author ="GATE 2027"; // not changes  because of pass by value 
    b.pages =21000;
}*/
void Change(Book &b){
    b.author ="GATE 2027"; //  changes  because of pass by Reference
    b.pages =21000;
}

int main() {
    Book b1;
    b1.title = "C++ Programming";
    b1.author = "Bjarne Stroustrup";
    b1.pages = 500;
    b1.price = 1500;
    printBookDetails(b1);
    Change(b1);
    printBookDetails(b1);
    return 0;
}
