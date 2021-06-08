#include<iostream>
using namespace std;

// function with 2 parameters
void display(int var1, double var2) {
    cout<<"Integer number: "<<var1;
    cout<<" and double number: "<<var2<<endl;
}

// function with single parameter [double type]
void display(double var) {
    cout<<"Double Number: "<<var<<endl;
}

// function with single parameter [integer type]
void display(int var) {
    cout<<"Integer Number: "<<var<<endl;
}

int main() {
    int a=5;
    double b = 5.5;

    // call function with int type parameter
    display(a);

    // call function with double type parameter
    display(b);

    // call function with 2 parameters
    display(a,b);
    return 0;
}
