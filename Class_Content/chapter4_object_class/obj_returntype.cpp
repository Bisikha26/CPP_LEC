#include <iostream>
using namespace std;

class Student {
    public:
    double marks1, marks2;
};

// function that returns object of Student
Student createStudent() {
    Student student;

    // Initilize member variables of Student
    student.marks1 = 100;
    student.marks2 = 200;
    
    // print member variables of Student
    cout<<"Marks 1 = "<<student.marks1<<endl;
    cout<<"Marks 2 = "<<student.marks2<<endl;

    // returns an object of student class
    return student;
}


int main() {
    Student student1;
    // call function
    student1 = createStudent();
    return 0;
}