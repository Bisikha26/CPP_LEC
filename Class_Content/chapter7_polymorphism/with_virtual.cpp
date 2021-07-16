#include<iostream>
using namespace std;

class Shape {
    protected:
        int width, height;
    public:
        Shape(int a = 0, int b = 0) {
            width = a;
            height = b;
        }
    
    virtual void area() {
        cout<<"Parent class area "<<endl;
    }
};

class Rectangle : public Shape {
    public:
        Rectangle(int a, int b) {
            width = a;
            height = b;
        }

        void area() {
            cout<<"Rectangle class area: "<<(width * height)<<endl;
        }
};

class Triangle : public Shape {
    public:
        Triangle(int a, int b) {
            width = a;
            height = b;
        }
        void area() {
            cout<<"Triangle class area"<<(width * height / 2)<<endl;
        }
};

// Main function for the program
int main() {
    Shape *shape;
     
    Rectangle rec(10, 7);

    Triangle tri(10,5);

    // store the address of rectangle
    shape = &rec;

    // call rectangle area
    shape -> area();

    // store the address of Triangle
    shape = &tri;

    // call triangle area
    shape -> area();

    return 0;
}

// kun object instance lai point garerako chha, during runime matra tha hunchha, not during compile time