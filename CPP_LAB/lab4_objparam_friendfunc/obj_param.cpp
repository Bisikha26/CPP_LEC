//WAP to add two complex numbers passing object as an argument and returning resultant complex number
#include<iostream>
#include<conio.h>

using namespace std;

class Complex {
    public: 
        float r, i;
};

// Since class is user defined datatype, to return object of Complex class, we can use Complex as return type in sum function
Complex sum (Complex numa, Complex numb) {
    Complex numc;
    numc.r = numa.r + numb.r;
    numc.i = numa.i + numb.i;
    return numc;
}

int main() {
    Complex num1, num2, num3;
    cout<<"Enter real and imaginary part of first complex number: "<<endl;
    cin>>num1.r>>num1.i;
    cout<<"Enter real and imaginary part of second complex number"<<endl;
    cin>>num2.r>>num2.i;
    num3=sum(num1, num2);
    cout<<"The sum is: "<<num3.r<<"+i"<<num3.i<<endl;
    return 0;
}