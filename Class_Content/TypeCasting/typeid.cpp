#include<iostream>
#include<typeinfo>

using namespace std;

class Animal {
    public:
        virtual void display(){

        }
};

class Cow: public Animal {

};

class Dog : public Animal {

};

int main() {
    int mark, roll;
    float avg;
    char *str;
    Animal *anm;
    Cow cw;
    Dog dg;

    cout<<"Type of mark is: "<<typeid(mark).name()<<endl;
    cout<<"Type of roll is: "<<typeid(roll).name()<<endl;
    cout<<"Type of avg is: "<<typeid(avg).name()<<endl;
    cout<<"Type of *str is: "<<typeid(*str).name()<<endl;
    cout<<"Type of str is: "<<typeid(str).name()<<endl;

    cout<<"Type of anm is: "<<typeid(anm).name()<<endl;
    cout<<"Type of cw is: "<<typeid(cw).name()<<endl;
    cout<<"Type of dg is: "<<typeid(dg).name()<<endl;

    cout<<"******************************************************";
    anm = &cw;
    cout<<"type of *anm when pointing to cw is: "<<typeid(*anm).name()<<endl;

    anm = &dg;
    cout<<"type of *anm when pointing to dg is: "<<typeid(*anm).name()<<endl;
}

// remove the virtual keyword and check