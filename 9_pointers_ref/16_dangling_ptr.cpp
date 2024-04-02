// Dangling Pointer
// A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. Such a situation can
// lead to unexpected behavior in the program and also serve as a source of bugs in C programs.

// there are many places where a pointer becomes a dangling pointer, some are listed below.

#include <stdio.h>
#include <stdlib.h>
// 1.) De-allocation of Memory

int fun1()
{
    int* ptr = (int*)malloc(sizeof(int));
    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    // ---------------> after ptr becomes a dangling pointer.
    printf("Memory freed\n");
    // removing Dangling Pointer
    ptr = NULL;
    return 0;
}

//2.) Function Call 

// C program to demonstrate the pointer pointing to local
// variable becomes dangling when local variable is not
// static.
#include <stdio.h>

int* fun2()
{
	// x is local variable and goes out of
	// scope after an execution of fun() is
	// over.
	int x = 5;

	return &x;
}

// this code, here in main function when fun2() is called, the function get invoked and placed in stack, but after the function finished executing
//  the x variable will be free, since the scope is in the function level, so the pointer has some address, but no data in that.
// similar to EOC-2, where all the content in function will be cleared, after the function-call is returned.

// Driver Code
int main()
{
	int* p = fun2();
	fflush(stdin); // flushing the standard input stream

	// p points to something which is not
	// valid anymore
	printf("%d", *p);
	return 0;
}

// to solve the above problem we can declare the variable as static, and then do.
// same way, any variable declared in a particular scope will be destroyed, and the pointer becomes a danging pointer.