#include<iostream>

void fun1(){
    int num;
    std::cin>>num;
    if(0<=num && num<=10){
        std::cout<<"number is between 0 and 10";
    }
    else if(11<=num && num<=20){
        std::cout<<"number is between 11 and 20";
    }
    else if(21<=num && num<=30){
        std::cout<<"number is between 21 and 30";
    }
    else if(31<=num && num<=40){
        std::cout<<"number is between 31 and 40";
    }
    else if(41<=num && num<=50){
        std::cout<<"number is between 41 and 50";
    }
    else{
        std::cout<<"number is bif";
    }
}

void fun2(){
    int num;
    std::cin>>num;
    if(0<=num && num<=10)
        std::cout<<"number is between 0 and 10";
    else if(11<=num && num<=20)
        std::cout<<"number is between 11 and 20";
    else if(21<=num && num<=30)
        std::cout<<"number is between 21 and 30";
    else if(31<=num && num<=40)
        std::cout<<"number is between 31 and 40";
    else if(41<=num &&  num<=50)
        std::cout<<"number is between 41 and 50";
    else
        std::cout<<"number is bif";
}

int main(){
    fun1();
    fun2();
    return 0;
}