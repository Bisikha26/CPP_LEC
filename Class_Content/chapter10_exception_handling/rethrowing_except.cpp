// If we donot handle the excetion that is caught, we rethrow that exception by writing throw without argument
// Handler does what can be done locally and throws the exception again

#include<iostream>
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
            Number an(data*nm.data);

        }
};