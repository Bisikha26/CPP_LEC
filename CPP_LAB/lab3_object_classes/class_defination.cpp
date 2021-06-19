//  WAP to define a class in C++ as shown :
//     class name - Student
//     attributes - name, roll, address, percentage
//     methods - input(), display()

#include<iostream>

using namespace std;

class Student {
    char name[100];
    int roll;
    char address[100];
    float percentage;

    public:
        void input() {
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Roll: ";
            cin>>roll;
            cout<<"Enter address: ";
            cin>>address;
            cout<<"Enter Percentage";
            cin>>percentage;
        }

        void display() {
            if(percentage > 45) {
                cout<<"Congratulations! Here's your details: "<<endl;
                cout<<"Name: "<<name<<endl;
                cout<<"Roll: "<<roll<<endl;
                cout<<"Address: "<<address<<endl;
                cout<<"Percentage: "<<percentage<<endl;
            } else {
                cout<<"Sorry, your score is below 45%";
            }
        }
};

int main() {
    Student s1;
    s1.input();
    s1.display();
    return 0;
}

