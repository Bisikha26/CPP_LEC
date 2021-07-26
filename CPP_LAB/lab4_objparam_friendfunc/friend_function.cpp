//WAP to create sample class with 2 float data members and member functions **void getdata()** to input the values 
//and one friend function **float mean(sample)** to calculate and return mean value.

#include<iostream>
#include<conio.h>

using namespace std;

class Sample {
    public:
    float value1, value2;

    void getData(){
        cout<<"Enter first value: ";
        cin>>value1;
        cout<<"Enter second value:";
        cin>>value2;
    }
    friend float mean(Sample);
};

float mean(Sample s1) {
    return ((s1.value1 + s1.value2)/2);
}

int main() {
    Sample s;
    s.getData();
    float m = mean(s);
    cout<<"The mean is:"<<m<<endl;
    return 0;
}
