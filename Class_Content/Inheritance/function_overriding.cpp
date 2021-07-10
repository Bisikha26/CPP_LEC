// Suppose same function is defined in both the derived class and the based class
// Q. if we call this function using the object of the derived class, function of which class will be executed ?

// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    return 0;
}

// print() of derived class will be executed. This phenomenan is called function overriding.

// if we call print() from an object of the Base class, the function would not have been overridden.