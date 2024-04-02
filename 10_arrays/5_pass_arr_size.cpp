// we will see how to find the size of an array in c++, finding in an function how.???

// C Program to demonstrate incorrect usage of sizeof() for
// arrays
#include <stdio.h>

void fun(int arr[])
{
	int i;

	// sizeof should not be used here to get number
	// of elements in array
	int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", arr_size); // --> 1 is the output.
	for (i = 0; i < arr_size; i++) {
		arr[i] = i;
	}
	// executed two times only
}

// Driver Code
int main()
{
	int i;
	int arr[4] = { 0, 0, 0, 0 };
	fun(arr);

	// use of sizeof is fine here
	// for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	// 	printf(" %d ", arr[i]);

	getchar();
	return 0;
}

// here the piece of code will generate a error. b/c arr in the function is an pointer, arr_size in above function is nothing but.
// size(int *)/ sizeof(int) --> which will give '1', which is wrong.