// Dynamically allocated memory is allocated on Heap and non-static and local variables get memory allocated on Stack
// We are free to allocate and deallocate memory whenever we need and whenever we don’t need anymore.

// For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. 
// For dynamically allocated memory like “int *p = new int[10]”, it is programmers responsibility to deallocate memory when no longer needed. 
#include <iostream>
using namespace std;

int main() {
    // declare an pointer to store an integer value
    int* pointInt;

    // declare a float pointer
    float* pointFloat;

    // dynamically allocate memory
    pointInt = new int; 
    pointFloat = new float;

    cout <<"address assigned to pointInt is: "<< pointInt << endl;
    cout <<"address assigned to pointFloat is: "<< pointFloat << endl;

     // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout <<"value assigned to pointInt is: "<< *pointInt << endl;
    cout <<"value assigned to pointFloat is: "<< *pointFloat << endl;

    // deallocate the memory
    delete pointInt;
    delete pointFloat;

    return 0;
}

  