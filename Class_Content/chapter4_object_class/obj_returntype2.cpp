#include<iostream>

using namespace std;

class complex {
    private:
        float real, imag;

    public:
        void getValue() {
            cout<<"\n Enter the real part: ";
            cin>>real;
            cout<<"\nEnter imaginary part: ";
            cin>>imag;
        }

        void showValue() {
            cout<<"("<<real<<","<<imag<<")";
        }

        void add(complex cc1, complex cc2) {
            real = cc1.real + cc2.real;
            imag = cc1.imag + cc2.imag;
        }
};

int main() {
    complex c1, c2, c3;
    c1.getValue();
    c2.getValue();
    c3.add(c1, c2);

    c1.showValue();
    cout<<"+";
    c2.showValue();
    cout<<" = ";
    c3.showValue();
}