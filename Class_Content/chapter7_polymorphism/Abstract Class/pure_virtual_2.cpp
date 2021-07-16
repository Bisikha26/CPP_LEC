// If a class contains at least 1 pure virtual function then 
//the class is called abstract class

// We cannot instentiate an abstract class, why?

#include<iostream>
using namespace std;

class Test {
    int x;

    public:
        virtual void show() = 0;
        int getX() { 
            return x; 
        }
};

int main() {
    // Test t;
    // t.getX();
    return 0;
}














// because if, pure virtual banayeko function lai object instentiate garera func call garyo bhane kun function call hune ta?
