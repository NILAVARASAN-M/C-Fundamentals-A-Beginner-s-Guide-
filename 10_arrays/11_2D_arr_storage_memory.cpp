// we will see how an two dimesional array is stored in memory.
// how it can be derefrnced and how can it be accessed.

// first we will see how an 2D-array is stored in memory????????????????????

// Since memory in a computer is organized linearly it is not possible to store the 2-D array in rows and columns. 
// The concept of rows and columns is only theoretical, actually, a 2-D array is stored in row-major order i.e rows are
//  placed next to each other. The following figure shows how the above 2-D array will be stored in memory.

// how a 3*4 array is stored in memory???

// Each row can be considered as a 1-D array, so a two-dimensional array can be considered as a collection of 
// one-dimensional arrays that are placed one after another. In other words, we can say that 2-D dimensional 
// arrays that are placed one after another. So here arr is an array of 3 elements where each element is a 1-D array of 4 integers. 

// accessing the elements by derefrencing.
/*
Since arr + i points to ith element of arr, on dereferencing it will get ith element of arr which is of course a 1-D array. Thus the expression *(arr + i) gives us the base address of ith 1-D array.
We know, the pointer expression *(arr + i) is equivalent to the subscript expression arr[i]. So *(arr + i) which is same as arr[i] gives us the base address of ith 1-D array.
To access an individual element of our 2-D array, we should be able to access any jth element of ith 1-D array.
Since the base type of *(arr + i) is int and it contains the address of 0th element of ith 1-D array, we can get the addresses of subsequent elements in the ith 1-D array by adding integer values to *(arr + i).
For example *(arr + i) + 1 will represent the address of 1st element of 1stelement of ith 1-D array and *(arr+i)+2 will represent the address of 2nd element of ith 1-D array.
Similarly *(arr + i) + j will represent the address of jth element of ith 1-D array. On dereferencing this expression we can get the jth element of the ith 1-D array.
*/
