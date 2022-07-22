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
    
    int area() {
        cout<<"Parent class area "<<endl;
        return 0;
    }
};

class Rectangle : public Shape {
    public:
        Rectangle(int a, int b) {
            width = a;
            height = b;
        }

        int area() {
            cout<<"Rectangle class area: "<<(width * height)<<endl;
            return 0;
        }
};

class Triangle : public Shape {
    public:
        Triangle(int a, int b) {
            width = a;
            height = b;
        }
        int area() {
            cout<<"Triangle class area"<<(width * height / 2)<<endl;
            return 0;
        }
};

// Main function for the program
int main() {
    Shape *shape;
    Shape sh(1,2);
    Rectangle rec(10, 7);
    Triangle tri(10,5);

    shape = &sh;
    shape -> area();

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

//not type of pointer
// but address of object held by pointer