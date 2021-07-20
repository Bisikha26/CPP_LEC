// Syntax - dynamic_cast <new_type> (expression)

// 1. dynamic_cast is used at runtime
// It needs at least one virtual function in base class
// If the cast is sucessful, dynamic cast returns a value of type new_type
// If the cast fails and new_type is a pointer type, it returns null pointer of that type

#include<iostream>
using namespace std;

class Base {
    public:
    virtual void print() {
        cout<<"Base"<<endl;
    }
};

class Derived: public Base {
    public:
    void print() {
        cout<<"Derived 1"<<endl;
    }
};

int main() {
    Base *bptr, bpt;
    Derived *dptr, dpt;

    bptr = &dpt; //base pointer holds address of derived class object
    // bptr->print()
    dptr = dynamic_cast<Derived *> (bptr); //base pointer lai derived pointer ma cast garna. no error as bptr is holding address of derived class obj.
    dptr ->print();

    // bptr = &bpt; //base pointer holds address of base class obj
    // dptr = dynamic_cast<Derived *> (bptr); //casting is not allowed as bptr holds obj of base class and not derived one
    
    if (dptr == nullptr) {
        cout<<"Null Pointer"<<endl;
    } else {
        cout<<"Not Null"<<endl;
    }
    return 0;
}