/*
next is 5.) assignment operators. +=, -=, /=, *= operators
*/
// 6.) ternary operators.
// this one is very similar to the if else condition, for simple if else condition we can use this is better comaptively then them.
// syntax: condition ? value_if_true : value_if_false
#include<iostream>

int main(){
    int num1=10, num2=4;
    std::cout<<((num1==num2)?"Equal":"Not-Equal")<<std::endl;
    std::cout<<(num1!=num2)?"Equal":"Not-Equal"; // this will give 1 b/c of the fact the ? operators has more precendence them <<,
    //so first they get evaluated which is 1, so that is the output produced
    std::cout<<std::endl<<((num1!=num2)?"Equal":"Not-Equal")<<std::endl; 
}