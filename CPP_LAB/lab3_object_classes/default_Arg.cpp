//WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided
#include<iostream>
#include<conio.h>

using namespace std;

class SimpleInterest {
    public:
        double interest(double principle, double time, double rate = 0.15) {
            return ((principle * time * rate) / 100);
        }
};

int main() {
    SimpleInterest si;
    double p, t, result;
    cout<<"Enter Principle and time. Rate is given the default value";
    cin>>p>>t;
    result = si.interest(p, t);
    cout<<"The simple interest is:"<<result;
    return 0;
}