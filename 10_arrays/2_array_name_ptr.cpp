// the array name itself is an pointer, arr[5]. here arr is n pointer having the address of the arr[0]. the elemnets in an 
// array or stored in conatgoius memory location.

#include<iostream>

int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    std::cout<<ptr<<std::endl;
    std::cout<<arr<<std::endl;
    std::cout<<&arr<<std::endl;
}
// here arr is pointing to the address of arr[0] this is implicitly done.
// &arr is not the address of arr, but is the address of the array.
// arr is an pointer, but there is not specifiic location given for it 
// it is just an label, and unlike pointer there is no specfic location give for this.


/*
The concept of `arr` as it relates to an array in C or C++ can be a bit nuanced. When we declare an array like `int arr[5];`, `arr` represents the address of the first element of the array in memory. However, it's crucial to distinguish between `arr` as an identifier in the source code and what actually happens in memory at runtime.

### In Source Code

- **`arr` as an Identifier:** In your source code, `arr` is a name that refers to the start of a block of memory allocated for the array. It's a way for the programmer and the compiler to refer to the array.
- **No Separate Memory for `arr`:** Unlike a pointer variable, which occupies its own space in memory to store the address it points to, the name `arr` does not have a separate memory location allocated for it. The name `arr` is essentially a compile-time concept.

### At Runtime

- **Memory Allocation for Elements:** The memory allocated for an array is strictly for its elements. If `arr` is an array of 5 integers, memory is allocated for these 5 integers, not for `arr` itself.
- **Address Representation:** When we use `arr` in an expression, it represents the base address of the array (i.e., the address of the first element). This conversion from the name `arr` to the address it represents is done by the compiler.

### Comparison with Pointers

When we declare a pointer like `int *p;` and then allocate memory to it or assign it the address of an integer, `p` occupies memory to store the address it holds. This is a key difference from `arr` in the array declaration `int arr[5];` where `arr` directly represents the start of the array's memory block and does not occupy separate memory to store an address.

### Summary

- **`arr` as an Array Name:** Does not occupy memory for storing an address; it is a label for the location of the array's first element.
- **Pointer Variable:** Occupies memory to store an address it points to.

This distinction emphasizes how array names and pointer variables are treated differently by the language, despite their similar usage in certain contexts.
*/