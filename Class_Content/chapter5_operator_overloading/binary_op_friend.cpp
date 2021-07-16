// takes two parameter

#include<iostream>
using namespace std;

class Distance {
    public:
        // member objects
        int feet, inch;

        // Constructor
        Distance() {
            this->feet = 0;
            this->inch = 0;
        }

        // parameterized
        Distance(int f, int i){
            this->feet = f;
            this->inch = i;
        }

        // Declearing friend function
        friend Distance operator +(Distance&, Distance&);
};

int main() {
    // Create an object to return
    Distance d3;
    // perform addition of feet and inch
    
    return 0;
}