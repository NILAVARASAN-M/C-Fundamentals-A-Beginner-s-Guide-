// some basic application of pointers.
#include<cstdio>
#include<cmath>
#include<cstdlib>

// 1.) 1. Passing Arguments by Reference
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// 2.) For Efficiency Purpose
// function to print an array by passing reference to array
void printArray(int* arr, int n)
{
    // here array elements are passed by value
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
// here since we are actually passing by reference, so the same array is present in memory. and we are not duplicating it again in memory.
// so we are saving tons of space in memory.
// Note: Passing large structure without reference would create a copy of the structure (hence wastage of space). 

// 3.) accessing the array elements.
int access_elements()
{
    int arr[] = { 100, 200, 300, 400 };
    // Compiler converts below to *(arr + 2).
    printf("%d ", arr[2]);
    // So below also works.
    printf("%d\n", *(arr + 2));
    return 0;
}

// 4.) To Return Multiple Values
void fun(int n, int* square, double* sq_root)
{
    *square = n * n;
    *sq_root = sqrt(n);
}
int main_1()
{
    int n = 100;
    int sq;
    double sq_root;
    fun(n, &sq, &sq_root);
    printf("%d %f\n", sq, sq_root);
    return 0;
}
// like in python we can return mutiple values using pointers, just we are passing extra arguments that's all.

// 5.) to dynamically allocate memory, and this will return a pointer pointing to that memory in heap.
// C program to dynamically allocate an
// array of given size.
#include <stdio.h>
#include <stdlib.h>
int* createArr(int n)
{
	int* arr = (int*)(malloc(n * sizeof(int)));
	return arr;
}
int main()
{
	int* pt = createArr(10);
	return 0;
}
