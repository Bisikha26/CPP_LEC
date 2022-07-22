#include<iostream>
#include<cstring>

using namespace std;

/*
This binary function is used to perform file output operation 
i.e. to write the objects to a file, which is stored in the computer memory in a binary form.

*/
int main() {
    char str[] = "My name is Bisikha Subedi";
    for(int i=1; i<=strlen(str); ++i) {
        cout.write(str, i);
        cout<<endl;
    }
    return 0;
 }