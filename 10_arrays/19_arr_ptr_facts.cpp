// Pointer allocation is done during runtime.	Array allocation is done during compile runtime.

// for arrays, the memory allocation is, Array Allocation during Compile-time: When you declare an array in C++, 
// the memory for the entire array is allocated during compile-time. The compiler knows the size of the array at compile-time, 
// so it allocates the necessary memory space directly in the executable file. This memory allocation is static and fixed; 
// it does not change during runtime.

// the size of the pointer is fixed irrespective of the data-type, it may differ only based on the architecture else, it is same 
// the size allocated for an pointer is same.

// 1st program to show that array and pointers are different 
#include <iostream> 
using namespace std; 
int main1() 
{ 
	int arr[] = { 10, 20, 30, 40, 50, 60 }; 

	// Assigns address of array to ptr 
	int* ptr = arr; 
    int (*ptr1)[6]=&arr;
	cout << "Value of first element is "<<ptr1<<" "<<ptr1+1; 
	return 0; 
}

// another one about the differnce in arr and &arr.
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    
    // Pointer to the first element of the array
    int* ptr = arr;
    
    // Pointer to the entire array
    int (*ptr1)[6] = &arr;

    // Accessing individual elements using ptr
    cout << "Using ptr:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    // Accessing entire array using ptr1
    cout << "Using ptr1:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << "Element " << i << ": " << (*ptr1)[i] << endl;
    }

    // Printing addresses
    cout << "Address of arr: " << arr << endl;
    cout << "Address pointed by ptr: " << ptr << endl;
    cout << "Address pointed by ptr1: " << ptr1 << endl;

    return 0;
}


// next fact is.
// array subscipt such as arr[i], is same as *(arr + i). actually this is what happens internally also.
