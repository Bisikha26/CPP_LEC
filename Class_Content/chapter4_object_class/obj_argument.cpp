// Pass object to function
#include<iostream>
using namespace std;

class Student {
    public:
    double marks;

    // constructor to initialize marks
    Student(double m) {
        marks = m;
    }
};

// function that has objects as parameters
void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2;

    cout<<"Average Marks: "<<average<<endl;
}

int main() {
    Student student1(88.0), student2(56.0);

    // pass the object as arguments
    calculateAverage(student1, student2);
    return 0;
}