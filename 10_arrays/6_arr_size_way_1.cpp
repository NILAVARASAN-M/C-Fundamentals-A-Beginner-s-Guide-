// there are many ways 

// best way is Using a separate parameter
// A separate parameter of datatype size_t for array size or length should be passed to the fun().  
// size_t is an unsigned integer type of at least 16 bits. So, the corrected program will be:

/*
size_t:

size_t is a data type in C and C++ that is typically used to represent sizes of objects. It is an unsigned integer 
type and is capable of representing the size of any object in bytes. The exact size of size_t depends on the implementation,
 but it is guaranteed to be large enough to represent the size of the largest possible object in the current environment.
*/

#include <stdio.h>
#define SIZEOF(arr) sizeof(arr) / sizeof(*arr) // defining macros


void fun(int arr[], size_t arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++) {
		arr[i] = i;
	}
}

// Driver Code
int main()
{
	int i;
	int arr[] = { 0, 0, 0, 0 };
	size_t n = sizeof(arr) / sizeof(arr[0]); // this is one way
    size_t n1 = SIZEOF(arr); // this is another way.
    size_t n2 = (&arr)[1] - arr; // this pointer arithmetic.
	fun(arr, n);

	printf("The size of the array is: %ld", n);
	printf("\nThe elements are:\n");
	for (i = 0; i < n; i++)
		printf(" %d ", arr[i]);

	getchar();
	return 0;
}

// size_t n2 = (&arr)[1] - arr;  ---> this part may be very confusing. lets see how this works actually.

/*
`(&arr)[1]` is a pointer arithmetic expression in C++. Breaking it down:

- `&arr`: This gives the address of the entire array `arr`.
- `[1]`: This accesses the element at index `1` after `&arr`. Since `&arr` is the address of an array, the expression `(&arr)[1]` accesses the memory location located after the entire array `arr` in memory.

In other words, `(&arr)[1]` points to the memory location right after the end of the array `arr`. This might seem counterintuitive, but it's a result of how arrays decay into pointers and how pointer arithmetic works in C++.
*/

// so (&arr)[2], means the address after moving two block of the size arr, if 1 means by one block of the size of arr