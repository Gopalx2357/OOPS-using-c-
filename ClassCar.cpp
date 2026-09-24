#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
};
int main(){
    Car c1;
    c1.brand="Toyota";
    c1.model="Camry";
    c1.year=2020;
    Car c2;
    c2.brand="Honda";
    c2.model="Civic";
    c2.year=2019;
    Car c3;
    c3.brand="Ford";
    cout<<c3.brand<<endl;
    c3.model="Mustang";
    c3.year=2021;
    cout<<"Brand: "<<c1.brand<<" "<<"Model: "<<c1.model<<" "<<"Year: "<<c1.year<<endl;
    cout<<"Brand: "<<c2.brand<<" "<<"Model: "<<c2.model<<" "<<"Year: "<<c2.year<<endl;
    cout<<"Brand: "<<c3.brand<<" "<<"Model: "<<c3.model<<" "<<"Year: "<<c3.year<<endl;
}