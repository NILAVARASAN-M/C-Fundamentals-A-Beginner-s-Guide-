// We can make a generic function as well

// A C++ program to show that we use template and
// reference to find size of any type array parameter
#include <iostream>
using namespace std;

template <typename T, size_t n>
void findSize(T (&arr)[n])
{
	cout << sizeof(T) * n << endl;
}

int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);

	float f[20];
	cout << sizeof(f) << " ";
	findSize(f);
	return 0;
}

// on a whole the ways of passing an array in c++ are below
/*
Methods to Pass Array to a Function in C++
In C++, we have the following ways to pass an array as a parameter to the function:

As a sized array
As an unsized array
As a pointer (pass by pointer)
As a reference (pass by reference)
*/
