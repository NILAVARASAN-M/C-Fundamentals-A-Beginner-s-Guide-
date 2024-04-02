// C++ Program to Demonstrate the correct size
// of various data types on your computer.
#include <iostream>
using namespace std;

int main()
{
    int num=10;
    cout << "Size of num : " << sizeof(num) << endl;
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;

	cout << "Size of long : " << sizeof(long) << endl;
	cout << "Size of float : " << sizeof(float) << endl;

	cout << "Size of double : " << sizeof(double) << endl;

	return 0;
}

// to print the sizeof 