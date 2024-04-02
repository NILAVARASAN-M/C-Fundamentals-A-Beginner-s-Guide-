// in a fucntion it isgeneral w.k.t we have to return the dattype specified, it nothing specified then we use void, and to break out of an void
// function we use ----> return; to accompolish this.

// in python we know that we can return mutiple values, we can return any number of values, but how to achiave this same task in c++

// there are few indirect ways to achieve this, some are discussed below:

/*
1.)By using pointers.
2.)By using structures.
3.)By using Arrays.
*/

// 1.) using pointers

#include<iostream>

void max_min_num(int num1, int num2, int* greater_num, int* smaller_num){
    if(num1>num2){
        *greater_num=num1;
        *smaller_num=num2;
    }
    else{
        *greater_num=num2;
        *smaller_num=num1;
    }
    return;
}

int main(){
    int num1=10, num2=110, greater_num, smaller_num;
    max_min_num(num1, num2, &greater_num, &smaller_num);
    std::cout<<"Greatest Number:"<<greater_num<<std::endl<<"Smallest Number:"<<smaller_num<<std::endl;
    return 0;
}