/*
 * Exception handling can also be implemented with the help of inheritance. 
 * In case of inheritance object thrown by derived class is caught by the first catch block
*/

#include <iostream>
using namespace std;
 
class demo1 {
};
 
class demo2 : public demo1 {
};
 
int main()
{
    for (int i = 1; i <= 2; i++) {
        try {
            if (i == 1)
                throw demo1();
 
            else if (i == 2)
                throw demo2();
        }
 
        catch (demo1 d1) {
            cout << "Caught exception of demo1 class \n";
        }
        catch (demo2 d2) {
            cout << "Caught exception of demo2 class \n";
        }
    }
}

/*we have made demo2 as derived class for demo1.
* Note the catch block for demo1 is written first.
* As demo1 is base class for demo2 an object thrown of demo2 class will be handled by first catch block.
*/