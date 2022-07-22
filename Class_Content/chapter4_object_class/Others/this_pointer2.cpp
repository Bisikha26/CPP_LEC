// when the name of local variable name is same as member's name

#include<iostream>
using namespace std;

class Test {
    private:
        int x;
    
    public:
        void setX(int x) {
            // this pointer is used to retrieve object's x hidden by local vaiable 'x'
            // x = x //yields garbage value as compiler cannot differentiate which one is local variable and which is object's data member
            //current object ko address bhitra bhako x variable ma parameter ko value pathaideena 
            this -> x = x;
        }

        void print() {
            cout<<"value of x is: "<<x<<endl;
            cout<<"address of the object that is calling x is"<<this<<endl;
        }
};

int main() {
    Test obj, obj2;
    obj.setX(20);
    obj.print();
    obj2.setX(100);
    obj2.print();
    return 0;
}

