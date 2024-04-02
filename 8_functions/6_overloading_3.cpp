// Function with Default Arguments:-  --> name of the ambitious overloading error.

#include <iostream>
using namespace std;
void fun(int);
void fun(int, int);
void fun(int i) { cout << "Value of i is : " << i << endl; }
void fun(int a, int b = 9)
{
	cout << "Value of a is : " << a << endl;
	cout << "Value of b is : " << b << endl;
}
int main()
{
	fun(12);

	return 0;
}
/*
The above example shows an error “call of overloaded ‘fun(int)’ is ambiguous“. The fun(int a, int b=9) can be 
called in two ways: first is by calling the function with one argument, i.e., fun(12) and another way is calling the function 
with two arguments, i.e., fun(4,5). The fun(int i) function is invoked with one argument. Therefore, the compiler could not be
able to select among fun(int i) and fun(int a,int b=9).
*/