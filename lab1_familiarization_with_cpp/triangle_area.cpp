//  Q. WAP in C++ to compute area of triangle
// Formula - sqrt(s*(s-a)*(s-b)*(s-c))

#include<iostream>
#include <conio.h>
#include<math.h>

using namespace std;

int main(){
    double area, s,a,b,c;
    cout<<"Enter the sides of triangle"<<endl;
    cout<<"Side a:";
    cin>>a;
    cout<<"Side b:";
    cin>>b;
    cout<<"Side c:";
    cin>>c;

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<"The area of the triangle is"<<area<<"."<<endl;

    return 0;
    }

