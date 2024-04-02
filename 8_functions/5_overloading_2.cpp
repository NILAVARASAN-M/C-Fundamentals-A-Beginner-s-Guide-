#include<iostream>

// there can be ambuity while doing function overloading. some common problems which may not see to be visible, but it all are caused by small
// minute problems, some are listed below:

/*
Causes of Ambiguity:

Type Conversion.
Function with default arguments.
Function with pass-by-reference.
*/
using namespace std;

void fun(int);
void fun(float);
void fun(int i) { cout << "Value of i is : " << i << endl; }
void fun(float j)
{
    cout << "Value of j is : " << j << endl;
}
void Overload1()
{
    fun(12);
    fun(1.2);
}
// --> this will throw a error because of the fact that c++ will take pointed values as double not float onlyy.
/*
The above example shows an error “call of overloaded ‘fun(double)’ is ambiguous“. The fun(10) will call the
 first function. The fun(1.2) calls the second function according to our prediction. But, this does not refer to any 
 function as in C++, all the floating point constants are treated as double not as a float. If we replace float to double, 
 the program works. Therefore, this is a type conversion from float to double.
*/

