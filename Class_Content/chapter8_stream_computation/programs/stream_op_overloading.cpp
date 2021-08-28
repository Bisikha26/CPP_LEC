// when to use ? - cout << (user defined data type) or cin >> (user defined type)
// This can't be class member function thus, must be a friend function

/*
In operator overloading, if an operator is overloaded as a member, then it must be a member of the object on the left side of the operator. 
For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes). 
To make this statement compile, we must overload ‘+’ in a class of ‘ob1’ or make ‘+’ a global function. 

The operators ‘<<‘ and ‘>>’ are called like ‘cout << ob1’ and ‘cin >> ob1’. 
So if we want to make them a member method, then they must be made members of ostream and istream classes, which is not a good option.
Therefore, these operators are overloaded as global functions with two parameters, cout and object of user-defined class.
*/

/*
we overload << and >> operators with objects cout(console output) and cin(console input) which are the object of ostream and istream classes
cout << "This is OOP" (extracting the string with cout object)
cin >> a; (taking value of integer or any other type)

Overloading << and >> operator for it to work with user defined type

class Person{};
Person p;
cout<<p; (overloading << operator)
*/

#include <iostream>
using namespace std;

class Student {
    int age;

    public:
        Student() {
            age = 25;
        }

    friend istream& operator >> (istream& input, Student& obj);
    friend ostream& operator << (ostream& output, Student& obj);
};

// cin is obj of istream so returning reference of istream
//1st param - passing the references of istream type
//2nd param - object of our own class as second parami.e obj
istream& operator >> (istream& input, Student& obj) {
    input >> obj.age;
    return input;
} 

//1st param - passing the reference of ostream type
//2nd param - object of our own class as second parami.e obj
ostream& operator << (ostream& output, Student& obj) {
    output << obj.age << endl;
    return output;
}

int main() {
    Student s;
    // operator <<(cout, s)
    // cout<<obj.s
    cout << s;

    // operator >> (cin , s)
    // cin>>obj.s
    cin >> s;
    return 0;
}

/*
cin and cout are not object of Student class so using them in the left
hand side, we must declare it in its own class i.e istream and ostream classes
which is not a good practice
*/