// Q. Write a program to read the record of 3 students(name, address and roll) and display the record using structure in C++

#include<iostream>
#include<conio.h>

using namespace std;

struct student {
    char name[20];
    int roll;
    char address[20];
};

int main() {
    student s[3];
    for(int i=0; i<3; i++) {
        cout<<"Enter the details of the student "<<i+1<<": "<<endl;
        cout <<"Name: ";
        cin>>s[i].name;
        cout<<"Roll Number: ";
        cin>>s[i].roll;
        cout<<"Address: ";
        cin>>s[i].address;
    }

    for(int i=0; i<3; i++) {
        cout<<"\n The detail of the student "<<i+1<<"is: "<<endl;
        cout<<"Name: "<<s[i].name<<endl<<"Roll No: "<<s[i].roll<<endl<<"Address: "<<s[i].address<<endl;
    }
}