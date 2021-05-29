//abstraction is achieved using classes. 
//A class 'Sum' contains the private members x, y and z are only accessible by the member functions of the class.

#include <iostream>    
using namespace std;    

class Sum    
{    
private: int x, y, z; // private variables  
public:    
void add()    
{    
cout<<"Enter two numbers: ";    
cin>>x>>y;    
z= x+y;    
cout<<"Sum of two number is: "<<z<<endl;    
}    
};  

int main()    
{    
Sum sm;    
sm.add();    
return 0;    
}    