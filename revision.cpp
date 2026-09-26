#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int pages;
    int price;
};
int main(){
    Book b1;
    b1.title="C++ Programming";
    b1.author="Bjarne Stroustrup";
    b1.pages=500;
    b1.price=1500;
    Book b2;
    b2.title="Python Programming";
    b2.author="Guido van Rossum";
    b2.pages=400;
    b2.price=1200;
    Book b3;
    b3.title="Java Programming";
    cout<<b3.title<<endl;
    b3.author="James Gosling";
    b3.pages=600;
    b3.price=2000;
    cout<<"Title: "<<b1.title<<" "<<"Author: "<<b1.author<<" "<<"Pages: "<<b1.pages<<" "<<"Price: "<<b1.price<<endl;
    cout<<"Title: "<<b2.title<<" "<<"Author: "<<b2.author<<" "<<"Pages: "<<b2.pages<<" "<<"Price: "<<b2.price<<endl;
    cout<<"Title: "<<b3.title<<" "<<"Author: "<<b3.author<<" "<<"Pages: "<<b3.pages<<" "<<"Price: "<<b3.price<<endl;
    return 0;
}