// we will find how we find size for an array,
// there is no direct function, for this we have to use sizeof operator for this.

#include<iostream>

int main(){
    int arr[5]={1,2,3,4,5};
    std::cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}