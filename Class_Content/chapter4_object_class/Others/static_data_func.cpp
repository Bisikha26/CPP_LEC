// Program to understand static data and static function in C++
#include<iostream>
using namespace std;
class First {
    int a;
    static int b; // yo b attribute -> doesnot belong to any object but to the class First itself -> static phases-> defination & initialization

    public:
        First(int x, int y) {
            a = x;
            b = y;
        }

        void show() {
            //normal member function can access both static and non-static data member
            cout<<a<<""<<b<<endl; // kasari bujhyo? yo a bhaneko obj1 ko a ho bhanera
        }

        static void display() {
            //static member function cannot access non static data member
            // cout<<"value of a is: "<<a;
            cout<<"value of b is: "<<b<<endl;

        }
};

// syntax datatype class_name :: data_member = initial value;
int First::b = 500; //defined outside the class because they are stored seperately rather than as part of objects.
// Since they are associated with the class and not objects their memory needs to be allocated seperately

int main() {
    First obj1(10, 20); // obj 1 lay a = 10, b = 20
    obj1.show(); //calling member function. -> 1 -> 10
    First obj2(100,200); // obj 2 -> a= 100 , b = 200
    obj2.show(); //a -> 100
    First::display(); //calling static function without object
    obj1.show(); // a = 10, b = 200 
}


