// Program to add two complex numbers

#include<iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    
    public:
        // Constructor to initiate 
        Complex() {
            real = 0;
            imag = 0;
        }

        void input() {
            cout<<"Enter the real and imaginary parts";
            cin>>real;
            cin>>imag;
        }

        // Overload the + operator
        Complex operator +( const Complex& obj ) {
            Complex temp;
            cout<<"real value is: "<<real;
            cout<<"imag value is: "<<imag;
            cout<<"temp.real value is: "<<temp.real;
            cout<<"temp.imag value is: "<<temp.imag;
            cout<<imag;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }

        void output() {
            cout<<"Comple Number is: "<<real<<"+"<<imag<<"i";
        }
};

int main() {
    Complex complex1, complex2, result;

    cout<<"Enter first complex number:\n";
    complex1.input();

    cout<<"Enter second complex number:\n";
    complex2.input();

    // complex1 calls the operator function
    // complex2 is passed as an argument to the function
    result = complex1 + complex2;
    result.output();

    return 0;
}