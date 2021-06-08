#include<iostream>

using namespace std;

void normal(int a) {
    a = 10;
    cout << "value of a is: "<<a<<endl; //10
}

void refer(int &b) {
    b = 20;
    cout<<"value of b is: "<<b<<endl;
}

int main() {
    int a = 15;
    int b = 25;

    normal(a);
    refer(b);

    cout<<"pass by value doesnot change the value of argument. The value of a inside normal is 10 but here a is: "<<a<<endl; //15
    cout<<"Pass by reference changes the value of an argument. The value of b inside refer is 20 and value is change here as: "<<b;
}

