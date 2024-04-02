// small basics on pointers, about the arithmetic operation performed on pointers.
/*
In C++, when you add an integer value to a pointer, the pointer is incremented by a number of elements based on the 
size of the type it points to. 

For example, if `arr` is a pointer to an integer, then `arr + 5` doesn't mean the memory address of `arr` plus 5. Instead, 
it means the memory address of `arr` plus enough bytes to hold 5 integers.

So, if `arr` is a pointer to the beginning of an integer array, `arr + 5` will point to the address that is 5 integers 
away from the address `arr` is pointing to. This is pointer arithmetic, and it's a convenient way to access elements in 
an array or iterate over a range of memory locations.
*/

#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    // Get the address of the first element of the array
    int* ptr = arr;

    // Increment the pointer by 1 elements
    int* ptrAfter1 = arr + 1;

    // Increment the pointer by 2 elements
    int* ptrAfter2 = arr + 2;

    // Increment the pointer by 3 elements
    int* ptrAfter3 = arr + 3;

    // Increment the pointer by 4 elements
    int* ptrAfter4 = arr + 4;

    // Print the memory addresses of arr and arr + 5
    std::cout << "Address of arr: " << *arr << std::endl;
    std::cout << "Address of arr + 5: " << *ptrAfter1 << std::endl;
    std::cout << "Address of arr + 5: " << *ptrAfter2 << std::endl;
    std::cout << "Address of arr + 5: " << *ptrAfter3 << std::endl;
    std::cout << "Address of arr + 5: " << *ptrAfter4 << std::endl;
    return 0;
}

// so this is pow it works for pointers.