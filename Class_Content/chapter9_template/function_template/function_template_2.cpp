#include<iostream>
using namespace std;

template<class T1, class T2>
T1 testfunc(T2 a) {
    T1 b;
    b = static_cast<T1>(a);
    return b;
}

int main() {
    int inum = 5;
    // testfunc(inum);
    testfunc<float>(inum); 
    // In this case, only one template type is specified explicitly and other template argument
    //is deduced from type of inum. so, T1 will be float and T2 will be int

    testfunc<int, float>(inum); 
    // T1 is deduced as int and T2 as float. Type of argument inum of function is not used in deducing type of T2 
    //explicit specification overrides, thus inum is converted to float

    testfunc<float, int>(inum);

    return 0;
}