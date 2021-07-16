// Q. How to make Private Member Inheritable?

#include <iostream>  
using namespace std;  
class A  
{  
    int a = 4;  
    int b = 5;  
    public:  
    int mul()  
    {  
        int c = a*b;  
        return c;  
    }     
};  
  
class B : private A  
{  
    public:  
    void display()  
    {  
        int result = mul();  
        std::cout <<"Multiplication of a and b is : "<<result<< std::endl;  
    }  
};  
int main()  
{  
   B b;  
   //b.mul();
   b.display();  
  
    return 0;  
} 

// In the above example, class A is privately inherited. Therefore, the mul() function of class 'A' cannot be accessed by the object of class B. It can only be accessed by the member function of class B.

// Answer - The private member is not inheritable. If we modify the visibility mode by making it public, but this takes away the advantage of data hiding. here comes, Protected access