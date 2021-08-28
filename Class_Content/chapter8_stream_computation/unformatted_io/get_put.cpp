// The class istream and ostream have predefined functions 
//get() and put(), to handle single character input and output operations.

/*
* get() assign the data variable
* put() display the value stored in data variable
*/

#include <iostream>
using namespace std;

int main() {
    char data;

    cout<<"Enter Data";

    // get the data
    cin.get(data);
    while(data != '\n') {
        // print the data
        cout.put(data);

        // get the data again
        cin.get(data);
    }
    return 0;
}