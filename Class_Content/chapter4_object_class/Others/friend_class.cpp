// syntax to declare friend class
//  friend class classname

#include<iostream>
using namespace std;

class myclass1 {
    friend class myclass2;

    private:
        int x;
    public:
        myclass1(int a) {
            x = a;
        }
};

class myclass2{
    public:
        void showData(myclass1 obj) {
            cout<<"The value of x is: "<<obj.x;
        }
};

int main() {
    myclass1 obj1(5);
    myclass2 obj2;
    obj2.showData(obj1);
}

