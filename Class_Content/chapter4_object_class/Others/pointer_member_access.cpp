// Pointers are used to store and manage the addresses of dynamically allocated blocks of memory.
// pointer refers to a variable that holds the address of another variable
// To access pointer to a member of a class, we use operator (->)
// Pointer initialization before using pointer is must

#include<iostream>
using namespace std;

class Box {
    private:
        double length;
        double breadth;
        double height;
    
    public:
        // Constructor defination
        Box(double l, double b, double h) {
            cout<<"Constructor Called."<<endl;
            length = l;
            breadth = b;
            height = h;
        }

        double Volume() {
            return length * breadth * height;
        }
};

int main() {
    Box box1(3.3, 1.2, 1.5);
    Box box2(8.5, 2.0, 4.6);
    Box *ptrBox;

    // Saving the address of first object in pointer variable
    cout<<"The address of box1 variable is: "<<&box1<<endl;

    // Pointer yesto variable ho joslay aru variable ko address lai carry garna sakchha. yo case ma box1 variable ko address lai ptrBox lay carry garyo
    ptrBox = &box1;

    // access the member function using member access operator
    cout<<"Volume of box1: "<<ptrBox->Volume()<<endl;

    // Save the address of second object
    cout<<"The address of second object is: "<<&box2<<endl;
    ptrBox = &box2;

    // Try to access a member function using member access opertor
    cout<<"Volume of Box 2: "<<ptrBox->Volume()<<endl;

    return 0;
}