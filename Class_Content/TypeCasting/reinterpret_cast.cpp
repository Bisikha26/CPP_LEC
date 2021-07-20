// Syntax : reinterpret_cast<target_type>(expression)
#include<iostream>
using namespace std;

int main() {
    int i = 100; // i is integer
    cout<<"value of address of i is: "<<&i;
    int *p; // p is pointer variable

    //p = i;//cannot assign int to int*, integer to pointer conversion
    p = reinterpret_cast<int *>(i);
    cout<<"value of p is:"<<p;
}