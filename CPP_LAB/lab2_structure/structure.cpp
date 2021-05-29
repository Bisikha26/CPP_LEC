//Basic implementation of Structure using C++. 
// Q. Write a program in C++ to read the record of a student (name, address, roll) and display them using structure

#include<iostream>
#include<conio.h>

using namespace std;

struct student {
    char name[20];
    int roll;
    char address[20];
};

int main() {
    student s;
    cout<<"Enter details of the student:"<<endl;
    cout<<"Name: ";
    cin>>s.name;
    cout<<"Roll No: ";
    cin>>s.roll;
    cout<<"Address: ";
    cin>>s.address;

    cout<<"\n The detail of the student is: ";
    cout<<"Name: " <<s.name<<endl<<"Roll No: "<<s.roll<<endl<<"Address: "<<s.address<<endl;
}


