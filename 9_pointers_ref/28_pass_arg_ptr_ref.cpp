// we will see a simple a function, done using pointers and another using refrences.

#include<iostream>

//using pointers
void swap1(int* ptr1, int* ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
// using refrences
void swap2(int& ref1, int& ref2){
    int temp=ref1;
    ref1=ref2;
    ref2=temp;
}

int main(){
    int num1=100, num2=123;
    swap1(&num1, &num2);
    std::cout<<num1<<" "<<num2<<std::endl;
    swap2(num1, num2);
    std::cout<<num1<<" "<<num2<<std::endl;
    return 0;
}

// A pointer to a class/struct uses ‘->’ (arrow operator) to access its members whereas a reference uses a ‘.’ (dot operator)