#include <iostream>
using namespace std;

// data structure - stack 

class stack {
    private:
        int arr[MAX];
        int top;
    public: 
        int stack_s();
        void push(int data);
        int pop();
        int size();
}

// class template
template<class T>
class Stack {
    private:
        T arr[MAX];
        int top;
    public:
        Stack()
        void push(T data)
        T pop();
}

Stack<float> stk;