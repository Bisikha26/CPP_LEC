#include<iostream>
#define MAX 2
using namespace std;

class Stack {
    protected:
        int s[MAX];
        int top;
    public:
        class FULL{}; //exception class for full stack with empty class body
        class EMPTY{};

        Stack() {
            top = -1;
        }

        void push(int x) {
            if(top==MAX-1){
                // nameless object of type class FULL{}
                throw FULL();
            } else {
                s[++top] = x;
            }
        } 

        int pop() {
            if(top == -1) {
                // nameless object of type class EMPTY()
                throw EMPTY();
            } else {
                return s[top--];
            }
        }
};

int main() {
    Stack s;
    try {
        // s.push(11);
        s.push(22);
        s.push(33);

        cout<<"Number Popped: "<<s.pop()<<endl;
        cout<<"Number Popped: "<<s.pop()<<endl;
        cout<<"Number Popped"<<s.pop()<<endl;
    }
    catch(Stack::FULL) {
        cout<<"Exception: Stack is Full"<<endl;
    } 
    catch(Stack::EMPTY) {
        cout<<"Exception: Stack is Empty"<<endl;
    }
    return 0;
}