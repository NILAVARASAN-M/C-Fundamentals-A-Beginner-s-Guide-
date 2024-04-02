// we wills see how we will access the elemnets without using indexes.

#include<iostream>

int main(){
    int arr[5]={1,2,3,4,5};
    std::cout<<*arr<<std::endl;
    std::cout<<*(arr+1)<<std::endl;
    std::cout<<*(arr+2)<<std::endl;
    std::cout<<*(arr+3)<<std::endl;
    std::cout<<*(arr+4)<<std::endl;
    return 0;
}

// when use arr[0], or arr[2] --> same above happens internally. since arr is the base address adding a integer 
// the compiler we add 1 it will deduce to size 4, and 2 means 8 automatically beacuse int is of size=4.
// and in the memory location we are derefrencing.