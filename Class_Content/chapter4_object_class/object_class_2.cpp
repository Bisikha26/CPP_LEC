//Program to illustrate the application of private and public access specifiers

#include<iostream>
using namespace std;

// create a class
class Room {
    private:
        double length;
        double breadth;
        double height;
    
    public:
        double setArea(double len, double bth, double hgt) {
            length = len;
            breadth = bth;
            height = hgt;
        }

        double calculateArea() {
            return length * breadth;
        }

        double calculateVolume() {
            return length * breadth * height;
        }
};

int main() {
    // create an object of class room
    Room myroom;

    myroom.setArea(42.5, 30.8, 19.2);
    cout<<"The Area of my Room is:"<<myroom.calculateArea()<<endl;
    cout<<"The Volume of my Room is: "<<myroom.calculateVolume()<<endl;

}