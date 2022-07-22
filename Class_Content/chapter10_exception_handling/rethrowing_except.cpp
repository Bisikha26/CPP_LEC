// If we donot handle the exception that is caught, we rethrow that exception by writing throw without argument
// Handler does what can be done locally and throws the exception again

// Re-throwing an exception means calling the throw statement without an exception object, inside a catch block. 
// It can only be used inside a catch block.

#include<iostream>
#include<cmath>
using namespace std;

class Number {
    private:
        double data;
    public:
        Number() {
            data = 0;
        }

        Number(double d) {
            data = d;
        }

        class NEG{};
        void readdata() {
            cout<<"\n Enter Number: ";
            cin>>data;
        }
        double sqroot() {
            if(data < 0) {
                throw NEG();
            }
            return sqrt(data);
        }
        double gmean(Number nm) {
            double res;
            try {
                res = sqroot();
            }
            catch(NEG) {
                cout<<"Square root of negative number is not possible"<<endl;
                throw;
            }
            return res;
        }
};

int main() {
    Number nm1, nm2(53.5);
    nm1.readdata();
    try {
        double gm = nm1.gmean(nm2);
        cout<<"The geometric mean"<<gm<<endl;
    } catch(Number::NEG) {
        cout<<"The geometric mean of negative number cannot be calculated"<<endl;
    }
    return 0;
}