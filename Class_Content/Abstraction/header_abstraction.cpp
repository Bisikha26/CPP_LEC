//pow() function is used to calculate 4 raised to the power 3. 
//The pow() function is present in the math.h header file in which all the implementation details of the pow() function is hidden.

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{    
    int n = 4;  
   int power = 3;  
   int result = pow(n,power);         // pow(n,power) is the  power function  
   cout << "Cube of n is : " <<result<<endl;  
   return 0;  
}  

