// In unary friend, since it is not a member function, one argument is passed

#include<iostream>
using namespace std;

class UnaryFriend {
    int a = 10, b=20, c=30;

    public:
        void show() {
            cout<<a<<b<<c<<endl;
        }

    void friend operator -(UnaryFriend &u1);
};

void operator -(UnaryFriend &u1) {
    u1.a = -(u1.a);
    u1.b = -(u1.b);
    u1.c = -(u1.c);

}

// pass by reference because overloaded function is outside class and show() is inside the class scope so the changes should be reflected globally
// to reflect the changes globally, we use pass by reference

int main() {
    UnaryFriend f1;
    cout<<"Before Overloading";
    f1.show();
    cout<<"After Overloading";
    -f1;
    f1.show();
    return 0;
}