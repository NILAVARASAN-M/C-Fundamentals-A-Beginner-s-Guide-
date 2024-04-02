// C++ program to demonstrate static
// variables inside a class

#include <iostream>
using namespace std;

class GfG {
public:
	static int i;

	GfG(){
		// Do nothing
	};
};

int GfG::i = 1;

int main()
{
	GfG obj;
	// prints value of i
	cout << obj.i;
}
// this is the correct way of using the static variable by the user, where we explicitly tell or define the static variable.

/*
In C++, static member variables need to be defined outside the class in order to allocate memory for them. Here's why:

Declaration vs. Definition: When you declare a static member variable inside a class, you're only telling the compiler 
that such a variable exists and its type, but you're not allocating memory for it. This is similar to declaring a function 
prototype without defining its body.

Memory Allocation: Memory for static member variables is allocated separately from objects of the class. This memory allocation
 happens outside the class definition. When you define the static member variable outside the class, you're actually allocating memory for it.

Single Definition Rule: In C++, you can only have one definition of a static member variable. By defining it outside the class, 
you ensure that there's only one memory allocation for the variable across all translation units (source files) where it's used.
*/