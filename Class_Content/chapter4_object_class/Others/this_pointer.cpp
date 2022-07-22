// normal pointer is a variable that holds address of some other variable
// this pointer is a variable that holds address of current object
// this pointer stores the address of object and access dataMember

//non-static(normal) function accept additional parameter -this- which is pointer to object with object specific variables
//  It points to the object for which the member function is called.

/*
Meaning each object gets its own copy of data members and all objects share a single copy of member functions.
Then now question is that if only one copy of each member function exists and is used by multiple objects, how are the proper data members are accessed and updated?
The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
*/

#include<iostream>

using namespace std;

class mobile {
    int m = 10;
    
    public:
        void display() {
            cout<<"m = "<<m<<endl;
            cout<<"this->m = "<<this->m<<endl;
            cout<<"the address of current object"<<this<<endl;
        }
};
int main() {
    mobile m1, m2;
    m1.display(); // m1 kai ho, m2 ko haina
    
    m2.display(); //m2 kai ho, m1 hko haina
    return 0;
}