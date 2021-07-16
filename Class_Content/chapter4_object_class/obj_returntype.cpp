#include <iostream>
using namespace std;
// user defined data type
class Student {
    public:
    double marks1, marks2;
};

// function that returns object of Student
//Since class is a user defined data type, to return the object created inside function, we can use class name as return type
// https://www.quora.com/Can-a-class-be-a-return-type-in-C++ [refer this link]
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





