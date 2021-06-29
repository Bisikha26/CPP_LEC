// Just like we make array of integer, strings, character e.t.c we can also create an array of a user define data type called object
// Object belonging to a class can be represented in the form of array
// syntax - class myclass{} , myclass bct[10]

#include<iostream>
using namespace std;

class MyClass {
    private:
    int x;

    public:
        void SetX(int i) {
            x = i;
        }

        int getX() {
            return x;
        }
};

int main() {
    MyClass classes[4];
    int i;

    for(i=0; i<4; i++) {
        classes[i].SetX(i);
    }

    for(i=0; i<4; i++) {
        cout<<"classes["<<i<<"]: "<<classes[i].getX()<<"\n";
    }

    return 0;
}
