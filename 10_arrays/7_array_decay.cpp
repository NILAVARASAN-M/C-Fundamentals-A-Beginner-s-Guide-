// array decay:
// The loss of type and dimensions of an array is known as decay of an array.This generally occurs when we pass the
//  array into function by value or pointer. What it does is, it sends first address to the array which is a pointer, 
//  hence the size of array is not the original one, but the one occupied by the pointer in the memory.

// example 1:

// this will also show how we will pass an mutltidemnsional array.

#include<iostream>

template<size_t N>

void funct(int (*p)[N]){
    std::cout<<sizeof(p);
}

// void funct(int (*p)[7]) ---> here this p is an pointer which is pointing to an integer array of size 7. that is what it means, this is how we pass
// a 1D array from an 2D array to an function.
int main1(){
    int arr[10][7]={
    { 1, 2, 3, 4, 5, 6, 7 },
    { 8, 9, 10, 11, 12, 13, 14 },
    { 15, 16, 17, 18, 19, 20, 21 },
    { 22, 23, 24, 25, 26, 27, 28 },
    { 29, 30, 31, 32, 33, 34, 35 },
    { 36, 37, 38, 39, 40, 41, 42 },
    { 43, 44, 45, 46, 47, 48, 49 },
    { 50, 51, 52, 53, 54, 55, 56 },
    { 57, 58, 59, 60, 61, 62, 63 },
    { 64, 65, 66, 67, 68, 69, 70 }
};

funct(arr);
}

// now we will notice the size of p will be 4, because it is apointer having the address of the array.

// to avoid this we will create refrence, to that array.and do.

// C++ code to demonstrate prevention of
// decay of array
using namespace std;

// A function that prevents Array decay
// by passing array by reference
void fun(int (&p)[7])
{
	// Printing size of array
	cout << "Modified size of array by "
			"passing by reference: ";
	cout << sizeof(p) << endl;
}

int main()
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7,};

	// Printing original size of array
	cout << "Actual size of array is: ";
	cout << sizeof(a) <<endl;

	// Calling function by reference
	fun(a);

	return 0;
}
