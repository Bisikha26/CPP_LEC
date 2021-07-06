// return value from operator function

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public: 
       
    // Constructor to initialize count to 5
    Count() {
        value = 5;
    }

    // Overload ++ when used as prefix
    Count operator ++ () {
        Count temp;

        // Here, The variable value belongs to the count1 object in main() 
        // because count1 is calling the function, while temp.value belongs to the temp object.
        cout<<"Value of temp.value is:"<<temp.value<<endl;
        temp.value = ++value;

        return temp;
    }

    // Overload ++ when used as postfix
    Count operator ++(int) {
        Count temp;

        temp.value = value++;
        return temp;
    }

    void display() {
        cout<<"Count: "<<value<<endl;
    }
};

int main() {
    Count count1, result;

    // Call for prefix
    result = ++count1;
    result.display();

    // Call for postfix
    result = count1++;
    result.display();

    return 0;
}