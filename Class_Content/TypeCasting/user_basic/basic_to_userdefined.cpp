// Conversion Constructor - Type of constructor which takes only one argument which is of type basic
/*
class Classname {
    Classname(Basic datatype arg) {

    }
}
*/

#include<iostream>
using namespace std;

class Celsius {
    private:
        float temper;
    
    public:
        Celsius() {
            temper = 0;
        }

        // int convert(float ftmp) {
        //     temper = (ftmp - 32)*5/9;
        //     return temper;
        // }

        // conversion constructor
        Celsius(float ftmp) {
            temper = (ftmp - 32)*5/9;
        }

        void showtemper() {
            cout<<"Temperature in Celsius: "<<temper<<endl;
        }
};

int main() {
    Celsius cel; //cel is user defined
    float fer;
    int age;

    // this wont throw error
    age = fer;
    cout<<"Enter temprature in Fahrenheit measurement: ";
    cin>>fer;

    // cel.convert(fer);
    cel.showtemper();

    // if i directly want to convert fer to cel as 
    cel = fer;
    cel.showtemper();
}