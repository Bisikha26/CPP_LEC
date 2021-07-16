// normal pointer is a variable that holds address of some other variable
// this pointer is a variable that holds address of current object
// this pointer stores the address of object and access dataMember

//non-static(normal) function accept additional parameter -this- which is pointer to object with object specific variables

#include<iostream>

using namespace std;

class mobile {
    int m = 10;
    
    public:
        void display() {
            cout<<"m = "<<m<<endl;
            cout<<"this->m = "<<this->m<<endl;
            cout<<this<<endl;
        }
};
int main() {
    mobile m1, m2;
    m1.display(); // m1(a,b) kai ho, m2 ko haina
    
    m2.display(); //m2 kai ho, m1 hko haina
    return 0;
}