// Pass object as a function argument

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

// we are making a function, which takes object as an argument
// class -> 2student, student haru ko average marks calculate
void calculateAverage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) / 2;
    cout<<"The average marks of two students is"<<average<<endl;
 }

int main() {
    Student student1(100.0), student2(200.5);

    // To pass the object as an argument
    calculateAverage(student1, student2);
    return 0;
}
