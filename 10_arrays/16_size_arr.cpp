// we will see how when we pass an array, to an function how the function treats that array.

// A C++ program to show that it is wrong to
// compute size of an array parameter in a function
#include <iostream>
using namespace std;

// way-1

void findSize(int arr[]) 
{ 
cout << sizeof(arr) << endl; 
}

int main1()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);
	return 0;
}

// The cout statement inside main() prints 40, and cout in findSize() prints 8. The reason for different outputs is that
// the arrays always pass pointers in functions. Therefore, findSize(int arr[]) and findSize(int *arr) mean exact same thing. 
// Therefore the cout statement inside findSize() prints the size of a pointer.

// way-2

// A C++ program to show that we can use reference to
// find size of array


void findSize2(int (&arr)[10])
{
	cout << sizeof(arr) << endl;
}

int main2()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize2(a);
	return 0;
}

// The above program isn’t appealing as we have used the hardcoded size of the array parameter. 

// way-3

// A C++ program to show that we use template and
// reference to find size of integer array parameter

template <size_t n>
void findSize(int (&arr)[n])
{
	cout << sizeof(int) * n << endl;
}

int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);
	return 0;
}
