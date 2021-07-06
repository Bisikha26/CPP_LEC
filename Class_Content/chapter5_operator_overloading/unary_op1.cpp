// Overload ++ when used as prefix and postfix
// without returning value from operator function

#include<iostream>
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
        void operator ++ () {
            ++value;
        }

        // Overload operator when used as postfix
        void operator ++(int) {
            value++;
        }

        void display() {
            cout<<"Count: "<<value<<endl;
        }
};

int main() {
    Count count1;

    // call the prefix function
    ++count1;
    count1.display();

    //result = ++count1; //This causes error because return type of operator function is void

    // call the postfix function
    count1++;
    count1.display();

    return 0;
}


// Note: When we overload operators, we can use it to work in any way we like. For example, we could have used ++ to increase value by 100.

//However, this makes our code confusing and difficult to understand. It's our job as a programmer to use operator overloading properly and in a consistent and intuitive way.