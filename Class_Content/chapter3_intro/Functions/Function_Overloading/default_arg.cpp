//example of function overloading with default argument

#include<iostream>

using namespace std;

int sum(int x,int y,int z)

{

    int sum1=x+y+z;

    return (sum1);

}

int sum(int a=3,int b=2)

{

    int sum2=a+b;

    return (sum2);

}

int main()

{

cout<<sum(2,5,4);
cout<<sum(2,6);

return 0;

}