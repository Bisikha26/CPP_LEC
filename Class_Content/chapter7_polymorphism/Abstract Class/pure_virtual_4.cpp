// What if I did not override the pure virtual function in derived class?

#include<iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
 
class Derived : public Base {

 };
 
int main()
{
//   Derived d;
  return 0;
}

// Answer - If we donot override pure virtual function in derived class,
// the derived class also becomes abstract class
