// C++ program to illustrate return by reference
#include <iostream>
using namespace std;
  
// Function to return as return by reference
int& returnValue(int& x)
{
  
    // Print the address
    cout << "x = " << x
         << " The address of x is "
         << &x << endl;
  
    // Return reference
    return x;
}
  
// Driver Code
int main()
{
    int a = 20;
    int& b = returnValue(a);
  
    // Print a and its address
    cout << "a = " << a
         << " The address of a is "
         << &a << endl;
  
    // Print b and its address
    cout << "b = " << b
         << " The address of b is "
         << &b << endl;
  
    // We can also change the value of
    // 'a' by using the address returned
    // by returnValue function
  
    // Since the function returns an alias
    // of x, which is itself an alias of a,
    // we can update the value of a
    returnValue(a) = 13;
  
    // The above expression assigns the
    // value to the returned alias as 3.
    cout << "a = " << a
         << " The address of a is "
         << &a << endl;
    return 0;
}