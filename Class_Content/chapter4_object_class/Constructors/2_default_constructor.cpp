#include <iostream>
using namespace std;

// declare a class
class  Wall {

  private:
       double length;

   public:
    // create a constructor
    Wall() {

        // initialize private variables
        length = 5.5;

        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }

};

int main() {

    // create an object
    Wall wall1;
    return 0;
}