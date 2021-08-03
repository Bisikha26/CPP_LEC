#include <iostream>
using namespace std;
 
class demo {
};
 
int main()
{
    try {
        throw demo();
    }
 
    catch (demo d) {
        cout << "Caught exception of demo class \n";
    }
}

/**
 * In the program we have declared an empty class.
 * In the try block we are throwing an object of demo class type. 
 * The catch block catches the object and displays.
*/
