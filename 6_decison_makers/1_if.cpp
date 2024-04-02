#include<iostream>

void fun1(){
    int num1=10, num2=101;
    if(num1<num2){
        std::cout<<num1;
        std::cout<<num1;
        std::cout<<num1;        
    }
}

// suppose if for only one line then no need of brackets.

void fun2(){
    int num1=10, num2=101;
    if(num1>num2)
        std::cout<<num1;
        std::cout<<num1;
        std::cout<<num1;        
}

// in the above case, for using without brackets. so in that. if the if-condition is true, then it will consider only the the nest line in its block
int main(){
    fun1();
    fun2();
    return 0;
}