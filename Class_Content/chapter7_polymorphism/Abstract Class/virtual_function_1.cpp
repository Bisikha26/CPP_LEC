#include<iostream>
using namespace std;

class Base {
    int x;

    public:
        virtual void fun() = 0; //pure virtual function
        int getX() {
            return x;
        }
};

// This class inherits from Base and implements fun()
class Derived : public Base {
    int y;

    public:
        void fun() {
            cout<<"Fun function is called";
        }
};

int main() {
    // Base b;
    // Derived d;
    // d.fun();
    return 0;
}