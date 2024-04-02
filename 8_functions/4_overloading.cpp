/*
C++ Overloading (Function)
If we create two or more members having the same name but different in number or type of parameters, it is known as C++ overloading. 

In C++, we can overload:
methods,
constructors and
indexed properties

Types of overloading in C++ are:
Function overloading
Operator overloading
*/

// function overloading

#include<iostream>

class Calc{
    public:
    int add(int num1, int num2);
    int add(int num1, int num2, int num3);
};

int Calc::add(int num1, int num2){
    return num1+num2;
}

int Calc::add(int num1, int num2, int num3){
    return num1+num2+num3;
}