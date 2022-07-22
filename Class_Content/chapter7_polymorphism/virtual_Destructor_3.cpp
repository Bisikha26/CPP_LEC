//Illustration of need of virtual destructors
#include<iostream>
using namespace std;
class Animal
{
    public:
        Animal()
        {
            cout<<"Constructor of Animal class."<<endl;
        }
        virtual void display()
        {
            cout<<"Virtual display"<<endl;
        }
               
        ~Animal()
        {
            cout<<"Destructor of Animal class."<<endl;
        }

};
class Dog :public Animal
{
    public:
        Dog()
        {
            cout<<"Constructor of Dog class."<<endl;
        }
        
        ~Dog()
        {
            cout<<"Destructor of Dog class."<<endl;
        }

};
int main()
{
    
    Animal *a;//pointer to base class
    a=new Dog;
    a->display();
    delete a;
}