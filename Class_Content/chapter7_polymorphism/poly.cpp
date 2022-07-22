#include<iostream>
using namespace std;

class Base {
    public:
        Base() {
            cout<<"This is abstract class constructor"<<endl;
        }
        virtual void show() = 0; //pure virtual function
        void show_again() {
            cout<<"This is a function inside abstract class.How di i access a function inside an abstract class?";
        }
};

class Derived: public Base {
    public:
        Derived() {
            cout<<"This is derived class constructor"<<endl;
        }
        void show() {
            cout<<"This is derived class show function";
        }

        void display() {
            cout<<"This is some other funtion in derived class";
        }
       
};

int main() {
//    Base *bptr;
   Derived d;
//    bptr ->show_again();
//    d.show();
   return 0;
}


