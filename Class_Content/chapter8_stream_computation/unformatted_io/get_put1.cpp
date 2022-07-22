// C++ program to demonstrate cin.get()
  
#include <iostream>
using namespace std;
  
int main()
{
    char name[100];
    cin.get(name, 20);
    // cin>>name;
    cout << name;
  
    return 0;
}

// get(arg1, arg2) where arg1 is variable name and arg2 is range