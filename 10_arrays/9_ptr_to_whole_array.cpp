// we know that a pointer to an array, like int *ptr, will point to the first index of an array.
// but if we want to point an whole array, it is totally different
// SYNTAX: data_type (*var_name)[size_of_array]; ---> int (*ptr)[10];

/*
Here ptr is pointer that can point to an array of 10 integers. Since subscript have higher precedence than indirection,
 it is necessary to enclose the indirection operator and pointer name inside parentheses. Here the type of ptr is ‘pointer 
 to an array of 10 integers.
*/

// C program to understand difference between 
// pointer to an integer and pointer to an
// array of integers. 
#include<stdio.h>

int main()
{
	// Pointer to an integer
	int *p; 
	
	// Pointer to an array of 5 integers
	int (*ptr)[5]; 
	int arr[5];
	
	// Points to 0th element of the arr.
	p = arr;
	
	// Points to the whole array arr.
	ptr = &arr; // here we are storing the address of the arr, in ptr. 
	
	printf("p = %p, ptr = %p\n", p, ptr);
	
	p++; 
	ptr++;
	
	printf("p = %p, ptr = %p\n", p, ptr);
	
	return 0;
}
// Here, p is pointer to 0th element of the array arr, while ptr is a pointer that points to the whole array arr. 

// The base type of p is int while base type of ptr is ‘an array of 5 integers’.
// We know that the pointer arithmetic is performed relative to the base size, so if we write ptr++, then the pointer ptr will be
// shifted forward by 20 bytes.

// now if we derefrence p, it will give an integer that is arr[0], but if we defrence ptr it will give an array.

// On dereferencing a pointer expression we get a value pointed to by that pointer expression. The pointer to an array points to an array, 
// so on dereferencing it, we should get the array, and the name of the array denotes the base address. So whenever a pointer to an array is 
// dereferenced, we get the base address of the array to which it points.