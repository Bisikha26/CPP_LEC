// int, char, float, double are primitive type
// class type is any class you defined

/* Cases
* 1. class type to primitive type
* 2. primitive type to class type
* 3. class type to class type
*/

#include<iostream>

using namespace std;

class Complex {
    private:
        int a, b;
    public:
        Complex() {} //defualt constructor
        Complex(int k) {
            a = k;
            b = 0;
        }

        void setData (int x, int y) {
            a = x;
            b = y;
        }

        void showData() {
            cout<<"\n a ="<<a<<"\n b="<<b;
        }
};

void main() {
    Complex c1;
    int x = 5;
    c1 = x; //c1.Complex(x)
    c1.showData();
}