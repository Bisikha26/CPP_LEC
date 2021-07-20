// CPP program to demonstrate working of reinterpret_cast
#include <iostream>
using namespace std;
  
int main()
{
    int* p = new int(65);
    char* ch = reinterpret_cast<char*>(p);
    cout <<"value of *p is: "<< *p << endl;
    cout <<"value of *ch is: "<<*ch << endl;
    cout <<"value of p is: "<< p << endl;
    cout <<"value of typecasted ch is: "<< ch << endl;
    return 0;
}