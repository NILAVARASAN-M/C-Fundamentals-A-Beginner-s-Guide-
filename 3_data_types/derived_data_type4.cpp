// C++ program to illustrate
// Reference Derived Type

#include <iostream>
using namespace std;

int main()
{
	int x = 10;

	// Reference Derived Type
	// ref is a reference to x.
	int& ref = x;

	// Value of x is now changed to 20
	ref = 20;
	cout << "x = " << x << endl;

	// Value of x is now changed to 30
	x = 30;
	cout << "ref = " << ref << endl;

	return 0;
}

// this is also very similar to the pointers, but there we store the address in the variable but here it is not the case.
// in here ref and x now points to the same memory location, any change in ref will affect even x and vice-versa.
// but in pointers we save the memory address, and manipulate accordingly.
// also once what is the variable declared to that refrence variable it will forever.


// in simple words they make alias with the other variables.