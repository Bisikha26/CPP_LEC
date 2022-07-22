#include <iostream>  
using namespace std;  
 class Animal {  
   public:  
 void eat() {   
    cout<<"Eating in base..."<<endl;   
 }    
};  
   class Dog: public Animal    
   {    
       public:  
       void eat() {   
          cout<<"Eating in derived..."<<endl;   
      }   

     void bark(){  
    cout<<"Barking...";   
    }    
};   
int main() {  
    Dog d1;  
    Animal a1;
    // a1.bark();
    d1.eat();  
    d1.bark();  
    return 0;  
}  