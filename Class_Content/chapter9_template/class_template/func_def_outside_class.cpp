#include <iostream>
using namespace std;

const int MAX = 20;
template <class T>
class Stack {
    private:
        T arr[MAX];
        int top;
    public:
        Stack();
        void push(T data);
        T pop();
        int size();
};

template<class T>
Stack<T>::Stack() {
    top = -1;
}

template<class T>
void Stack<T>::push(T data) {
    arr[++top] = data;
}

// complete the code


