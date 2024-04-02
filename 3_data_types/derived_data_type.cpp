// these data-types are nothing but actually built usually using the primitive types like int, float, double. so collection of them
// together form this derived data type.
// 4 types: pointers, arrays, functions, refrences.

// 1.) functions.
// C++ program to demonstrate
// Function Derived Type

#include <iostream>

// max here is a function derived type
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

// main is the default function derived type
int main()
{
	int a = 10, b = 20;

	// Calling above function to
	// find max of 'a' and 'b'
	int m = max(a, b);

	std::cout << "m is " << m;
	return 0;
}