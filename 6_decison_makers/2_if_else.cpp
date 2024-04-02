#include<iostream>

// this using brackets
void fun1(){
    int num1=10, num2=100;
    if(num1>num2){
        std::cout<<"statement1"<<std::endl;
        std::cout<<"statement2"<<std::endl;
    }
    else{
        std::cout<<"statement3"<<std::endl;
        std::cout<<"statement4"<<std::endl;
    }
}
void fun2(){
    int num1=10, num2=100;
    if(num1>num2)
        std::cout<<"statement1"<<std::endl;
    else
        std::cout<<"statement3"<<std::endl;
    std::cout<<"statement4"<<std::endl;
}
int main(){
    fun1();
    fun2();
}