// We cannot create an object of abstract class BUT,
// we can have pointers and references of abstract class type

#include<iostream>
using namespace std;
 
class Base
{
public:
    virtual void show() = 0;
};
 
class Derived: public Base
{
public:
    void show() { cout << "In Derived \n"; }
};
 
int main(void)
{
    Base *bp;
    Derived d;
    bp = &d;
    bp->show();
    return 0;
}