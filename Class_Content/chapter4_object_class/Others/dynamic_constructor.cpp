#include <iostream>
using namespace std;
  
class geeks {
    const char* p;
  
public:
    // default constructor
    geeks()
    {
  
        // allocating memory at run time
        p = new char[6];
        p = "geeks";
    }
  
    void display()
    {
        cout << p << endl;
    }
};
  
int main()
{
    geeks obj;
    obj.display();
}