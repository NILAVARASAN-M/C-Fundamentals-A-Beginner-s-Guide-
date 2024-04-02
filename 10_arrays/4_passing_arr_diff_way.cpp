// till now we have seen one aproach of passing an array, that is using pointers, and the size of the array as an argument.
// now we will see another way of doing this.

#include<iostream>

void funct(int arr[5]){
    std::cout<<sizeof(arr);
}

int main1(){
    int arr[]={1,2,3,4,5};
    funct(arr);
}

// this will not print the size, because arr that is declared is a argument of an function and a  spcace will be allocated in stack,
// unlike the arr in main function where it serves as an lable.

// but to avoid this we can use an alternative way.

void funct2(int (&arr)[5]){
    std::cout<<sizeof(arr);
}


int main(){
    int arr[]={1,2,3,4,5};
    funct2(arr);
}


// in the above code, we are explicitly declaring size as 5 to avoid this see below code.
// suppose if we are taking the size of an array as input from user, then we dont know what may be size, so we have to create function
// for each size, then it will be infinte. to avoid we use the below template class.

template <size_t N>
void funct3(int (&arr)[N]){
    std::cout << "Size of array: " << sizeof(arr) << std::endl;
    std::cout << "Number of elements in array: " << N << std::endl;
}