//There is a special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions. 
//For example, in the following program, an int is thrown as an exception, 
//but there is no catch block for int, so catch(…) block will be executed.

#include <iostream>
using namespace std;
// const int size = 10;

class Array {
    private:
        int arr[10];
    
    public:
        class LOWRANGE{};
        class HIGHRANGE{};

        int &operator [] (int i) {
            if(i < 0) {
                throw LOWRANGE();
            }
            else if( i>=10) {
                throw HIGHRANGE();
            }
            return arr[i];
        }
        };
int main() {
    Array a1;
    int index;

    try {
        cout<<"Enter array index: ";
        cin>>index;
        a1[index];
        cout<<"index"<<index <<"is within the range";
    } 
    
    catch(...) {
        cout<<"Exception out of range";
    }
    return 0;
}