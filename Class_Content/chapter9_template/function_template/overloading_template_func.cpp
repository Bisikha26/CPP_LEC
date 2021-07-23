#include<iostream>
#include <cstring>
using namespace std;

template <class T>
T find_max( T a, T b) {
    T result;
    if( a > b ){
        result = a;
    } else {
        result = b;
    }
    return result;
}

// for string data types
char *find_max(char *a, char *b) {
    char *result;
    if(strcmp(a,b) > 0) {
        result = a;
    } else {
        result = b;
    }
    return result;
}

int main() {
    int i1=15, i2=20;
    cout<<"greater is: "<<find_max(i1, i2)<<endl;
    float f1=15.05, f2=20.44;
    cout<<"greater is: "<<find_max(f1, f2)<<endl;
    char str1[]="apple", str2[]="zebra";
    cout<<"greater is: "<<find_max(str1, str2);
    return 0;
}