// friend function can access private data of a class
// we declare friend function using friend keyword inside body of a class
// syntax - friend returnType functionName(arguments)

#include <iostream>
using namespace std;

class Distance {
    friend int add(Distance);
    private:
        int meter;
    
    public:
        Distance() {
            meter = 0;
        }

};

// friend function defination

int add(Distance d) {
    // accessing private member from the friend function
    d.meter = d.meter+5;
    return d.meter;
}

int main() {
    Distance dist;
    cout<<"Distance: "<<add(dist);
    return 0;
}