#include<iostream>
using namespace std;
class A {
    int a;

    public:
        void displaya()  {
            a = 10;
            cout<<"Class A: "<<a;
        }
};

class B: public virtual A {
    int b;

    public:
        void displayb() {
            b = 20;
            cout<<"Display B: "<<b;
        }
};

class C: public virtual A {
    int c;

    public:
        void displayc() {
            c = 20;
            cout<<"Display C: "<<c;
        }
};

class D: public B, public C {
    int d;

    public:
        void displayd() {
            d = 40;
            cout<<"Display D: "<<d;
        }
};

int main() {
    D objd;
    objd.displaya(); // ambiguty will only be seen in class A
    // objd.A::displaya();
    objd.displayb();
    objd.displayc();
    objd.displayd();
}

