// C++ program to show how to call parameterised Constructor
// of base class when derived class's Constructor is called

//The parameterized constructor of base class cannot be called in default constructor of sub class, 
//it should be called in the parameterized constructor of sub class.
 
#include <iostream>
using namespace std;
 
// base class
class Parent {
    int x;
 
public:
    // base class's parameterised constructor
    Parent(int i)
    {
        x = i;
        cout << "Inside base class's parameterised "
                "constructor"
             << endl;
    }
};
 
// sub class
class Child : public Parent {
    int j;
 
public:
    // sub class's parameterised constructor
    Child(int x): Parent(j), j(x)
    {
        cout << "Inside sub class's parameterised "
                "constructor"
             << endl;
    }
};
 
// main function
int main()
{
 
    // creating object of class Child
    Child obj1(10);
    return 0;
}