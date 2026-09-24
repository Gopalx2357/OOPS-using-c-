#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int rollno;
    int marks;
};
int main(){
    Student s1;
    s1.name="Gopal";
    s1.age=20;
    s1.rollno=101;
    s1.marks=85;
    Student s2;
    s2.name="rahul";
    s2.age=21;
    s2.rollno=102;
    s2.marks=90;
    Student s3;
    s3.name="Ramesh";
    cout<<s3.name<<endl;
    s3.age=22;
    s3.rollno=103;
    s3.marks=95;
    cout<<"Name: "<<s1.name<<" "<<"Age: "<<s1.age<<" "<<"Roll No: "<<s1.rollno<<" "<<"Marks: "<<s1.marks<<endl;
    cout<<"Name: "<<s2.name<<" "<<"Age: "<<s2.age<<" "<<"Roll No: "<<s2.rollno<<" "<<"Marks: "<<s2.marks<<endl;
    cout<<"Name: "<<s3.name<<" "<<"Age: "<<s3.age<<" "<<"Roll No: "<<s3.rollno<<" "<<"Marks: "<<s3.marks<<endl;
}