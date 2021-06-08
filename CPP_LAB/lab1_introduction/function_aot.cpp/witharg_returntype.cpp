#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

float area_triangle(float, float, float);

int main() {
    float area, s, a, b, c;

    cout<<"Enter sides of triangle"<<endl;
    cout<<"Side a: ";
    cin>>a;
    cout<<"Side b: ";
    cin>>b;
    cout<<"Side c: ";
    cin>>c;

    area = area_triangle(a, b, c);
    cout<<"The area of triangle is: "<<area;
    return 0;
}

float area_triangle(float a, float b, float c) {
    float s, area;
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

