// to achieve the same using structure's in c++

#include<iostream>

// two ways of using or defining typedef structures.

// way1

struct GreatestNumber1{
    int greater, smaller;
};

typedef struct  GreatestNumber1 Struct1;
/*
Struct: This is the alias created for the structure GreaterSmaller. It allows you to use Struct as a shorthand for struct GreaterSmaller.
*/

// way2

typedef struct GreatestNumber2
{
    int greater, smaller;
}Struct2;

// this are the ways of defining the typedef structures.

Struct1 findGreaterSmaller1(int a, int b)
{
    Struct1 s;
    if (a > b) {
        s.greater = a;
        s.smaller = b;
    }
    else {
        s.greater = b;
        s.smaller = a;
    }
    return s;
}

Struct2 findGreaterSmaller2(int a, int b)
{
    Struct2 s;
    if(a>b){
        s.greater=a;
        s.smaller=b;
    }
    else{
        s.greater=b;
        s.smaller=a;
    }
    return s;
}

int main(){
    int num1=10, num2=100;
    Struct1 s1=findGreaterSmaller1(num1, num2);
    Struct2 s2=findGreaterSmaller2(num1, num2);
    std::cout<<s1.greater<<" "<<s1.smaller<<std::endl;
    std::cout<<s2.greater<<" "<<s2.smaller<<std::endl;
    return 0;
}