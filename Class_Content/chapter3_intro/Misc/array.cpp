//Array declaration by initializing elements
//int arr[] = { 10, 20, 30, 40 };
 
//Compiler creates an array of size 4 which is same as int arr[4]={10, 20, 30, 40}

#include <iostream>

 
int main()
{
    int arr[5] = {2,3,5,6,7};
    
 
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];
 
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3];
 
    return 0;
}