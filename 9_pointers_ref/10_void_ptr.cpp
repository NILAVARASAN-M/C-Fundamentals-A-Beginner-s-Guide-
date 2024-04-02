// void pointers, this are an special type of pointers, this type of pointers can point to any type of data.
// this will be usefull suppose when u dont know what is the data-type, but u want a pointer to store the memory address of that.

// A void pointer is a pointer that has no associated data type with it. A void pointer can hold an address of any
// type and can be typecasted to any type.
// C Program to demonstrate that a void pointer
// can hold the address of any type-castable type

#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	char b = 'x';
	// void pointer holds address of int 'a'
	void* p = &a;
	// void pointer holds address of char 'b'
	p = &b;
    char *ptr=&b;
    std::cout<<ptr<<std::endl; // ----> (1)
    std::cout<<static_cast<void *>(ptr)<<" "<<p;
    return 0;
}
// so this void pointer can have address of both the integer and the char data-type.

// now one dought may arise in the ----->(1), because ptr is a pointer, we expect that we get a memory address, but we are getting the char value
// ????

// std::cout treats a char* as a C-style string and prints the characters until it encounters a null terminator ('\0'). 
// In this case, since 'ptr' points to a single character, 'x', it will print characters starting from 'x' until it finds 
// a null terminator, which may lead to unexpected behavior if 'b' is not null-terminated. To print the memory address itself,
// you can cast 'ptr' to a void* to avoid this interpretation:

// suppose we want to print, the memory address, then  we have to forecfully convert the variable using static_cast<> ---> to a void pointer
// b/c if we convert it again to a char pointer it will print value stored in that memory, and does it untill it finds a null termicator ('\0)