// C++ program to illustrate the use
// of namespace with same name of
// function and variables
#include <iostream>
using namespace std;

// Namespace n1
namespace n1 {
int x = 2;

// Function to display the message for namespace n1
void fun()
{
	cout << "This is fun() of n1"
		<< endl;
}
}

// Namespace n2
namespace n2 {

int x = 5;

// Function to display the message for namespace n2
void fun()
{
	cout << "This is fun() of n2"
		<< endl;
}
}

// Driver Code
int main()
{
	// The methods and variables called using scope resolution(::)
	cout << n1::x << endl;

	// Function call
	n1::fun();

	cout << n2::x << endl;

	// Function call
	n2::fun();

	return 0;
}

/*
1. In the above example program, both n1 and n2 have a variable and function of the same name x and fun() respectively.
2. The namespace is used to decrease or limit the scope of any variable or function.
3. As in the above code variable x and method fun() were limited to namespaces n1 and n2. 
Thus, their scope was not outside the n1 or n2.
4. Every time using the scope resolution operator (::) in a variable or a function defined is not required, 
it can be solved with “using” directive.
5. The using directive means to include the whole code written in the namespace in the closing scope.
*/
