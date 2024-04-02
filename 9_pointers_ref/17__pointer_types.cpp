// below are the types of pointer, that are present.
/*
1.) dangling pointer.
2.) void pointers.
3.) null pointer.
4.) wild pointer.
*/

// wild pointers, are the pointers which are declared but not defined.

#include <stdio.h>

int main()
{
	int* p; /* wild pointer */

	// trying to access the value pointed by a wild pointer
	// is undefined behavior
	// printf("Value pointed by wild pointer: %d\n", *p);
	// //give error

	int x = 10;

	// Accessing the value pointed by 'p'
	printf("Value pointed by 'p' is: %d\n", *p);

	return 0;
}
