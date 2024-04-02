// Function with Pass By Reference:- ---> next type of error is this one.

#include <iostream>
using namespace std;
void fun(int);
void fun(int&);
int main()
{
	int a = 10;
	fun(a); // error, which fun()?
	return 0;
}
void fun(int x) { cout << "Value of x is : " << x << endl; }
void fun(int& b)
{
	cout << "Value of b is : " << b << endl;
}

/*
The above example shows an error “call of overloaded ‘fun(int&)’ is ambiguous“. 
The first function takes one integer argument and the second function takes a reference parameter as an argument. 
In this case, the compiler does not know which function is needed by the user as there is no syntactical difference
 between the fun(int) and fun(int &).
*/