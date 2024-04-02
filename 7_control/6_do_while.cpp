// Loops come into use when we need to repeatedly execute a block of statements. Like while the do-while 
// loop execution is also terminated on the basis of a test condition. The main difference between a do-while loop 
// and a while loop is in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop 
// is exit controlled whereas the other two loops are entry-controlled loops. 

// this do while loop is used when u want to execute a piece of code, and after that u want to check the condition is met or not,
// this is usefull in two pointer methods, or questions related in cycles.

#include<iostream>

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int i=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    do{
        std::cout<<arr[i]<<" ";
        i=(i+1)%size;
    }
    while(i!=0);
}
// if we would have followed while, loop it would have been difficult this is how to use do-while loop.