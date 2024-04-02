/*
1.) arithmetic
2.) relation
3.) logical
all this are very common next bitwise operators
*/
// bitwise operators.
/*
&, |, <<, >>, ~, ^
1.) & is used to do bitwise "AND" operation
2.) | is used to do bitwise "OR" operation
3.) ^ is used to do bitwise "XOR" operation
4.) >> helps in shifting the value to the right by the value specified in the left side's of >>
5.) << helps in shifting the value to the left by the value specified in the right side's of <<
6.) ~ this is used to convert the 1 to 0 and vicer-versa.
*/
// all the operation converts the decimal value to binary, and do opertion and the finally return them in decimal again.
// CPP Program to demonstrate the Bitwise Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 6, b = 4;

	// Binary AND operator
	cout << "a & b is " << (a & b) << endl;

	// Binary OR operator
	cout << "a | b is " << (a | b) << endl;

	// Binary XOR operator
	cout << "a ^ b is " << (a ^ b) << endl;

	// Left Shift operator
	cout << "a<<1 is " << (a << 1) << endl;

	// Right Shift operator
	cout << "a>>1 is " << (a >> 1) << endl;

	// One’s Complement operator
	cout << "~(a) is " << ~(a) << endl;

	return 0;
}
// 1>>a, this mean shifting 1 by the amount specified by a to the right
// a>>1, this means shifting a by 1 to the right
// 1<<a, this mean shifting 1 by the amount specfied in the a to the left
// a<<1, this mean shifting a by 1 to the left.
