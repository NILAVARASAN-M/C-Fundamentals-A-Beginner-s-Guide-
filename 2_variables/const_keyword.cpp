#include<iostream>

int main(){
    const int a=10, b=10;
    std::cout<<a+b;
    std::cout<<"hi";
    return 0;
}
// here the const is the keyword and is very similar to the final in java
// const means that variable value should be defined and declaration is not possible, or not allowed
// and the value will be same, and cannot be changed or modification is not allowe.
/*
corret:
const a = 10;
*/
/*
wrong:
const a;
a=10;
*/
/*
wrong:
const a = 10;
a=100;
*/