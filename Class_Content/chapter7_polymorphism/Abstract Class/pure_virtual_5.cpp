// An abstract class can have constructors.

// Q. But how to call constructors of abstract class?

#include<iostream>
using namespace std;
 
// An abstract class with constructor
class Base
{
protected:
int x;
public:
virtual void fun() = 0;
Base() {
    cout<<"Constructor of base called\n";
    }
};
 
class Derived: public Base
{
    int y;
    public:
        Derived(){
             cout<<"Constructor of derived class is called\n";
        }
        void fun() { 
            cout << "Overidden function"; 
        }
};
 
int main()
{
    Derived d; //derived class ko object banaune bitikai parent class ko constructor banchha
    // d.fun();
   
  //object creation using pointer of base class
    Base *bptr= &d;
    bptr->fun();
    return 0;
}