// define a conversion function or conversion operator
// similar to operator function which doesnot contain any return type but has return statement

/*
Operator BasicType() {

    return statement;
}
*/ 

#include<iostream>
using namespace std;

class Celsius {
    private:
        float temper;
    
    public:
        Celsius(){
            temper = 0;
        };

        operator float() {
            float fer;
            fer = temper * 9/5+32; //celsius to fehrenheit
            return fer;
        }

        void gettemper() {
            cout<<"Enter temperature in Celsius: ";
            cin>>temper;
        }
};

int main() {
    Celsius cel; //cel is user defined
    float fer; //fer is basic
    cel.gettemper();

    // This call is equivalent to [ fer = float(cel) ]
    fer = cel; //convert from userdefined to basic
    cout<<"Temperature in fehrenheit measurement: "<<fer;
}

