// Overloading using different types of parameter

#include<iostream>
using namespace std;

// function with float type param
float absolute(float var) {
    if( var < 0.0 ) {
        var = -var;
    }
    return var;
}

// functio with integer type parameter
int absolute(int var) {
    if(var < 0) {
        var = -var;
    } 
    return var;
}

int main() {
    // call function with int type parameter
    cout<<"Absolute value of -10 is: "<<absolute(-10)<<endl;

    // call function with float type parameter
    cout<<"Absolute value of -10.10 is: "<<absolute(-10.10f)<<endl;
    return 0;
}