// Formula 0.5(base*height)

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {
    int height, base;
    float area;

    cout<<"Enter base and height of a triangle"<<endl;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter base: ";
    cin>>base;

    area = 0.5*(base * height);
    cout<<"The area of triangle is: "<<area;
    return 0;
}