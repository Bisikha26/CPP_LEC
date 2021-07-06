#include<iostream>
using namespace std;

class unary {
    int a, b, c;

    public:
        void getdata(int X, int Y, int Z);
        void operator -();
        void display();
};

void unary::getdata(int X, int Y, int Z) {
    a = X;
    b = Y;
    c = Z;
}

void unary::operator -() {
    a = -a;
    b = -b;
    c = -c;
}

void unary:: display() {
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value of b:"<<b<<endl;
    cout<<"Value of c:"<<c<<endl;
}

int main() {
    unary obj;
    obj.getdata(-10, 20, 30);
    obj.display();

    // calling overloaded operator
    - obj;
    obj.display();
}