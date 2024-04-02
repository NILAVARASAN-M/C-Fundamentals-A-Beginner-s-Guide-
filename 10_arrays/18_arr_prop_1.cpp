// lets see some of the very common properties of the array's in c
/*
Fixed Size Collection
Homogeneous Elements
Indexing in Array
Dimensions of Array
Contiguous Storage
Random Access
Array name relation with pointer
Bound Checking
Array Decay
*/

//1.) Fixed Size Collection
// In C, the size of an array is fixed after its declaration. It should be known at the compile time and it 
// cannot be modified later in the program.

// C Program to Illustrate the Fixed Size Properties of the
// Array
#include <stdio.h>

int main1()
{

	// creating a new array of size 5
	int array[5] = { 1, 2, 3, 4, 5 };

	printf("Size of Array Before: %d\n",
		sizeof(array) / sizeof(int));

	// trying to increase the size of the array
	array[6];
	// not checking the size
	printf("Size of Array After: %d",
		sizeof(array) / sizeof(int));

	return 0;
}

//2.) Homogeneous Elements
// An array in C cannot have elements of different data types. All the elements are of the same type.

// C program to Demonstrate the Homogeneous Property of the
// C Array
#include <stdio.h>

int main2()
{

	// declaring integer array
	int arr[3] = { 1, 2 };

	// trying to store string in the third element
	arr[2] = "Geeks";

// printing elements
	printf("Array[1]: %d\n", arr[0]);
	printf("Array[2]: %d\n", arr[1]);
	printf("Array[3]: %s", arr[2]);

	return 0;
}


// 3.) Indexing in Array
//ndexing of elements in an Array in C starts with 0 instead of 1. It means that the index of the first element will be 0 
// and the last element will be
// (size – 1) where size is the size of the array.

// 4.) Dimensions of Array
// An array in C can be a single dimensional like a 1-D array or multidimensional like a 2-D array, 3-D array, and so on.
// It can have any number of dimensions. The number of elements in a multidimensional array is the product of the size of all 
// the dimensions.


// 5.)Contiguous Storage
// All the elements in an array are stored at contiguous or consecutive memory locations. We can easily imagine this concept
//  in the case of a 1-D array but multidimensional arrays are also stored contiguously. It is possible by storing them 
// in row-major or column-major order where the row after row or column after the column is stored in the memory. We can
// verify this property by using pointers.

//6.) Random Access to the Elements
// It is one of the defining properties of an Array in C. It means that we can randomly access any element in the array 
// without touching any other element using its index. This property is the result of Contiguous Storage as a compiler
// deduces the address of the element at the given index by using the address of the first element and the index number.

// 7. Relationship between Array and Pointers
// Arrays are closely related to pointers in the sense that we can do almost all the operations possible on an array 
// using pointers. The array’s name itself is the pointer to its first element.

// 8. Bound Checking 
// Arrays are closely related to pointers in the sense that we can do almost all the operations possible on an
// array using pointers. The array’s name itself is the pointer to its first element.

// C Program to Illustrate the Out of Bound access in arrays
int main3()
{

	// creating new array with 3 elements
	int arr[3] = { 1, 2, 3 };

	// trying to access out of bound element
	printf("Some Garbage Value: %d", arr[5]);

	return 0;
}

// generaly in other programming languages, this will throw an error, but in c++/c this will not because of the fact
// some memory space is there, just that it has some garbage valuue with it.
// As seen in the above example, there is no error shown by the compiler while accessing memory that is out of array bounds.

// 9.) Array decay

// Array decay is the process in which an array in C loses its dimension in certain conditions and decays into pointers. 
// After this, we cannot determine the size of the array using sizeof() operator. It happens when an array is passed as a pointer.

