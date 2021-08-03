// implementation of stack class as template
// objects are created by declearing an object uing the template argument
#include <iostream>
using namespace std;

const int MAX = 20;
template <class T>
class Stack {
    private:
        T arr[MAX];
        int top;
    public:
        Stack() {
            top = -1;
        }
        void push(T data) {
            arr[++top] = data;
        }
        T pop() {
            return arr[top--];
        }
        int size() {
            return (top+1);
        }
};

int main() {
    cout<<"Stack for integer data type"<<endl;
    Stack<int> s1;
    cout<<"Size of Stack:"<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout<<"Size of Stack:"<<s1.size()<<endl;
    cout<<"Number Popped:"<<s1.pop()<<endl;
    cout<<"Number Popped:"<<s1.pop()<<endl;
    cout<<"Size of Stack:"<<s1.size()<<endl;
    s1.push(44);
    cout<<"Size of Stack:"<<s1.size()<<endl;
    cout<<"Number Popped:"<<s1.pop()<<endl;
    cout<<"Size of Stack:"<<s1.size()<<endl;

    cout<<"Stack for floating point data type"<<endl;
    Stack<float> s2;
}
