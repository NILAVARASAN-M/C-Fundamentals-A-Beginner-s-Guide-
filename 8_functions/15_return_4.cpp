// next is using the refrence concept in c++

#include<iostream>

void funct(int num1, int num2, int& greater, int& smaller){
    if(num1>num2){
        greater=num1;
        smaller=num2;
    }
    else{
        greater=num2;
        smaller=num1;
    }
}

int main(){
    int num1=1000, num2=100, great, small;
    funct(num1, num2, great, small);
    std::cout<<great<<" "<<small<<std::endl;
    return 0;
}

// another ways are using class, and stl tuples -> study later.