#include <iostream>
using namespace std;

// template function
template <class T>
T Large(T n1, T n2)
{
	return (n1 > n2) ? n1 : n2;
}

int main()
{
	int i1, i2;
	float f1, f2;
	char c1, c2;

	cout << "Enter two integers:\n";
	cin >> i1 >> i2;
	cout << Large(i1, i2) <<" is larger." << endl;
	// This call is equivalent to Large<int, int>(i1, i2)

	cout << "\nEnter two floating-point numbers:\n";
	cin >> f1 >> f2;
	cout << Large(f1, f2) <<" is larger." << endl;
	// This call is equivalent to Large<float, float>(f1, f2)

	cout << "\nEnter two characters:\n";
	cin >> c1 >> c2;
	cout << Large(c1, c2) << " has larger ASCII value.";
	// This call is equivalent to Large<char, char>(c1, c2)


	// mixing the data types
	// cout<<"can we mix the datatypes?"<<Large(i1, f1);

	return 0;
}

// If two characters are passed to function template, character with larger ASCII value is displayed.
