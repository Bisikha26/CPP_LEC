// Overloading a function named print 
// Same name different argument

#include<iostream>
using namespace std;

void print (int i) {
    cout<<"Here is the integer call: "<<i<<endl;
}

void print (double f) {
    cout<<"Here is the double call: "<<f<<endl;
}

int main() {
    print(10);
    print(10.10);
    print(20);
    return 0;
}