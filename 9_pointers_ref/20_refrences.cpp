// general syntax for declaraing a variable as an refrence.

// when we refrence a variable with other, now both the variable points to the same memory location.
// we can use both the variable to access the same-memory location, and changes mage in one variable
// will be reflected in th other variable and so on.

// C++ Program to demonstrate 
// use of references
#include <iostream>
using namespace std;

int main()
{
	int x = 10;

	// ref is a reference to x.
	int &ref = x;

	// Value of x is now changed to 20
	ref = 20;
	cout << "x = " << x << '\n';

	// Value of x is now changed to 30
	x = 30;
	cout << "ref = " << ref << '\n';
    cout<<&x<<" "<<&ref; // both will point to same location.
	return 0;
}
