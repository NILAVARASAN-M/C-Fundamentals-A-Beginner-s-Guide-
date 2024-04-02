// lets dicusse some application of pointers.

//1.) To Modify the Content of Dynamically Allocated Memory
// C program to modify dynamically allocated memory

#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for an integer and set its
// value
void dynamicMemoryAllocation(int** myptr)
{
	*myptr = (int*)malloc(sizeof(int));
	if (*myptr != NULL) {
		**myptr = 20;
	}
}

int main()
{
	int* val;

	// calling the function to allocate memory dynamically
	// and set the value
	dynamicMemoryAllocation(&val);
	printf("Dynamic value set is: %d\n", *val);
	// free up the allocated memory
	free(val);
	return 0;
}

// in here myptr is a pointer pointing to a pointer, that points to an integer in memory.
// ptr->ptr->int;, myptr=&val, and w.k.t the val is not pointing to any and *mpyptr--> in here if we place some address, then val will no point to
// that.

// 2.) to pass mutiple arguments.
