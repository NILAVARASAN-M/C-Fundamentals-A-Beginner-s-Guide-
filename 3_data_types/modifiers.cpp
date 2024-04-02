// there are 4 main modifiers which add extra details for the primitive data types, can be usefull in certain cirmustances.
// 1.) long, short, unsigned, signed

// signed

/*
// C++ program to demonstrate 
// the signed modifier
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	cout << "Size of signed int : " << 
			sizeof(signed int) << 
			" bytes" << endl;
	cout << "Size of signed char : " << 
			sizeof(signed char) << 
			" bytes" << endl;

	return 0;
}
*/

// unsigned
/*
// C++ program to demonstrate 
// the unsigned modifier
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	cout << "Size of unsigned int : " << 
			sizeof(unsigned int) << 
			" bytes" << endl;
	cout << "Size of unsigned char : " << 
			sizeof(unsigned char) << 
			" bytes" << endl;
	return 0;
}

*/

// key difference between the two is 
/*
Difference Between Signed and Unsigned Modifiers
# The signed value of the signed variable is stored in the allocated memory. However, the
 signed value is not stored by the unsigned variables.
# The sign takes 1 bit extra. So, if the unsigned value is being used then one-bit extra space
 is used to save the value of a variable.
# The range of values for unsigned types starts from 0. For example, for unsigned int, the 
value range is from 0 to 4,294,967,295. However, for signed int, the value range is from -2,147,483,648 to 2,147,483,647.
*/

// signed and unsigned can be used only for char and integer.

// similaraly many comibination can be done and used.