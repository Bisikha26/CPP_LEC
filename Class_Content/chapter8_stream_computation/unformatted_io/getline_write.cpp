/*
 * the function getline() and write() provide a more efficient 
 * way to handle line-oriented inputs and outputs
 * 
 * getline() function reads the complete line of text that ends with the new line character
 * This function getline() can be invoked using cin object
 * 
 * The write() function displays the entire line in one go 
 * and its syntax is the same as the getline() function.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    char line[100];

    // get the input
    cin.getline(line, 50);

    // print the data
    // cout.write(line, 5);
    // cout<<endl;

    cout.write(line, 50);
    cout<<endl;

    return 0;
}