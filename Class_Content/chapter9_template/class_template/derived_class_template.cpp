#include <iostream>
using namespace std;

class base {
    private:
        int data;
    public:
        base(){}
        base(int d) {
            data = d;
        }
        void display() {
            cout<<"data: "<<data<<endl;
        }
};

template <class T>
class derived : public base {
    private:
        T data;
    public:
        derived() {}
        derived(int a, T b): base(a), data(b) {}
        void display() {
            cout<<"In base: ";
            base::display();
            cout<<"In derived data: "<<data<<endl;
        }
};

int main() {
    derived <float> obj(25, 9.7);
    obj.display();
}