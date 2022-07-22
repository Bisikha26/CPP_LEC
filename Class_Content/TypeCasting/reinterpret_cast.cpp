// Handles the conversion between unrelated types

// Syntax : reinterpret_cast<target_type>(expression)
// -> target type specifies targer type of cast
// -> expr is expression being cast into new type

// reinterpret cast produces value of new type that has same bit pattern as its argument
// reinterpret cast is used if the conversion is to be made from one pointer type to another pointer type
#include<iostream>
using namespace std;

int main() {
    int i = 100; // i is integer
    cout<<"value of address of i is: "<<&i<<endl;
    int *p; // p is pointer variable

    //p = i;//cannot assign int to int*, integer to pointer conversion
    // p = reinterpret_cast<int *>(i);
    // cout<<"value of p is:"<<p;


    int ivar;
    double dvar;
    int *pivar;
    double *pdvar;
    void *pvoid;

    pivar = reinterpret_cast<int *>(&dvar);
    //pivar = reinterpret_cast<int *>(dvar); //invalid type conversion. here double variable cannot be converted to integer pointer
    pivar = reinterpret_cast<int *>(&ivar); // interger variable to interger pointer casting is okay
    // pdvar = reinterpret_cast<double *>(ivar); // 
}