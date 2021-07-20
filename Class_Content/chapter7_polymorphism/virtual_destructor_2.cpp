#include<iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle() {
            cout<<"Constructor of Vehichle is invoked"<<endl;
        }

        virtual void showdata() {
            cout<<"I am Vehicle"<<endl;
        }

        ~ Vehicle() {
            cout<<"Destructor of Vehicle invoked"<<endl;
        }
};

class Car : public Vehicle {
    public:
        Car() {
            cout<<"Constructor of Car is invoked"<<endl;
        }
        void showdata() {
            cout<<"I am Car"<<endl;
        }

        virtual ~ Car() {
            cout<<"Destructor of Car invoked"<<endl;
        }
};

int main() {
    Vehicle *vp;
    // cout<<"base uses pointer pointing to base class object"<<endl;
    // vp= new Vehicle;
    // vp->showdata();
    // delete vp;


    // Deleting a derived class object (car in this case)using a pointer of base class type *vp
    //that has a non-virtual destructor results in undefined behavior.
    cout<<"Base class pointer pointing to dericed class object"<<endl;
    // Car c;
    vp = new Car;
    vp -> showdata();
    delete vp;
}
