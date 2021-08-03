#include<iostream>
#include<cmath>

using namespace std;

class Number {
    private:
        double num;
    
    public:
        class NEG{};
        void readnum() {
            cout<<"Enter Number: ";
            cin>>num;
        }

        double sqroot() {
            if(num < 0) {
                // when problem is detected, exception is raised by using keyword throw
                
                throw NEG();
            } else {
                return (sqrt(num));
            }

        }
};

int main() {
    Number n1;
    double res;
    n1.readnum();
    try {
        cout<<"Trying to find square root..."<<endl;
        res = n1.sqroot();
        cout<<"Square root is:"<<res<<endl;
        cout<<"Success...exception is not raised<<endl";
    }
    catch(Number::NEG ) {
        cout<<"Square root of negative number is not possible"<<endl;
    }
    return 0;
}


// The terminate() function is called when the C++ error handling mechanism fails


// 