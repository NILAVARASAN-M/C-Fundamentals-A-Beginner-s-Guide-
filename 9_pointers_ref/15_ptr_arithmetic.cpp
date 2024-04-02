// there are many arithmetic operations, that can be performed on a pointer. below are the list of operation that can be performed.
/*
1.)Incrementing and Decrementing Pointers
2.)Addition of Constant to Pointers
3.)Subtraction of Constant from Pointers
4.)Subtraction of Two Pointers of the Same Type
5.)Comparison of Pointers
*/
// -----> this are the operations that can be done on pointers.
// this 1, 2, 3 are aldready known, 
// to the memory address we add some integer value, but this integer will directly point to the next data. this achivied bc the pointer knows what
// is the data-type. so adding and subtracting happens, accordingly.


#include <iostream> 
using namespace std; 
// 4.)
// CPP program to demonstrate the subtraction of two pointers 
int fun1() 
{ 

	int num = 45; 
	int* ptr1 = &num;
	// Adding 4 to ptr1 and stored in ptr2 
	int* ptr2 = ptr1 + 4; 
	cout << "Address stored in ptr1:" << ptr1 << endl; 
	cout << "Address stored in ptr2:" << ptr2 << endl; 
	// Subtracting ptr2 from ptr1 
	cout << "ptr2 - ptr1 = " << ptr2 - ptr1 << endl; 
    int arr[]={1,2,3,4,5};
    cout<<arr-(arr+4);
	return 0; 
}

//5.)
// to do comparision in pointers, this comparsion is we can do >, <, >=, <=, == etc.
// the main purpose of this is to check if two pointers are pointing to the same memory location or different.
// using == this. suppose a void pointer, and integer pointer is there pointing to the same memory location.
// if we use ==, it will return true.

// 6.) to check if an pointer is pointing to some location or not, this is achivied using the comparsion operation == and null;
/*
int num = 10; 
    // assigning null in case we dont use pointer 
    int* ptr = NULL; 
    ptr = # 
  
    // checking if the pointer is in use or not 
    if (ptr == NULL) { 
        cout << "No value is pointed"; 
    } 
    else { 
        cout << "The value pointed is " << *ptr; 
    } 
*/
// --------> this is how we check if an pointer is pointing or not.