// Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior. 

// CPP program without virtual destructor 
// causing undefined behavior
#include<iostream>
  
using namespace std;
  
class base {
  public:
    base()     
    { cout<<"Constructing base \n"; }
    ~base()
    { cout<<"Destructing base \n"; }     
};
  
class derived: public base {
  public:
    derived()     
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};
  
int main()
{
  derived *dptr;
  dptr = new derived();


  derived *d = new derived();  
  base *b = d;
  delete b;
  getchar();
  return 0;
}