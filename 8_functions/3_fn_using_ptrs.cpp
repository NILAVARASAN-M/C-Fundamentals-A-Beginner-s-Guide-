#include<iostream>


// for an number
void fun(int* num){
    std::cin>>*num;
}

// for an array way-1 using pointers
void fun2(int* num, int si_ze){
    for(int i=0;i<si_ze;i++){
        std::cout<<num[i]<<" ";
    }
    std::cout<<std::endl;
}

// for an array way-2 using pointers.
void fun3(int (&arr)[7]){
    for (int i = 0; i < 7; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
/*
The expression `(int (&arr)[5])` represents a reference to an array of 5 integers in C++. Let's break it down:

- `(int (&arr)[5])`: This part defines a reference to an array of 5 integers.
- `&arr`: This indicates that `arr` is a reference. It means that `arr` is an alias for some array, rather than being a separate copy of it.
- `[5]`: This specifies the size of the array that `arr` refers to. In this case, it's an array of 5 integers.

So, `(int (&arr)[5])` declares a reference `arr` to an array of 5 integers. This is commonly used in function 
parameters when you want to pass an array to a function by reference, ensuring that the function can access and modify the original array.
*/
// we make to sure the size is perfect.



int main(){
    int num=100;
    std::cout<<num<<std::endl;
    fun(&num);
    std::cout<<num<<std::endl;
    int arr[]={1,2,3,4,500,12,34};
    fun2(arr, sizeof(arr)/sizeof(arr[0]));
    fun3(arr);
    return 0;
}