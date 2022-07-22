// C++ helps you to format the I/O operations like determining the number of digits to be displayed after the decimal point, 
//specifying number base etc.

#include <iostream>
using namespace std;

// width function defines width of next value to be displated in the output of console
void IOS_width() {
    cout<<"-----------------------\n";
    cout<<"Implementing ios::width\n";

    char c = 'A';

    // Adjusting width will be 5
    cout.width(5);
    cout<<c<<"\n";

    int temp = 10;
    cout.width(11);
    cout<<temp;
    cout<<"\n------------------------\n";
}

void IOS_precision()
{
    cout << "\n--------------------------\n";
    cout << "Implementing ios::precision\n\n";
    cout << "Implementing ios::width";

    // makes cout print floats with a fixed number of decimals
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout<<3.1422;
    cout << "\n--------------------------\n";
}

// The fill() function fills the unused 
// white spaces in a value (to be printed
// at the console), with a character of choice.
void IOS_fill()
{
    cout << "\n--------------------------\n";
    cout << "Implementing ios::fill\n\n";
    char ch = 'a';
      
    // Calling the fill function to fill 
    // the white spaces in a value with a
    // character our of choice.
    cout.fill('*');
      
    cout.width(10);
    cout<<ch <<"\n";
      
      
    int i = 1;
      
    // Once you call the fill() function, 
    // you don't have to call it again to 
    // fill the white space in a value with
    // the same character.
    cout.width(5);
    cout<<i;
    cout << "\n--------------------------\n";
}

int main() {
    IOS_width();
    IOS_precision();
    IOS_fill();
    return 0;
}

 