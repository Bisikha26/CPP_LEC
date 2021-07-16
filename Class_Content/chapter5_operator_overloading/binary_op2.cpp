// overloaded function takes one parameter

#include<iostream>
using namespace std;

class Distance {
    public:
        // member objects
        int feet, inch;

        Distance() {
            feet = 0;
            inch = 0;
        }

        // parameterized
        Distance(int feet, int inch) {
            this -> feet = feet;
            this -> inch = inch;
        }

        // Overloading + operator to perform addition
        Distance operator +(Distance& d2) {
            Distance d3;

            d3.feet = this->feet + d2.feet;
            d3.inch = this->inch + d2.inch;

            return d3;
        }
};

