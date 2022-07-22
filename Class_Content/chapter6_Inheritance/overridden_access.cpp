// C++ program to access overridden function
// in main() using the scope resolution operator ::

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

        // method 1. invocation with memeber function from derived class. to call overridden function from derived class itself
        Base::print();
    }
};

int main() {
    Derived derived1, derived2;
    derived1.print();

    // method 2. base class member function invocation from object.
    // derived2.Base::print();

    return 0;
}