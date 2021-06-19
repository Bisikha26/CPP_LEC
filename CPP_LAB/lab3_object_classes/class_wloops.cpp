//WAP to define a class named employee with it's data members ID, Name and Salary. Read records of five employees and display the record in tabular form

#include<iostream>
using namespace std;

class Employee {
    public:
        int id;
        char name[200];
        double salary;

    
        void get_data() {
            cout<<"Enter ID";
            cin>>id;
            cout<<"Enter Name";
            cin>>name;
            cout<<"Enter Salary";
            cin>>salary;
        }

        void display_data() {
            cout<<id<<"\t"<<name<<"\t"<<salary;
        }
};

    int main() {
        Employee e[5];
        for(int i=0; i<5; i++) {
            cout<<"Enter details of the employee:"<<i+1<<endl;
            e[i].get_data();
        }
        cout<<"ID\tName\tSalary"<<endl;
        for(int i=0; i<5; i++) {
            e[i].display_data();
            cout<<endl;
        }
        return 0;
    }