#include<iostream>

//The reason we associate data type with a pointer is that it 
// knows how many bytes the data is stored in. When we increment a pointer, we increase the pointer 
// by the size of the data type to which it points.

// this is one of the common question that will arise, why do we asscoiate data-type, b/c it seems unnecsary, but is neccesary when u do
// arithmetic operations on the pointers.
//EG: int arr[]={1,2,3,4}; int *ptr=arr; --> now ptr will have memory address of tge arr[0], but now u want to access the arr[1], but
// how the memory_address_of_current + size_of_data+type. so addr(arr[0])+4(since it is an integer) --> next location.
// but now for accesing arr[1], we dont need to do ptr+4, but ptr+1, this will give the next integet location. the pointer understands this 
// with the help of the data-type. so it is neccesary.

int main(){
    int arr[]={1,2,3,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int* ptr=arr;
    for(int i=0;i<size;i++){
        std::cout<<*ptr<<" ";
        ptr+=1;
    }
    return 0;
}