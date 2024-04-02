// lets dicuss some basic points about refrences in c++.

// 1. A pointer can be declared as void but a reference can never be void For example
// 2. The pointer variable has n-levels/multiple levels of indirection i.e. single-pointer, double-pointer,
// triple-pointer. Whereas, the reference variable has only one/single level of indirection. The following code reveals the mentioned points:  
// 3. Reference variables cannot be updated.
// 4. Reference variable is an internal pointer.
// 5.  Declaration of a Reference variable is preceded with the ‘&’ symbol ( but do not read it as “address of”).


// C++ Program to demonstrate
// references and pointers
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// simple or ordinary variable.
	int i = 10;

	// single pointer
	int* p = &i;

	// double pointer
	int** pt = &p;

	// triple pointer
	int*** ptr = &pt;

	// All the above pointers differ in the value they store
	// or point to.
	cout << "i = " << i << "\t"
		<< "p = " << p << "\t"
		<< "pt = " << pt << "\t"
		<< "ptr = " << ptr << '\n';

	// simple or ordinary variable
	int a = 5;
	int& S = a;
	int& S0 = S;
	int& S1 = S0;

	// All the references do not differ in their
	// values as they all refer to the same variable.
	cout << "a = " << a << "\t"
		<< "S = " << S << "\t"
		<< "S0 = " << S0 << "\t"
		<< "S1 = " << S1 << '\n';
	return 0;
}
