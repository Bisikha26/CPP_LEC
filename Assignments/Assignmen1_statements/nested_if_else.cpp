//Q.C++ program to find if an integer is even or odd or neither [Nested question - here check if the number = 0 or not. If no, then check for positive and negative value inside the main if statement]

#include<iostream>

using namespace std;

int main() {
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(number != 0) {
        if(number > 0) {
            cout<<number<<" is a positive integer";
        }else {
        cout<<number<<" is a negative integer";
        }    
    }else {
        cout<<number<<" is zero"; 
    }
}