// Implicit type conversion- The type conversion that is done automatically done by the compiler

#include <iostream>
using namespace std;

int main() {
   // assigning an int value to num_int
   int num_int = 9;

   // declaring a double type variable
   double num_double;
   char char_test;
 
   // implicit conversion
   // assigning int value to a double variable
   num_double = num_int;
   char_test = num_int;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;
   cout << "char_test = " << char_test << endl;

   return 0;
}

