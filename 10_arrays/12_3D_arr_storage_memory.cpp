// Thus the pointer expression *(*(*(arr + i ) + j ) + k) is equivalent to the subscript expression arr[i][j][k]. 
// We know the expression *(arr + i) is equivalent to arr[i] and the expression *(*(arr + i) + j) is equivalent arr[i][j].
//  So we can say that arr[i] represents the base address of ith 2-D array and arr[i][j] represents the base address of the jth 1-D array. 

// we will see how we will defrence an 3D-array.

// int arr[][][];

//1.) arr -> this points to the 3D array.
//2.) *arr -> this gives  the base address 1st 2D array in that 3D array.
//3.) *arr + i -> this has the address of the ith row 1D array from, the first 2D-array.
//4.) *(arr + i) -> this is the ith 2D array from the 3D array.
//5.) *(arr + i) + j -> this has the base address of the jth 1D array from the ith 2D-array.
//6.) *(*(arr + i) + j) ->this gives the  address of the first element from the jth 1D array from the ith 2D-array.
//7.) *(*(*(arr + i) + j)) --> this give the value at the first element from the jth 1D array from the ith 2D-array.

// so atlast to say *(*(*(arr + i ) + j ) + k), is the i,j,k element in the 3D-array.

//  *(*(*(arr + i ) + j ) + k) is equivalent to the subscript expression arr[i][j][k]