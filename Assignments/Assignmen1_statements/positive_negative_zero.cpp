// Q. Program to check whether an integer is positive, negative or zero

#include<iostream>

using namespace std;

int main() {
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(number==0) {
        cout<<number<<" is zero";
    } else if(number>0) {
        cout<<number<<" is a positive integer";
    }else {
        cout<<number<<" is a negative integer";
    }
}