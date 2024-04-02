// C++ program to illustrate Array Name as Pointers 
#include <bits/stdc++.h> 
using namespace std; 
void geeks() 
{ 
	// Declare an array 
	int val[3] = { 5, 10, 20 }; 

	// declare pointer variable 
	int* ptr; 

	// Assign the address of val[0] to ptr 
	// We can use ptr=&val[0];(both are same) 
	ptr = val; 
	cout << "Elements of the array are: "; 
	cout << ptr[0] << " " << ptr[1] << " " << ptr[2]; 
} 
// Driver program 
int main() { geeks(); }


// here one dought will arise how we are using the ptr[0], ptr[1] ---> and so one.
// ptr has the memory address of the val array, and so we may think like *ptr[0] like that.

/*
 the variable name val will actually have the address of the first element, always so val is like --> &val[0].
 this implicilty done in memory.
 so ptr and val are same, and both point to the same.
 when we say ptr[0], it is same as val[0]. ptr[1]==val[1] .... so one similarly  like this.
but how derefrencing.
// ptr[2] gives the value stored at the memory location ptr + 2 * sizeof(int), which is the third element of the array val.
 In this code, since ptr is an array pointer, when you use ptr[0], ptr[1], etc., you are essentially 
 dereferencing ptr implicitly to access the elements of the array.
 */

/*
In this code, `ptr` is a pointer variable that stores the memory address of the first element of the array `val`. When we assign 
`ptr = val;`, `ptr` now points to the first element of the array `val`. 

Since `ptr` points to the first element of the array, `ptr[0]` is equivalent to `val[0]`, `ptr[1]` is equivalent to `val[1]`, and so on. 

Here's a breakdown of how it works:

- `ptr` holds the memory address of the first element of the array `val`.
- `ptr[0]` dereferences `ptr` and gives the value stored at the memory location pointed to by `ptr`, which is the first 
element of the array `val`.
- `ptr[1]` gives the value stored at the memory location `ptr + sizeof(int)`, which is the second element of the array `val`.
- `ptr[2]` gives the value stored at the memory location `ptr + 2 * sizeof(int)`, which is the third element of the array `val`.

So, using `ptr[0]`, `ptr[1]`, and `ptr[2]` is a convenient way to access the elements of the array `val` through the pointer `ptr`.
*/

/*
we dont need to use *ptr??
---> below:
That's correct. In this code, since `ptr` is an array pointer, when you use `ptr[0]`, `ptr[1]`, etc., you are essentially dereferencing 
`ptr` implicitly to access the elements of the array. 

In C++, array names are automatically converted to pointers to the first element of the array in certain contexts, such 
as when used as function arguments or when assigned to a pointer variable. Therefore, `ptr` is already treated as a pointer
to the first element of the array `val`, and you can directly access its elements using the array subscript notation 
(`ptr[0]`, `ptr[1]`, etc.) without needing to explicitly dereference it using the `*` operator.
*/