// printing a two dimensional array by using pointers.

#include<iostream>

int main(){
    int nums[3][3]  =  { { 16, 18, 20 }, { 25, 26, 27 }, {100, 1000, 103} };
    // 1.) printing the memory address of the first row.
    std::cout<<*nums<<std::endl;
    // in here we are printing the memory address of the first row.
    // 2.) value of the first element.
    std::cout<<**nums<<std::endl;
    // *nums will have the memory address of the first row, and again using (**nums), this will print the memory address of the arr[0][0]
    //3.) to print nums[0][2]
    std::cout<<*((*nums)+2)<<std::endl;
    // to access the 2 column, in from the first row.
    //4.) printing all elements.
    int row=sizeof(nums)/sizeof(nums[0]);
    int col=sizeof(nums[0])/sizeof(nums[0][0]);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            std::cout<<*((*nums+i*col)+j)<<" ";
        }
        std::cout<<std::endl;
    }
    // 5.) another easy way is that.
    for(int i=0;i<row;i++){
        std::cout<<nums[i]<<std::endl;
        std::cout<<*nums[i]<<std::endl;
    }
    // from here it is clear that the compiler will automtically go that memory location, of nums[i]
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
        std::cout<<*(nums[i]+j)<<std::endl;
       }
    }
}
// in this nums will have memory adress of the nums[0], the first row of the 2d-array.

// what will nums have????

/*
In the case of a 2D array like `int nums[2][3]`, the name `nums` represents the address of the first element of the array. 
However, the first element of `nums` is itself an array (`nums[0]`), not an integer. So, the type of `nums` is a pointer to 
an array of integers.

In other words, `nums` is a pointer to the first row of the 2D array. Each element of `nums` is a pointer to the first element
 of each row. Therefore, `nums` has the type `int (*)[3]`, which is a pointer to an array of 3 integers.

To visualize it:

- `nums` points to the first row (`nums[0]`) of the 2D array.
- `nums[0]` points to the first element of the first row (`nums[0][0]`).
- `nums[1]` points to the first element of the second row (`nums[1][0]`).

So, `nums` holds the address of the first row of the 2D array, and you can use it to access elements of the 
array using array subscript notation.
*/

// how a 2d-array is represented in memory ???
/*

A 2D array in memory is represented as a contiguous block of memory, with rows of elements placed one after another.
 Each row is itself an array of elements, and these row arrays are placed sequentially in memory.
*/
/*
{ { 16, 18, 20 }, { 25, 26, 27 }, {100, 1000, 103} } 
--------->
-------------------------------------
|  16  |  18  |  20  |  25  |  26  |  27  |  100  |  1000  |  103  |
-------------------------------------

*/