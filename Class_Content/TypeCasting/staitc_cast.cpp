// static_cast is used for any standard type conversion
// no run-time checks are performed which adds less overhead to the compiler

// static cast doesnot work with pointers
// when we want to convert from one type to different type, eg. from one pointer type to another pointer type
// pointer to integer or integer to pointer, static_cast cannot be used. We cannot use static cast with pointers


#include<iostream>
using namespace std;

int main() {
    int i;
    float f = 3.124f;
    i = f;
    cout<<"value of float is: "<<f<<endl;
    cout<<"value of converted integer is: "<<i<<endl;

    i = static_cast<int>(f);
    cout<<"value of integer is:"<<i;
}