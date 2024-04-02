// so in short all the functions defined in a class are in-line, but is in-inline if it follows all the conditions.
// but if an function declared and defined inside the class, then it is implicitly treated as in-line,
// but if the function is defined outside then it is not in-line.

// C++ Program to demonstrate inline functions and classes
#include <iostream>

using namespace std;

class operation {
	int a, b, add, sub, mul;
	float div;

public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void operation ::get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void operation ::sum()
{
	add = a + b;
	cout << "Addition of two numbers: " << a + b << "\n";
}

inline void operation ::difference()
{
	sub = a - b;
	cout << "Difference of two numbers: " << a - b << "\n";
}

inline void operation ::product()
{
	mul = a * b;
	cout << "Product of two numbers: " << a * b << "\n";
}

inline void operation ::division()
{
	div = a / b;
	cout << "Division of two numbers: " << a / b << "\n";
}

int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	return 0;
}

/*
It is also possible to define the inline function inside the class. In fact, all the functions defined inside the 
class are implicitly inline. Thus, all the restrictions of inline functions are also applied here. If you need to
 explicitly declare an inline function in the class then just declare the function inside the class and define it outside
  the class using the inline keyword. 
*/
