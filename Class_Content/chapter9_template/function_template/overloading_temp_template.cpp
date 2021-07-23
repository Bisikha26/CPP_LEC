#include<iostream>
using namespace std;

template<class T>
void func(T a,T  b) {
    cout<<"func(T a, T b): "<<a<<","<<b<<endl;
}

template <class T1, class T2>
void func(T1 a, T2 b) {
    cout<<"func(T1 a, T2 b):"<<a<<","<<b<<endl;
}

int main() {
    func(1,2); //select func(T a, T b)
    func(1, 2.5); //select func(T1 a, T2 b)
    return 0;
}