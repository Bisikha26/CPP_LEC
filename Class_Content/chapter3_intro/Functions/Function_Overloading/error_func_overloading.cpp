// What cannot be done as function overloading

#include<iostream>
using namespace std;

void print (int i) {
    cout<<"Here is the integer call: "<<i<<endl;
}

// void print (int f) {
//     cout<<"Here is the integer second call: "<<f<<endl;
// }

int main() {
    print(10);
    print(10.10);
    // print(20);
    return 0;
}


